"use strict"

module.exports = grammar({
	name: "shdl",

	rules: {
		source_file: $ => repeat($._single_line),

		_single_line: $ => choice(
			$.definition,
			$.connection
		),

		definition: $ => choice(
			$._input_definition,
			$._output_definition,
			$._inout_definition,
			$._wire_definition,
			$._const_definition,
			$._include_definition,
			$._chip_definition
		),

		_input_definition: $ => seq(
			"input",
			$.identifier,
			optional($._pin_count_specifier)//,
			//optional($.expression)
		),

		_output_definition: $ => seq(
			"output",
			$.identifier,
			optional($._pin_count_specifier)
		),

		_inout_definition: $ => seq(
			"inout",
			$.identifier,
			optional($._pin_count_specifier)
		),

		_wire_definition: $ => seq(
			"wire",
			$.identifier,
			optional($._pin_count_specifier)
		),

		_const_definition: $ => seq(
			"const",
			$.identifier,
			$.expression
		),

		_include_definition: $ => seq(
			"include",
			$.identifier,
			$.path
		),

		_chip_definition: $ => seq(
			"chip",
			$.identifier,
			optional($._pin_count_specifier),
			$.path
		),

		_pin_count_specifier: $ => /\[\d+\]/,

		_pin_specifier: $ => choice(
			/\[\*\d+([\+\-]\d+)?\]/,
			/\[\d+(:\d+)?\]/
		),

		identifier: $ => /%w/,

		expression: $ => seq(
			repeat(seq(
				repeat($._unary_operator),
				$._value,
				$._operator
			)),
			$._value
		),

		_unary_operator: $ => choice(
			"--",
			"++",
			"-",
			"!"
		),

		_value: $ => choice(
			seq($.identifier, optional($._pin_specifier)),
			seq($.identifier, optional($._pin_specifier), ".", $.identifier, optional($._pin_specifier)),
			/\d*[btqodx]\d+/
		),

		_operator: $ => choice(
			"+"
		),

		path: $ => seq(
			repeat(seq(
				/\w+/,
				"."
			)),
			/\w+/
		),

		connection: $ => seq(
			$.identifier,
			"=",
			$.expression
		)
	}
});
