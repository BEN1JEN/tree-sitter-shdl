#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 56
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_input = 1,
  anon_sym_output = 2,
  anon_sym_inout = 3,
  anon_sym_wire = 4,
  anon_sym_const = 5,
  anon_sym_include = 6,
  anon_sym_chip = 7,
  sym__pin_count_specifier = 8,
  aux_sym__pin_specifier_token1 = 9,
  aux_sym__pin_specifier_token2 = 10,
  sym_identifier = 11,
  anon_sym_DASH_DASH = 12,
  anon_sym_PLUS_PLUS = 13,
  anon_sym_DASH = 14,
  anon_sym_BANG = 15,
  anon_sym_DOT = 16,
  aux_sym__value_token1 = 17,
  anon_sym_PLUS = 18,
  aux_sym_path_token1 = 19,
  anon_sym_EQ = 20,
  sym_source_file = 21,
  sym__single_line = 22,
  sym_definition = 23,
  sym__input_definition = 24,
  sym__output_definition = 25,
  sym__inout_definition = 26,
  sym__wire_definition = 27,
  sym__const_definition = 28,
  sym__include_definition = 29,
  sym__chip_definition = 30,
  sym__pin_specifier = 31,
  sym_expression = 32,
  sym__unary_operator = 33,
  sym__value = 34,
  sym__operator = 35,
  sym_path = 36,
  sym_connection = 37,
  aux_sym_source_file_repeat1 = 38,
  aux_sym_expression_repeat1 = 39,
  aux_sym_expression_repeat2 = 40,
  aux_sym_path_repeat1 = 41,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_inout] = "inout",
  [anon_sym_wire] = "wire",
  [anon_sym_const] = "const",
  [anon_sym_include] = "include",
  [anon_sym_chip] = "chip",
  [sym__pin_count_specifier] = "_pin_count_specifier",
  [aux_sym__pin_specifier_token1] = "_pin_specifier_token1",
  [aux_sym__pin_specifier_token2] = "_pin_specifier_token2",
  [sym_identifier] = "identifier",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_DOT] = ".",
  [aux_sym__value_token1] = "_value_token1",
  [anon_sym_PLUS] = "+",
  [aux_sym_path_token1] = "path_token1",
  [anon_sym_EQ] = "=",
  [sym_source_file] = "source_file",
  [sym__single_line] = "_single_line",
  [sym_definition] = "definition",
  [sym__input_definition] = "_input_definition",
  [sym__output_definition] = "_output_definition",
  [sym__inout_definition] = "_inout_definition",
  [sym__wire_definition] = "_wire_definition",
  [sym__const_definition] = "_const_definition",
  [sym__include_definition] = "_include_definition",
  [sym__chip_definition] = "_chip_definition",
  [sym__pin_specifier] = "_pin_specifier",
  [sym_expression] = "expression",
  [sym__unary_operator] = "_unary_operator",
  [sym__value] = "_value",
  [sym__operator] = "_operator",
  [sym_path] = "path",
  [sym_connection] = "connection",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_expression_repeat2] = "expression_repeat2",
  [aux_sym_path_repeat1] = "path_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chip] = {
    .visible = true,
    .named = false,
  },
  [sym__pin_count_specifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__pin_specifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__pin_specifier_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__single_line] = {
    .visible = false,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__input_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__output_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__inout_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__wire_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__const_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__include_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__chip_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__pin_specifier] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__unary_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym__operator] = {
    .visible = false,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_connection] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(3);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == '=')
        ADVANCE(7);
      if (lookahead == '[')
        ADVANCE(8);
      if (lookahead == 'c')
        ADVANCE(9);
      if (lookahead == 'i')
        ADVANCE(10);
      if (lookahead == 'o')
        ADVANCE(11);
      if (lookahead == 'w')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('b' <= lookahead && lookahead <= 'd') ||
          lookahead == 'q' ||
          lookahead == 't' ||
          lookahead == 'x')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 3:
      if (lookahead == 'w')
        ADVANCE(15);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(16);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 8:
      if (lookahead == '*')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'h')
        ADVANCE(19);
      if (lookahead == 'o')
        ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'n')
        ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'u')
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'i')
        ADVANCE(24);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'o' ||
          lookahead == 'q' ||
          lookahead == 't' ||
          lookahead == 'x')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == ':')
        ADVANCE(26);
      if (lookahead == ']')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == 'i')
        ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'n')
        ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'c')
        ADVANCE(30);
      if (lookahead == 'o')
        ADVANCE(31);
      if (lookahead == 'p')
        ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 't')
        ADVANCE(33);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__value_token1);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == 'r')
        ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == ']')
        ADVANCE(35);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__pin_count_specifier);
      END_STATE();
    case 28:
      if (lookahead == 'p')
        ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 's')
        ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == 'l')
        ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'u')
        ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'u')
        ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'p')
        ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'e')
        ADVANCE(44);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__pin_specifier_token1);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == ']')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_chip);
      END_STATE();
    case 39:
      if (lookahead == 't')
        ADVANCE(47);
      END_STATE();
    case 40:
      if (lookahead == 'u')
        ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 't')
        ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == 't')
        ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 'u')
        ADVANCE(51);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_wire);
      END_STATE();
    case 45:
      if (lookahead == ']')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__pin_specifier_token2);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 48:
      if (lookahead == 'd')
        ADVANCE(52);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 51:
      if (lookahead == 't')
        ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == 'e')
        ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 55:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(56);
      if (lookahead == 'c')
        ADVANCE(9);
      if (lookahead == 'i')
        ADVANCE(10);
      if (lookahead == 'o')
        ADVANCE(57);
      if (lookahead == 'w')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(55);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      END_STATE();
    case 57:
      if (lookahead == 'u')
        ADVANCE(22);
      END_STATE();
    case 58:
      if (lookahead == ']')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == '=')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      END_STATE();
    case 60:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(3);
      if (lookahead == '+')
        ADVANCE(61);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(60);
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'o' ||
          lookahead == 'q' ||
          lookahead == 't' ||
          lookahead == 'x')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 61:
      if (lookahead == '+')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 63:
      if (lookahead == '[')
        ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(3);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == 'c')
        ADVANCE(9);
      if (lookahead == 'i')
        ADVANCE(10);
      if (lookahead == 'o')
        ADVANCE(57);
      if (lookahead == 'w')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(65);
      END_STATE();
    case 66:
      if (lookahead == '*')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == ':')
        ADVANCE(26);
      if (lookahead == ']')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 55},
  [2] = {.lex_state = 55},
  [3] = {.lex_state = 55},
  [4] = {.lex_state = 55},
  [5] = {.lex_state = 55},
  [6] = {.lex_state = 59},
  [7] = {.lex_state = 55},
  [8] = {.lex_state = 55},
  [9] = {.lex_state = 55},
  [10] = {.lex_state = 55},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 55},
  [13] = {.lex_state = 60},
  [14] = {.lex_state = 55},
  [15] = {.lex_state = 55},
  [16] = {.lex_state = 63},
  [17] = {.lex_state = 60},
  [18] = {.lex_state = 55},
  [19] = {.lex_state = 63},
  [20] = {.lex_state = 55},
  [21] = {.lex_state = 55},
  [22] = {.lex_state = 65},
  [23] = {.lex_state = 60},
  [24] = {.lex_state = 55},
  [25] = {.lex_state = 60},
  [26] = {.lex_state = 65},
  [27] = {.lex_state = 55},
  [28] = {.lex_state = 55},
  [29] = {.lex_state = 65},
  [30] = {.lex_state = 55},
  [31] = {.lex_state = 63},
  [32] = {.lex_state = 55},
  [33] = {.lex_state = 55},
  [34] = {.lex_state = 63},
  [35] = {.lex_state = 55},
  [36] = {.lex_state = 55},
  [37] = {.lex_state = 55},
  [38] = {.lex_state = 65},
  [39] = {.lex_state = 60},
  [40] = {.lex_state = 65},
  [41] = {.lex_state = 60},
  [42] = {.lex_state = 65},
  [43] = {.lex_state = 60},
  [44] = {.lex_state = 63},
  [45] = {.lex_state = 65},
  [46] = {.lex_state = 63},
  [47] = {.lex_state = 55},
  [48] = {.lex_state = 65},
  [49] = {.lex_state = 55},
  [50] = {.lex_state = 65},
  [51] = {.lex_state = 60},
  [52] = {.lex_state = 65},
  [53] = {.lex_state = 65},
  [54] = {.lex_state = 65},
  [55] = {.lex_state = 65},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [aux_sym__pin_specifier_token2] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_wire] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [aux_sym__pin_specifier_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_inout] = ACTIONS(1),
    [sym__pin_count_specifier] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__value_token1] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_chip] = ACTIONS(1),
  },
  [1] = {
    [sym__input_definition] = STATE(10),
    [sym__output_definition] = STATE(10),
    [sym__chip_definition] = STATE(10),
    [sym_source_file] = STATE(11),
    [sym_connection] = STATE(12),
    [sym__wire_definition] = STATE(10),
    [sym__inout_definition] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym_definition] = STATE(12),
    [sym__const_definition] = STATE(10),
    [sym__include_definition] = STATE(10),
    [sym__single_line] = STATE(12),
    [anon_sym_const] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_wire] = ACTIONS(7),
    [anon_sym_input] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_output] = ACTIONS(15),
    [anon_sym_chip] = ACTIONS(17),
    [anon_sym_inout] = ACTIONS(19),
  },
  [2] = {
    [sym_identifier] = ACTIONS(21),
  },
  [3] = {
    [sym_identifier] = ACTIONS(23),
  },
  [4] = {
    [sym_identifier] = ACTIONS(25),
  },
  [5] = {
    [sym_identifier] = ACTIONS(27),
  },
  [6] = {
    [anon_sym_EQ] = ACTIONS(29),
  },
  [7] = {
    [sym_identifier] = ACTIONS(31),
  },
  [8] = {
    [sym_identifier] = ACTIONS(33),
  },
  [9] = {
    [sym_identifier] = ACTIONS(35),
  },
  [10] = {
    [anon_sym_const] = ACTIONS(37),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_wire] = ACTIONS(37),
    [anon_sym_input] = ACTIONS(37),
    [anon_sym_include] = ACTIONS(37),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_output] = ACTIONS(37),
    [anon_sym_chip] = ACTIONS(37),
    [anon_sym_inout] = ACTIONS(37),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(39),
  },
  [12] = {
    [sym__input_definition] = STATE(10),
    [sym__output_definition] = STATE(10),
    [sym__chip_definition] = STATE(10),
    [sym_connection] = STATE(21),
    [sym__inout_definition] = STATE(10),
    [sym__wire_definition] = STATE(10),
    [sym__single_line] = STATE(21),
    [sym_definition] = STATE(21),
    [sym__const_definition] = STATE(10),
    [sym__include_definition] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(21),
    [anon_sym_const] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_wire] = ACTIONS(7),
    [anon_sym_input] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_output] = ACTIONS(15),
    [anon_sym_chip] = ACTIONS(17),
    [anon_sym_inout] = ACTIONS(19),
  },
  [13] = {
    [aux_sym_expression_repeat2] = STATE(23),
    [sym__unary_operator] = STATE(25),
    [sym_expression] = STATE(24),
    [aux_sym_expression_repeat1] = STATE(25),
    [sym__value] = STATE(26),
    [anon_sym_PLUS_PLUS] = ACTIONS(43),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH_DASH] = ACTIONS(43),
    [aux_sym__value_token1] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
  },
  [14] = {
    [anon_sym_const] = ACTIONS(51),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_wire] = ACTIONS(51),
    [anon_sym_input] = ACTIONS(51),
    [anon_sym_include] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
    [anon_sym_output] = ACTIONS(51),
    [anon_sym_chip] = ACTIONS(51),
    [anon_sym_inout] = ACTIONS(51),
    [sym__pin_count_specifier] = ACTIONS(53),
  },
  [15] = {
    [anon_sym_const] = ACTIONS(55),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_wire] = ACTIONS(55),
    [anon_sym_input] = ACTIONS(55),
    [anon_sym_include] = ACTIONS(55),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_output] = ACTIONS(55),
    [anon_sym_chip] = ACTIONS(55),
    [anon_sym_inout] = ACTIONS(55),
    [sym__pin_count_specifier] = ACTIONS(57),
  },
  [16] = {
    [sym_path] = STATE(30),
    [aux_sym_path_repeat1] = STATE(31),
    [aux_sym_path_token1] = ACTIONS(59),
  },
  [17] = {
    [aux_sym_expression_repeat2] = STATE(23),
    [sym__unary_operator] = STATE(25),
    [sym_expression] = STATE(32),
    [aux_sym_expression_repeat1] = STATE(25),
    [sym__value] = STATE(26),
    [anon_sym_PLUS_PLUS] = ACTIONS(43),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH_DASH] = ACTIONS(43),
    [aux_sym__value_token1] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
  },
  [18] = {
    [anon_sym_const] = ACTIONS(61),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_wire] = ACTIONS(61),
    [anon_sym_input] = ACTIONS(61),
    [anon_sym_include] = ACTIONS(61),
    [sym_identifier] = ACTIONS(61),
    [anon_sym_output] = ACTIONS(61),
    [anon_sym_chip] = ACTIONS(61),
    [anon_sym_inout] = ACTIONS(61),
    [sym__pin_count_specifier] = ACTIONS(63),
  },
  [19] = {
    [sym_path] = STATE(35),
    [aux_sym_path_repeat1] = STATE(31),
    [aux_sym_path_token1] = ACTIONS(59),
    [sym__pin_count_specifier] = ACTIONS(65),
  },
  [20] = {
    [anon_sym_const] = ACTIONS(67),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_wire] = ACTIONS(67),
    [anon_sym_input] = ACTIONS(67),
    [anon_sym_include] = ACTIONS(67),
    [sym_identifier] = ACTIONS(67),
    [anon_sym_output] = ACTIONS(67),
    [anon_sym_chip] = ACTIONS(67),
    [anon_sym_inout] = ACTIONS(67),
    [sym__pin_count_specifier] = ACTIONS(69),
  },
  [21] = {
    [sym__input_definition] = STATE(10),
    [sym__output_definition] = STATE(10),
    [sym__chip_definition] = STATE(10),
    [sym_connection] = STATE(21),
    [sym__inout_definition] = STATE(10),
    [sym__wire_definition] = STATE(10),
    [sym__single_line] = STATE(21),
    [sym_definition] = STATE(21),
    [sym__const_definition] = STATE(10),
    [sym__include_definition] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(21),
    [anon_sym_const] = ACTIONS(71),
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_wire] = ACTIONS(76),
    [anon_sym_input] = ACTIONS(79),
    [anon_sym_include] = ACTIONS(82),
    [sym_identifier] = ACTIONS(85),
    [anon_sym_output] = ACTIONS(88),
    [anon_sym_chip] = ACTIONS(91),
    [anon_sym_inout] = ACTIONS(94),
  },
  [22] = {
    [sym__pin_specifier] = STATE(38),
    [aux_sym__pin_specifier_token2] = ACTIONS(97),
    [anon_sym_wire] = ACTIONS(99),
    [anon_sym_input] = ACTIONS(99),
    [anon_sym_include] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(99),
    [aux_sym__pin_specifier_token1] = ACTIONS(97),
    [anon_sym_inout] = ACTIONS(99),
    [anon_sym_const] = ACTIONS(99),
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(101),
    [anon_sym_output] = ACTIONS(99),
    [anon_sym_chip] = ACTIONS(99),
  },
  [23] = {
    [aux_sym_expression_repeat2] = STATE(39),
    [sym__unary_operator] = STATE(25),
    [aux_sym_expression_repeat1] = STATE(25),
    [sym__value] = STATE(40),
    [anon_sym_PLUS_PLUS] = ACTIONS(43),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH_DASH] = ACTIONS(43),
    [aux_sym__value_token1] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
  },
  [24] = {
    [anon_sym_const] = ACTIONS(105),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_wire] = ACTIONS(105),
    [anon_sym_input] = ACTIONS(105),
    [anon_sym_include] = ACTIONS(105),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_output] = ACTIONS(105),
    [anon_sym_chip] = ACTIONS(105),
    [anon_sym_inout] = ACTIONS(105),
  },
  [25] = {
    [aux_sym_expression_repeat1] = STATE(41),
    [sym__unary_operator] = STATE(41),
    [sym__value] = STATE(42),
    [anon_sym_PLUS_PLUS] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_DASH_DASH] = ACTIONS(107),
    [aux_sym__value_token1] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(111),
    [sym_identifier] = ACTIONS(49),
  },
  [26] = {
    [sym__operator] = STATE(43),
    [anon_sym_const] = ACTIONS(113),
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_wire] = ACTIONS(113),
    [anon_sym_input] = ACTIONS(113),
    [anon_sym_include] = ACTIONS(113),
    [sym_identifier] = ACTIONS(113),
    [anon_sym_output] = ACTIONS(113),
    [anon_sym_chip] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_inout] = ACTIONS(113),
  },
  [27] = {
    [anon_sym_const] = ACTIONS(117),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_wire] = ACTIONS(117),
    [anon_sym_input] = ACTIONS(117),
    [anon_sym_include] = ACTIONS(117),
    [sym_identifier] = ACTIONS(117),
    [anon_sym_output] = ACTIONS(117),
    [anon_sym_chip] = ACTIONS(117),
    [anon_sym_inout] = ACTIONS(117),
  },
  [28] = {
    [anon_sym_const] = ACTIONS(119),
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_wire] = ACTIONS(119),
    [anon_sym_input] = ACTIONS(119),
    [anon_sym_include] = ACTIONS(119),
    [sym_identifier] = ACTIONS(119),
    [anon_sym_output] = ACTIONS(119),
    [anon_sym_chip] = ACTIONS(119),
    [anon_sym_inout] = ACTIONS(119),
  },
  [29] = {
    [anon_sym_const] = ACTIONS(121),
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_wire] = ACTIONS(121),
    [anon_sym_input] = ACTIONS(121),
    [anon_sym_include] = ACTIONS(121),
    [sym_identifier] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(123),
    [anon_sym_output] = ACTIONS(121),
    [anon_sym_chip] = ACTIONS(121),
    [anon_sym_inout] = ACTIONS(121),
  },
  [30] = {
    [anon_sym_const] = ACTIONS(125),
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_wire] = ACTIONS(125),
    [anon_sym_input] = ACTIONS(125),
    [anon_sym_include] = ACTIONS(125),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_output] = ACTIONS(125),
    [anon_sym_chip] = ACTIONS(125),
    [anon_sym_inout] = ACTIONS(125),
  },
  [31] = {
    [aux_sym_path_repeat1] = STATE(46),
    [aux_sym_path_token1] = ACTIONS(127),
  },
  [32] = {
    [anon_sym_const] = ACTIONS(129),
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_wire] = ACTIONS(129),
    [anon_sym_input] = ACTIONS(129),
    [anon_sym_include] = ACTIONS(129),
    [sym_identifier] = ACTIONS(129),
    [anon_sym_output] = ACTIONS(129),
    [anon_sym_chip] = ACTIONS(129),
    [anon_sym_inout] = ACTIONS(129),
  },
  [33] = {
    [anon_sym_const] = ACTIONS(131),
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_wire] = ACTIONS(131),
    [anon_sym_input] = ACTIONS(131),
    [anon_sym_include] = ACTIONS(131),
    [sym_identifier] = ACTIONS(131),
    [anon_sym_output] = ACTIONS(131),
    [anon_sym_chip] = ACTIONS(131),
    [anon_sym_inout] = ACTIONS(131),
  },
  [34] = {
    [sym_path] = STATE(47),
    [aux_sym_path_repeat1] = STATE(31),
    [aux_sym_path_token1] = ACTIONS(59),
  },
  [35] = {
    [anon_sym_const] = ACTIONS(133),
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_wire] = ACTIONS(133),
    [anon_sym_input] = ACTIONS(133),
    [anon_sym_include] = ACTIONS(133),
    [sym_identifier] = ACTIONS(133),
    [anon_sym_output] = ACTIONS(133),
    [anon_sym_chip] = ACTIONS(133),
    [anon_sym_inout] = ACTIONS(133),
  },
  [36] = {
    [anon_sym_const] = ACTIONS(135),
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_wire] = ACTIONS(135),
    [anon_sym_input] = ACTIONS(135),
    [anon_sym_include] = ACTIONS(135),
    [sym_identifier] = ACTIONS(135),
    [anon_sym_output] = ACTIONS(135),
    [anon_sym_chip] = ACTIONS(135),
    [anon_sym_inout] = ACTIONS(135),
  },
  [37] = {
    [sym_identifier] = ACTIONS(137),
  },
  [38] = {
    [anon_sym_const] = ACTIONS(139),
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_wire] = ACTIONS(139),
    [anon_sym_input] = ACTIONS(139),
    [anon_sym_include] = ACTIONS(139),
    [sym_identifier] = ACTIONS(139),
    [anon_sym_DOT] = ACTIONS(141),
    [anon_sym_output] = ACTIONS(139),
    [anon_sym_chip] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_inout] = ACTIONS(139),
  },
  [39] = {
    [aux_sym_expression_repeat2] = STATE(39),
    [sym__unary_operator] = STATE(25),
    [aux_sym_expression_repeat1] = STATE(25),
    [sym__value] = STATE(50),
    [anon_sym_PLUS_PLUS] = ACTIONS(143),
    [anon_sym_BANG] = ACTIONS(143),
    [anon_sym_DASH_DASH] = ACTIONS(143),
    [aux_sym__value_token1] = ACTIONS(146),
    [anon_sym_DASH] = ACTIONS(149),
    [sym_identifier] = ACTIONS(152),
  },
  [40] = {
    [sym__operator] = STATE(43),
    [anon_sym_const] = ACTIONS(155),
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_wire] = ACTIONS(155),
    [anon_sym_input] = ACTIONS(155),
    [anon_sym_include] = ACTIONS(155),
    [sym_identifier] = ACTIONS(155),
    [anon_sym_output] = ACTIONS(155),
    [anon_sym_chip] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_inout] = ACTIONS(155),
  },
  [41] = {
    [aux_sym_expression_repeat1] = STATE(41),
    [sym__unary_operator] = STATE(41),
    [anon_sym_PLUS_PLUS] = ACTIONS(157),
    [anon_sym_BANG] = ACTIONS(157),
    [anon_sym_DASH_DASH] = ACTIONS(157),
    [aux_sym__value_token1] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(162),
    [sym_identifier] = ACTIONS(160),
  },
  [42] = {
    [sym__operator] = STATE(51),
    [anon_sym_PLUS] = ACTIONS(165),
  },
  [43] = {
    [anon_sym_PLUS_PLUS] = ACTIONS(167),
    [anon_sym_BANG] = ACTIONS(167),
    [anon_sym_DASH_DASH] = ACTIONS(167),
    [aux_sym__value_token1] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(169),
    [sym_identifier] = ACTIONS(167),
  },
  [44] = {
    [aux_sym_path_token1] = ACTIONS(171),
  },
  [45] = {
    [anon_sym_const] = ACTIONS(173),
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_wire] = ACTIONS(173),
    [anon_sym_input] = ACTIONS(173),
    [anon_sym_include] = ACTIONS(173),
    [sym_identifier] = ACTIONS(173),
    [anon_sym_DOT] = ACTIONS(123),
    [anon_sym_output] = ACTIONS(173),
    [anon_sym_chip] = ACTIONS(173),
    [anon_sym_inout] = ACTIONS(173),
  },
  [46] = {
    [aux_sym_path_repeat1] = STATE(46),
    [aux_sym_path_token1] = ACTIONS(175),
  },
  [47] = {
    [anon_sym_const] = ACTIONS(178),
    [ts_builtin_sym_end] = ACTIONS(178),
    [anon_sym_wire] = ACTIONS(178),
    [anon_sym_input] = ACTIONS(178),
    [anon_sym_include] = ACTIONS(178),
    [sym_identifier] = ACTIONS(178),
    [anon_sym_output] = ACTIONS(178),
    [anon_sym_chip] = ACTIONS(178),
    [anon_sym_inout] = ACTIONS(178),
  },
  [48] = {
    [sym__pin_specifier] = STATE(53),
    [anon_sym_const] = ACTIONS(180),
    [aux_sym__pin_specifier_token2] = ACTIONS(182),
    [ts_builtin_sym_end] = ACTIONS(180),
    [anon_sym_wire] = ACTIONS(180),
    [anon_sym_input] = ACTIONS(180),
    [anon_sym_include] = ACTIONS(180),
    [sym_identifier] = ACTIONS(180),
    [anon_sym_output] = ACTIONS(180),
    [anon_sym_chip] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(180),
    [aux_sym__pin_specifier_token1] = ACTIONS(182),
    [anon_sym_inout] = ACTIONS(180),
  },
  [49] = {
    [sym_identifier] = ACTIONS(184),
  },
  [50] = {
    [sym__operator] = STATE(43),
    [anon_sym_PLUS] = ACTIONS(115),
  },
  [51] = {
    [anon_sym_PLUS_PLUS] = ACTIONS(186),
    [anon_sym_BANG] = ACTIONS(186),
    [anon_sym_DASH_DASH] = ACTIONS(186),
    [aux_sym__value_token1] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_identifier] = ACTIONS(186),
  },
  [52] = {
    [anon_sym_DOT] = ACTIONS(123),
  },
  [53] = {
    [anon_sym_const] = ACTIONS(190),
    [ts_builtin_sym_end] = ACTIONS(190),
    [anon_sym_wire] = ACTIONS(190),
    [anon_sym_input] = ACTIONS(190),
    [anon_sym_include] = ACTIONS(190),
    [sym_identifier] = ACTIONS(190),
    [anon_sym_output] = ACTIONS(190),
    [anon_sym_chip] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_inout] = ACTIONS(190),
  },
  [54] = {
    [sym__pin_specifier] = STATE(55),
    [anon_sym_const] = ACTIONS(190),
    [aux_sym__pin_specifier_token2] = ACTIONS(192),
    [ts_builtin_sym_end] = ACTIONS(190),
    [anon_sym_wire] = ACTIONS(190),
    [anon_sym_input] = ACTIONS(190),
    [anon_sym_include] = ACTIONS(190),
    [sym_identifier] = ACTIONS(190),
    [anon_sym_output] = ACTIONS(190),
    [anon_sym_chip] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(190),
    [aux_sym__pin_specifier_token1] = ACTIONS(192),
    [anon_sym_inout] = ACTIONS(190),
  },
  [55] = {
    [anon_sym_const] = ACTIONS(194),
    [ts_builtin_sym_end] = ACTIONS(194),
    [anon_sym_wire] = ACTIONS(194),
    [anon_sym_input] = ACTIONS(194),
    [anon_sym_include] = ACTIONS(194),
    [sym_identifier] = ACTIONS(194),
    [anon_sym_output] = ACTIONS(194),
    [anon_sym_chip] = ACTIONS(194),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_inout] = ACTIONS(194),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(6),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, SHIFT(13),
  [23] = {.count = 1, .reusable = true}, SHIFT(14),
  [25] = {.count = 1, .reusable = true}, SHIFT(15),
  [27] = {.count = 1, .reusable = true}, SHIFT(16),
  [29] = {.count = 1, .reusable = true}, SHIFT(17),
  [31] = {.count = 1, .reusable = true}, SHIFT(18),
  [33] = {.count = 1, .reusable = true}, SHIFT(19),
  [35] = {.count = 1, .reusable = true}, SHIFT(20),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 1),
  [39] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [43] = {.count = 1, .reusable = true}, SHIFT(25),
  [45] = {.count = 1, .reusable = true}, SHIFT(26),
  [47] = {.count = 1, .reusable = false}, SHIFT(25),
  [49] = {.count = 1, .reusable = true}, SHIFT(22),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym__wire_definition, 2),
  [53] = {.count = 1, .reusable = true}, SHIFT(27),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym__input_definition, 2),
  [57] = {.count = 1, .reusable = true}, SHIFT(28),
  [59] = {.count = 1, .reusable = true}, SHIFT(29),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym__output_definition, 2),
  [63] = {.count = 1, .reusable = true}, SHIFT(33),
  [65] = {.count = 1, .reusable = true}, SHIFT(34),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym__inout_definition, 2),
  [69] = {.count = 1, .reusable = true}, SHIFT(36),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [74] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [97] = {.count = 1, .reusable = true}, SHIFT(38),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [101] = {.count = 1, .reusable = true}, SHIFT(37),
  [103] = {.count = 1, .reusable = true}, SHIFT(40),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym__const_definition, 3),
  [107] = {.count = 1, .reusable = true}, SHIFT(41),
  [109] = {.count = 1, .reusable = true}, SHIFT(42),
  [111] = {.count = 1, .reusable = false}, SHIFT(41),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [115] = {.count = 1, .reusable = true}, SHIFT(43),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym__wire_definition, 3),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym__input_definition, 3),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_path, 1),
  [123] = {.count = 1, .reusable = true}, SHIFT(44),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym__include_definition, 3),
  [127] = {.count = 1, .reusable = true}, SHIFT(45),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_connection, 3),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym__output_definition, 3),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym__chip_definition, 3),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym__inout_definition, 3),
  [137] = {.count = 1, .reusable = true}, SHIFT(48),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym__value, 2),
  [141] = {.count = 1, .reusable = true}, SHIFT(49),
  [143] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_repeat2, 2), SHIFT_REPEAT(25),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_repeat2, 2), SHIFT_REPEAT(50),
  [149] = {.count = 2, .reusable = false}, REDUCE(aux_sym_expression_repeat2, 2), SHIFT_REPEAT(25),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_repeat2, 2), SHIFT_REPEAT(22),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [157] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(41),
  [160] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expression_repeat1, 2),
  [162] = {.count = 2, .reusable = false}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(41),
  [165] = {.count = 1, .reusable = true}, SHIFT(51),
  [167] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expression_repeat2, 2),
  [169] = {.count = 1, .reusable = false}, REDUCE(aux_sym_expression_repeat2, 2),
  [171] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_path, 2),
  [175] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(52),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym__chip_definition, 4),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym__value, 3),
  [182] = {.count = 1, .reusable = true}, SHIFT(53),
  [184] = {.count = 1, .reusable = true}, SHIFT(54),
  [186] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expression_repeat2, 3),
  [188] = {.count = 1, .reusable = false}, REDUCE(aux_sym_expression_repeat2, 3),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym__value, 4),
  [192] = {.count = 1, .reusable = true}, SHIFT(55),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym__value, 5),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_shdl(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
