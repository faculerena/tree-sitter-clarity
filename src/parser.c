#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 203
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_LPAREN = 2,
  anon_sym_define_DASHtrait = 3,
  anon_sym_RPAREN = 4,
  anon_sym_impl_DASHtrait = 5,
  anon_sym_DOT = 6,
  anon_sym_use_DASHtrait = 7,
  anon_sym_define_DASHfungible_DASHtoken = 8,
  anon_sym_define_DASHnon_DASHfungible_DASHtoken = 9,
  anon_sym_define_DASHconstant = 10,
  sym_constant = 11,
  anon_sym_define_DASHdata_DASHvar = 12,
  anon_sym_define_DASHmap = 13,
  anon_sym_define_DASHread_DASHonly = 14,
  anon_sym_define_DASHprivate = 15,
  anon_sym_define_DASHpublic = 16,
  anon_sym_let = 17,
  anon_sym_LT = 18,
  anon_sym_GT = 19,
  anon_sym_int = 20,
  anon_sym_uint = 21,
  anon_sym_bool = 22,
  anon_sym_principal = 23,
  anon_sym_buff = 24,
  aux_sym_buffer_type_token1 = 25,
  anon_sym_string_DASHascii = 26,
  anon_sym_string_DASHutf8 = 27,
  anon_sym_list = 28,
  anon_sym_optional = 29,
  anon_sym_tuple = 30,
  anon_sym_LBRACE = 31,
  anon_sym_COMMA = 32,
  anon_sym_RBRACE = 33,
  anon_sym_COLON = 34,
  anon_sym_response = 35,
  anon_sym_DASH = 36,
  sym_uint_lit = 37,
  anon_sym_true = 38,
  anon_sym_false = 39,
  anon_sym_SQUOTE = 40,
  aux_sym_standard_principal_lit_token1 = 41,
  anon_sym_0x = 42,
  aux_sym_buffer_lit_token1 = 43,
  anon_sym_DQUOTE = 44,
  aux_sym_ascii_string_lit_token1 = 45,
  sym_utf8_string_lit = 46,
  anon_sym_some = 47,
  sym_none_lit = 48,
  anon_sym_ok = 49,
  anon_sym_err = 50,
  anon_sym_block_DASHheight = 51,
  anon_sym_burn_DASHblock_DASHheight = 52,
  anon_sym_chain_id = 53,
  anon_sym_contract_DASHcaller = 54,
  anon_sym_is_DASHin_mainnet = 55,
  anon_sym_is_DASHin_DASHregtest = 56,
  anon_sym_stx_DASHliquid_DASHsupply = 57,
  anon_sym_tx_DASHsender = 58,
  anon_sym_tx_DASHsponsor_QMARK = 59,
  anon_sym_PLUS = 60,
  anon_sym_SLASH = 61,
  anon_sym_STAR = 62,
  anon_sym_LT_EQ = 63,
  anon_sym_GT_EQ = 64,
  sym_comment = 65,
  sym_source = 66,
  sym__expression = 67,
  sym_deployment_expression = 68,
  sym_trait_definition = 69,
  sym_trait_implementation = 70,
  sym_trait_usage = 71,
  sym_token_definition = 72,
  sym_fungible_token_definition = 73,
  sym_non_fungible_token_definition = 74,
  sym_constant_definition = 75,
  sym_variable_definition = 76,
  sym_mapping_definition = 77,
  sym_function_definition = 78,
  sym_common_expression = 79,
  sym_let_expression = 80,
  sym_local_binding = 81,
  sym_function_signature = 82,
  sym_function_parameter = 83,
  sym_function_signature_for_trait = 84,
  sym_parameter_type = 85,
  sym_trait_type = 86,
  sym_native_type = 87,
  sym_buffer_type = 88,
  sym_ascii_string_type = 89,
  sym_utf8_string_type = 90,
  sym_list_type = 91,
  sym_optional_type = 92,
  sym_tuple_type_for_trait = 93,
  sym_tuple_type = 94,
  sym__tuple_type_pair = 95,
  sym_response_type = 96,
  sym__parameter = 97,
  sym__literal = 98,
  sym_int_lit = 99,
  sym_bool_lit = 100,
  sym_standard_principal_lit = 101,
  sym_contract_principal_lit = 102,
  sym_buffer_lit = 103,
  sym_ascii_string_lit = 104,
  sym_list_lit = 105,
  sym_list_lit_token = 106,
  sym_some_lit = 107,
  sym_tuple_lit = 108,
  sym__tuple_lit_pair = 109,
  sym_response_lit = 110,
  sym_global = 111,
  sym_arithmetic_function = 112,
  sym_boolean_function = 113,
  aux_sym_source_repeat1 = 114,
  aux_sym_trait_definition_repeat1 = 115,
  aux_sym_common_expression_repeat1 = 116,
  aux_sym_let_expression_repeat1 = 117,
  aux_sym_let_expression_repeat2 = 118,
  aux_sym_function_signature_repeat1 = 119,
  aux_sym_function_signature_for_trait_repeat1 = 120,
  aux_sym_tuple_type_for_trait_repeat1 = 121,
  aux_sym_tuple_type_repeat1 = 122,
  aux_sym_tuple_lit_repeat1 = 123,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_define_DASHtrait] = "define-trait",
  [anon_sym_RPAREN] = ")",
  [anon_sym_impl_DASHtrait] = "impl-trait",
  [anon_sym_DOT] = ".",
  [anon_sym_use_DASHtrait] = "use-trait",
  [anon_sym_define_DASHfungible_DASHtoken] = "define-fungible-token",
  [anon_sym_define_DASHnon_DASHfungible_DASHtoken] = "define-non-fungible-token",
  [anon_sym_define_DASHconstant] = "define-constant",
  [sym_constant] = "constant",
  [anon_sym_define_DASHdata_DASHvar] = "define-data-var",
  [anon_sym_define_DASHmap] = "define-map",
  [anon_sym_define_DASHread_DASHonly] = "define-read-only",
  [anon_sym_define_DASHprivate] = "define-private",
  [anon_sym_define_DASHpublic] = "define-public",
  [anon_sym_let] = "let",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_int] = "int",
  [anon_sym_uint] = "uint",
  [anon_sym_bool] = "bool",
  [anon_sym_principal] = "principal",
  [anon_sym_buff] = "buff",
  [aux_sym_buffer_type_token1] = "buffer_type_token1",
  [anon_sym_string_DASHascii] = "string-ascii",
  [anon_sym_string_DASHutf8] = "string-utf8",
  [anon_sym_list] = "list",
  [anon_sym_optional] = "optional",
  [anon_sym_tuple] = "tuple",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_response] = "response",
  [anon_sym_DASH] = "-",
  [sym_uint_lit] = "uint_lit",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_standard_principal_lit_token1] = "standard_principal_lit_token1",
  [anon_sym_0x] = "0x",
  [aux_sym_buffer_lit_token1] = "buffer_lit_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_ascii_string_lit_token1] = "ascii_string_lit_token1",
  [sym_utf8_string_lit] = "utf8_string_lit",
  [anon_sym_some] = "some",
  [sym_none_lit] = "none_lit",
  [anon_sym_ok] = "ok",
  [anon_sym_err] = "err",
  [anon_sym_block_DASHheight] = "block-height",
  [anon_sym_burn_DASHblock_DASHheight] = "burn-block-height",
  [anon_sym_chain_id] = "chain_id",
  [anon_sym_contract_DASHcaller] = "contract-caller",
  [anon_sym_is_DASHin_mainnet] = "is-in_mainnet",
  [anon_sym_is_DASHin_DASHregtest] = "is-in-regtest",
  [anon_sym_stx_DASHliquid_DASHsupply] = "stx-liquid-supply",
  [anon_sym_tx_DASHsender] = "tx-sender",
  [anon_sym_tx_DASHsponsor_QMARK] = "tx-sponsor\?",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR] = "*",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [sym_comment] = "comment",
  [sym_source] = "source",
  [sym__expression] = "_expression",
  [sym_deployment_expression] = "deployment_expression",
  [sym_trait_definition] = "trait_definition",
  [sym_trait_implementation] = "trait_implementation",
  [sym_trait_usage] = "trait_usage",
  [sym_token_definition] = "token_definition",
  [sym_fungible_token_definition] = "fungible_token_definition",
  [sym_non_fungible_token_definition] = "non_fungible_token_definition",
  [sym_constant_definition] = "constant_definition",
  [sym_variable_definition] = "variable_definition",
  [sym_mapping_definition] = "mapping_definition",
  [sym_function_definition] = "function_definition",
  [sym_common_expression] = "common_expression",
  [sym_let_expression] = "let_expression",
  [sym_local_binding] = "local_binding",
  [sym_function_signature] = "function_signature",
  [sym_function_parameter] = "function_parameter",
  [sym_function_signature_for_trait] = "function_signature_for_trait",
  [sym_parameter_type] = "parameter_type",
  [sym_trait_type] = "trait_type",
  [sym_native_type] = "native_type",
  [sym_buffer_type] = "buffer_type",
  [sym_ascii_string_type] = "ascii_string_type",
  [sym_utf8_string_type] = "utf8_string_type",
  [sym_list_type] = "list_type",
  [sym_optional_type] = "optional_type",
  [sym_tuple_type_for_trait] = "tuple_type_for_trait",
  [sym_tuple_type] = "tuple_type",
  [sym__tuple_type_pair] = "_tuple_type_pair",
  [sym_response_type] = "response_type",
  [sym__parameter] = "_parameter",
  [sym__literal] = "_literal",
  [sym_int_lit] = "int_lit",
  [sym_bool_lit] = "bool_lit",
  [sym_standard_principal_lit] = "standard_principal_lit",
  [sym_contract_principal_lit] = "contract_principal_lit",
  [sym_buffer_lit] = "buffer_lit",
  [sym_ascii_string_lit] = "ascii_string_lit",
  [sym_list_lit] = "list_lit",
  [sym_list_lit_token] = "list_lit_token",
  [sym_some_lit] = "some_lit",
  [sym_tuple_lit] = "tuple_lit",
  [sym__tuple_lit_pair] = "_tuple_lit_pair",
  [sym_response_lit] = "response_lit",
  [sym_global] = "global",
  [sym_arithmetic_function] = "arithmetic_function",
  [sym_boolean_function] = "boolean_function",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_trait_definition_repeat1] = "trait_definition_repeat1",
  [aux_sym_common_expression_repeat1] = "common_expression_repeat1",
  [aux_sym_let_expression_repeat1] = "let_expression_repeat1",
  [aux_sym_let_expression_repeat2] = "let_expression_repeat2",
  [aux_sym_function_signature_repeat1] = "function_signature_repeat1",
  [aux_sym_function_signature_for_trait_repeat1] = "function_signature_for_trait_repeat1",
  [aux_sym_tuple_type_for_trait_repeat1] = "tuple_type_for_trait_repeat1",
  [aux_sym_tuple_type_repeat1] = "tuple_type_repeat1",
  [aux_sym_tuple_lit_repeat1] = "tuple_lit_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_define_DASHtrait] = anon_sym_define_DASHtrait,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_impl_DASHtrait] = anon_sym_impl_DASHtrait,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_use_DASHtrait] = anon_sym_use_DASHtrait,
  [anon_sym_define_DASHfungible_DASHtoken] = anon_sym_define_DASHfungible_DASHtoken,
  [anon_sym_define_DASHnon_DASHfungible_DASHtoken] = anon_sym_define_DASHnon_DASHfungible_DASHtoken,
  [anon_sym_define_DASHconstant] = anon_sym_define_DASHconstant,
  [sym_constant] = sym_constant,
  [anon_sym_define_DASHdata_DASHvar] = anon_sym_define_DASHdata_DASHvar,
  [anon_sym_define_DASHmap] = anon_sym_define_DASHmap,
  [anon_sym_define_DASHread_DASHonly] = anon_sym_define_DASHread_DASHonly,
  [anon_sym_define_DASHprivate] = anon_sym_define_DASHprivate,
  [anon_sym_define_DASHpublic] = anon_sym_define_DASHpublic,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_principal] = anon_sym_principal,
  [anon_sym_buff] = anon_sym_buff,
  [aux_sym_buffer_type_token1] = aux_sym_buffer_type_token1,
  [anon_sym_string_DASHascii] = anon_sym_string_DASHascii,
  [anon_sym_string_DASHutf8] = anon_sym_string_DASHutf8,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_tuple] = anon_sym_tuple,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_response] = anon_sym_response,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_uint_lit] = sym_uint_lit,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_standard_principal_lit_token1] = aux_sym_standard_principal_lit_token1,
  [anon_sym_0x] = anon_sym_0x,
  [aux_sym_buffer_lit_token1] = aux_sym_buffer_lit_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_ascii_string_lit_token1] = aux_sym_ascii_string_lit_token1,
  [sym_utf8_string_lit] = sym_utf8_string_lit,
  [anon_sym_some] = anon_sym_some,
  [sym_none_lit] = sym_none_lit,
  [anon_sym_ok] = anon_sym_ok,
  [anon_sym_err] = anon_sym_err,
  [anon_sym_block_DASHheight] = anon_sym_block_DASHheight,
  [anon_sym_burn_DASHblock_DASHheight] = anon_sym_burn_DASHblock_DASHheight,
  [anon_sym_chain_id] = anon_sym_chain_id,
  [anon_sym_contract_DASHcaller] = anon_sym_contract_DASHcaller,
  [anon_sym_is_DASHin_mainnet] = anon_sym_is_DASHin_mainnet,
  [anon_sym_is_DASHin_DASHregtest] = anon_sym_is_DASHin_DASHregtest,
  [anon_sym_stx_DASHliquid_DASHsupply] = anon_sym_stx_DASHliquid_DASHsupply,
  [anon_sym_tx_DASHsender] = anon_sym_tx_DASHsender,
  [anon_sym_tx_DASHsponsor_QMARK] = anon_sym_tx_DASHsponsor_QMARK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [sym_comment] = sym_comment,
  [sym_source] = sym_source,
  [sym__expression] = sym__expression,
  [sym_deployment_expression] = sym_deployment_expression,
  [sym_trait_definition] = sym_trait_definition,
  [sym_trait_implementation] = sym_trait_implementation,
  [sym_trait_usage] = sym_trait_usage,
  [sym_token_definition] = sym_token_definition,
  [sym_fungible_token_definition] = sym_fungible_token_definition,
  [sym_non_fungible_token_definition] = sym_non_fungible_token_definition,
  [sym_constant_definition] = sym_constant_definition,
  [sym_variable_definition] = sym_variable_definition,
  [sym_mapping_definition] = sym_mapping_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_common_expression] = sym_common_expression,
  [sym_let_expression] = sym_let_expression,
  [sym_local_binding] = sym_local_binding,
  [sym_function_signature] = sym_function_signature,
  [sym_function_parameter] = sym_function_parameter,
  [sym_function_signature_for_trait] = sym_function_signature_for_trait,
  [sym_parameter_type] = sym_parameter_type,
  [sym_trait_type] = sym_trait_type,
  [sym_native_type] = sym_native_type,
  [sym_buffer_type] = sym_buffer_type,
  [sym_ascii_string_type] = sym_ascii_string_type,
  [sym_utf8_string_type] = sym_utf8_string_type,
  [sym_list_type] = sym_list_type,
  [sym_optional_type] = sym_optional_type,
  [sym_tuple_type_for_trait] = sym_tuple_type_for_trait,
  [sym_tuple_type] = sym_tuple_type,
  [sym__tuple_type_pair] = sym__tuple_type_pair,
  [sym_response_type] = sym_response_type,
  [sym__parameter] = sym__parameter,
  [sym__literal] = sym__literal,
  [sym_int_lit] = sym_int_lit,
  [sym_bool_lit] = sym_bool_lit,
  [sym_standard_principal_lit] = sym_standard_principal_lit,
  [sym_contract_principal_lit] = sym_contract_principal_lit,
  [sym_buffer_lit] = sym_buffer_lit,
  [sym_ascii_string_lit] = sym_ascii_string_lit,
  [sym_list_lit] = sym_list_lit,
  [sym_list_lit_token] = sym_list_lit_token,
  [sym_some_lit] = sym_some_lit,
  [sym_tuple_lit] = sym_tuple_lit,
  [sym__tuple_lit_pair] = sym__tuple_lit_pair,
  [sym_response_lit] = sym_response_lit,
  [sym_global] = sym_global,
  [sym_arithmetic_function] = sym_arithmetic_function,
  [sym_boolean_function] = sym_boolean_function,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_trait_definition_repeat1] = aux_sym_trait_definition_repeat1,
  [aux_sym_common_expression_repeat1] = aux_sym_common_expression_repeat1,
  [aux_sym_let_expression_repeat1] = aux_sym_let_expression_repeat1,
  [aux_sym_let_expression_repeat2] = aux_sym_let_expression_repeat2,
  [aux_sym_function_signature_repeat1] = aux_sym_function_signature_repeat1,
  [aux_sym_function_signature_for_trait_repeat1] = aux_sym_function_signature_for_trait_repeat1,
  [aux_sym_tuple_type_for_trait_repeat1] = aux_sym_tuple_type_for_trait_repeat1,
  [aux_sym_tuple_type_repeat1] = aux_sym_tuple_type_repeat1,
  [aux_sym_tuple_lit_repeat1] = aux_sym_tuple_lit_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHtrait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_impl_DASHtrait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use_DASHtrait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHfungible_DASHtoken] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHnon_DASHfungible_DASHtoken] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHconstant] = {
    .visible = true,
    .named = false,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_define_DASHdata_DASHvar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHmap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHread_DASHonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHprivate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define_DASHpublic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_principal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_buff] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_buffer_type_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_string_DASHascii] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string_DASHutf8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tuple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_response] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_uint_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_standard_principal_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_buffer_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ascii_string_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_utf8_string_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_some] = {
    .visible = true,
    .named = false,
  },
  [sym_none_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ok] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_err] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block_DASHheight] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_burn_DASHblock_DASHheight] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chain_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contract_DASHcaller] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_DASHin_mainnet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_DASHin_DASHregtest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stx_DASHliquid_DASHsupply] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tx_DASHsender] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tx_DASHsponsor_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_deployment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_trait_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_trait_implementation] = {
    .visible = true,
    .named = true,
  },
  [sym_trait_usage] = {
    .visible = true,
    .named = true,
  },
  [sym_token_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_fungible_token_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_non_fungible_token_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_mapping_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_common_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_let_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_local_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_function_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_function_signature_for_trait] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_type] = {
    .visible = true,
    .named = true,
  },
  [sym_trait_type] = {
    .visible = true,
    .named = true,
  },
  [sym_native_type] = {
    .visible = true,
    .named = true,
  },
  [sym_buffer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_ascii_string_type] = {
    .visible = true,
    .named = true,
  },
  [sym_utf8_string_type] = {
    .visible = true,
    .named = true,
  },
  [sym_list_type] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type_for_trait] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type] = {
    .visible = true,
    .named = true,
  },
  [sym__tuple_type_pair] = {
    .visible = false,
    .named = true,
  },
  [sym_response_type] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_int_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_standard_principal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_contract_principal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_buffer_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_ascii_string_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_list_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_list_lit_token] = {
    .visible = true,
    .named = true,
  },
  [sym_some_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_lit] = {
    .visible = true,
    .named = true,
  },
  [sym__tuple_lit_pair] = {
    .visible = false,
    .named = true,
  },
  [sym_response_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_global] = {
    .visible = true,
    .named = true,
  },
  [sym_arithmetic_function] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_function] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_trait_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_common_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_let_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_let_expression_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_signature_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_signature_for_trait_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_type_for_trait_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_key_type = 2,
  field_operator = 3,
  field_trait_alias = 4,
  field_trait_name = 5,
  field_value = 6,
  field_value_type = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_key_type] = "key_type",
  [field_operator] = "operator",
  [field_trait_alias] = "trait_alias",
  [field_trait_name] = "trait_name",
  [field_value] = "value",
  [field_value_type] = "value_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 4},
  [5] = {.index = 9, .length = 2},
  [6] = {.index = 11, .length = 2},
  [7] = {.index = 13, .length = 4},
  [8] = {.index = 17, .length = 2},
  [9] = {.index = 19, .length = 2},
  [10] = {.index = 21, .length = 4},
  [11] = {.index = 25, .length = 2},
  [12] = {.index = 27, .length = 2},
  [13] = {.index = 29, .length = 2},
  [14] = {.index = 31, .length = 4},
  [15] = {.index = 35, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operator, 1},
  [1] =
    {field_key, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [3] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [5] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [9] =
    {field_key, 0, .inherited = true},
    {field_value_type, 0, .inherited = true},
  [11] =
    {field_key, 1, .inherited = true},
    {field_value_type, 1, .inherited = true},
  [13] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value_type, 0, .inherited = true},
    {field_value_type, 1, .inherited = true},
  [17] =
    {field_key_type, 3},
    {field_value_type, 4},
  [19] =
    {field_key, 0},
    {field_value, 2},
  [21] =
    {field_key, 1, .inherited = true},
    {field_key, 2, .inherited = true},
    {field_value, 1, .inherited = true},
    {field_value, 2, .inherited = true},
  [25] =
    {field_trait_alias, 2},
    {field_trait_name, 5},
  [27] =
    {field_key, 2, .inherited = true},
    {field_value_type, 2, .inherited = true},
  [29] =
    {field_key, 0},
    {field_value_type, 2},
  [31] =
    {field_key, 1, .inherited = true},
    {field_key, 2, .inherited = true},
    {field_value_type, 1, .inherited = true},
    {field_value_type, 2, .inherited = true},
  [35] =
    {field_key, 1},
    {field_value_type, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      ADVANCE_MAP(
        '"', 71,
        '\'', 67,
        '(', 55,
        ')', 56,
        '*', 80,
        '+', 78,
        ',', 63,
        '-', 66,
        '.', 57,
        '/', 79,
        '0', 60,
        ':', 65,
        ';', 13,
        '<', 58,
        '>', 59,
        'u', 83,
        '{', 62,
        '}', 64,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(74);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '\r') ADVANCE(86);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '(', 55,
        ')', 56,
        '*', 80,
        '+', 78,
        '-', 66,
        '/', 79,
        ';', 13,
        '<', 58,
        '>', 59,
        '{', 62,
        '}', 64,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 11:
      if (lookahead == ';') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 12:
      if (lookahead == ';') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 13:
      if (lookahead == ';') ADVANCE(85);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(14);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(16);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(17);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(19);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(20);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(21);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(23);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(26);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(29);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(31);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(32);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(33);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(37);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(44);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(47);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_buffer_type_token1);
      if (lookahead == 'x') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_buffer_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_standard_principal_lit_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_buffer_lit_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_ascii_string_lit_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_utf8_string_lit);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'b', 1,
        'c', 2,
        'd', 3,
        'e', 4,
        'f', 5,
        'i', 6,
        'l', 7,
        'n', 8,
        'o', 9,
        'p', 10,
        'r', 11,
        's', 12,
        't', 13,
        'u', 14,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == 'h') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'k') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 's') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_constant);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_ok);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 'x') ADVANCE(62);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(65);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_uint_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 44:
      if (lookahead == 'f') ADVANCE(70);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_err);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(85);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(90);
      END_STATE();
    case 68:
      if (lookahead == 'k') ADVANCE(91);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_buff);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(97);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_none_lit);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(108);
      END_STATE();
    case 92:
      if (lookahead == 'b') ADVANCE(109);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(110);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '_') ADVANCE(115);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 108:
      if (lookahead == 'h') ADVANCE(124);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 112:
      if (lookahead == '-') ADVANCE(128);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 119:
      if (lookahead == '-') ADVANCE(135);
      END_STATE();
    case 120:
      if (lookahead == 'q') ADVANCE(136);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 128:
      ADVANCE_MAP(
        'c', 144,
        'd', 145,
        'f', 146,
        'm', 147,
        'n', 148,
        'p', 149,
        'r', 150,
        't', 151,
      );
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_chain_id);
      END_STATE();
    case 143:
      if (lookahead == '-') ADVANCE(166);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 153:
      if (lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_response);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 164:
      if (lookahead == 'g') ADVANCE(186);
      END_STATE();
    case 165:
      if (lookahead == 'k') ADVANCE(187);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 173:
      if (lookahead == 'b') ADVANCE(195);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_principal);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 181:
      if (lookahead == 'f') ADVANCE(202);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_tx_DASHsender);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_use_DASHtrait);
      END_STATE();
    case 186:
      if (lookahead == 'h') ADVANCE(205);
      END_STATE();
    case 187:
      if (lookahead == '-') ADVANCE(206);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 191:
      if (lookahead == 'g') ADVANCE(210);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_define_DASHmap);
      END_STATE();
    case 193:
      if (lookahead == '-') ADVANCE(211);
      END_STATE();
    case 194:
      if (lookahead == 'v') ADVANCE(212);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_impl_DASHtrait);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 202:
      if (lookahead == '8') ADVANCE(219);
      END_STATE();
    case 203:
      if (lookahead == '-') ADVANCE(220);
      END_STATE();
    case 204:
      if (lookahead == '?') ADVANCE(221);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 206:
      if (lookahead == 'h') ADVANCE(223);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 209:
      if (lookahead == '-') ADVANCE(226);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 211:
      if (lookahead == 'f') ADVANCE(228);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 214:
      if (lookahead == '-') ADVANCE(231);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_string_DASHutf8);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_tx_DASHsponsor_QMARK);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_block_DASHheight);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 224:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 225:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 226:
      if (lookahead == 'v') ADVANCE(240);
      END_STATE();
    case 227:
      if (lookahead == 'b') ADVANCE(241);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(242);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 230:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_define_DASHtrait);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_string_DASHascii);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(248);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 239:
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 240:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_define_DASHpublic);
      END_STATE();
    case 245:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_is_DASHin_DASHregtest);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_is_DASHin_mainnet);
      END_STATE();
    case 248:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 249:
      if (lookahead == 'g') ADVANCE(258);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 254:
      if (lookahead == 'g') ADVANCE(263);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_define_DASHprivate);
      END_STATE();
    case 256:
      if (lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 257:
      if (lookahead == 'p') ADVANCE(265);
      END_STATE();
    case 258:
      if (lookahead == 'h') ADVANCE(266);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_contract_DASHcaller);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_define_DASHconstant);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_define_DASHdata_DASHvar);
      END_STATE();
    case 262:
      if (lookahead == '-') ADVANCE(267);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 264:
      if (lookahead == 'y') ADVANCE(269);
      END_STATE();
    case 265:
      if (lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 268:
      if (lookahead == 'b') ADVANCE(273);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_define_DASHread_DASHonly);
      END_STATE();
    case 270:
      if (lookahead == 'y') ADVANCE(274);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_burn_DASHblock_DASHheight);
      END_STATE();
    case 272:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_stx_DASHliquid_DASHsupply);
      END_STATE();
    case 275:
      if (lookahead == 'k') ADVANCE(277);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 278:
      if (lookahead == '-') ADVANCE(280);
      END_STATE();
    case 279:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_define_DASHfungible_DASHtoken);
      END_STATE();
    case 282:
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 283:
      if (lookahead == 'k') ADVANCE(284);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 285:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_define_DASHnon_DASHfungible_DASHtoken);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 12},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 10},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_define_DASHtrait] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_impl_DASHtrait] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_use_DASHtrait] = ACTIONS(1),
    [anon_sym_define_DASHfungible_DASHtoken] = ACTIONS(1),
    [anon_sym_define_DASHnon_DASHfungible_DASHtoken] = ACTIONS(1),
    [anon_sym_define_DASHconstant] = ACTIONS(1),
    [sym_constant] = ACTIONS(1),
    [anon_sym_define_DASHdata_DASHvar] = ACTIONS(1),
    [anon_sym_define_DASHmap] = ACTIONS(1),
    [anon_sym_define_DASHread_DASHonly] = ACTIONS(1),
    [anon_sym_define_DASHprivate] = ACTIONS(1),
    [anon_sym_define_DASHpublic] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_principal] = ACTIONS(1),
    [anon_sym_buff] = ACTIONS(1),
    [aux_sym_buffer_type_token1] = ACTIONS(1),
    [anon_sym_string_DASHascii] = ACTIONS(1),
    [anon_sym_string_DASHutf8] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_tuple] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_response] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_uint_lit] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_utf8_string_lit] = ACTIONS(1),
    [anon_sym_some] = ACTIONS(1),
    [sym_none_lit] = ACTIONS(1),
    [anon_sym_ok] = ACTIONS(1),
    [anon_sym_err] = ACTIONS(1),
    [anon_sym_block_DASHheight] = ACTIONS(1),
    [anon_sym_burn_DASHblock_DASHheight] = ACTIONS(1),
    [anon_sym_chain_id] = ACTIONS(1),
    [anon_sym_contract_DASHcaller] = ACTIONS(1),
    [anon_sym_is_DASHin_mainnet] = ACTIONS(1),
    [anon_sym_is_DASHin_DASHregtest] = ACTIONS(1),
    [anon_sym_stx_DASHliquid_DASHsupply] = ACTIONS(1),
    [anon_sym_tx_DASHsender] = ACTIONS(1),
    [anon_sym_tx_DASHsponsor_QMARK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(150),
    [sym__expression] = STATE(65),
    [sym_deployment_expression] = STATE(65),
    [sym_trait_definition] = STATE(65),
    [sym_trait_implementation] = STATE(65),
    [sym_trait_usage] = STATE(65),
    [sym_token_definition] = STATE(65),
    [sym_fungible_token_definition] = STATE(126),
    [sym_non_fungible_token_definition] = STATE(126),
    [sym_constant_definition] = STATE(65),
    [sym_variable_definition] = STATE(65),
    [sym_mapping_definition] = STATE(65),
    [sym_function_definition] = STATE(65),
    [sym_common_expression] = STATE(122),
    [sym_let_expression] = STATE(122),
    [aux_sym_source_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(12), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(20), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_0x,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_utf8_string_lit,
    STATE(44), 1,
      sym_standard_principal_lit,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(9), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(44), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(2), 15,
      sym_common_expression,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
      aux_sym_common_expression_repeat1,
  [75] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      sym_utf8_string_lit,
    STATE(44), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(47), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(2), 15,
      sym_common_expression,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
      aux_sym_common_expression_repeat1,
  [150] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      sym_utf8_string_lit,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(47), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(2), 15,
      sym_common_expression,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
      aux_sym_common_expression_repeat1,
  [225] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      sym_utf8_string_lit,
    STATE(44), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(4), 15,
      sym_common_expression,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
      aux_sym_common_expression_repeat1,
  [300] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(85), 1,
      sym_utf8_string_lit,
    STATE(44), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(3), 15,
      sym_common_expression,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
      aux_sym_common_expression_repeat1,
  [375] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_utf8_string_lit,
    STATE(9), 1,
      aux_sym_let_expression_repeat2,
    STATE(44), 1,
      sym_standard_principal_lit,
    STATE(57), 1,
      sym_common_expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(136), 13,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [451] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym_utf8_string_lit,
    STATE(10), 1,
      aux_sym_let_expression_repeat2,
    STATE(44), 1,
      sym_standard_principal_lit,
    STATE(57), 1,
      sym_common_expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(91), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(148), 13,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [527] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym_utf8_string_lit,
    STATE(44), 1,
      sym_standard_principal_lit,
    STATE(54), 1,
      aux_sym_let_expression_repeat2,
    STATE(57), 1,
      sym_common_expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(91), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(148), 13,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [603] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym_utf8_string_lit,
    STATE(44), 1,
      sym_standard_principal_lit,
    STATE(54), 1,
      aux_sym_let_expression_repeat2,
    STATE(57), 1,
      sym_common_expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(95), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(182), 13,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [679] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      sym_utf8_string_lit,
    STATE(44), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(172), 14,
      sym_common_expression,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [750] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym_utf8_string_lit,
    STATE(44), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(103), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(147), 14,
      sym_common_expression,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [821] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_utf8_string_lit,
    STATE(44), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(107), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(137), 14,
      sym_common_expression,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [892] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      sym_utf8_string_lit,
    STATE(44), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(111), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(131), 14,
      sym_common_expression,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [963] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      sym_utf8_string_lit,
    STATE(44), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(115), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(155), 14,
      sym_common_expression,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [1034] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_buffer_type_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_0x,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_utf8_string_lit,
    STATE(44), 1,
      sym_standard_principal_lit,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(119), 4,
      sym_constant,
      sym_uint_lit,
      sym_none_lit,
      sym_identifier,
    ACTIONS(71), 9,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
    STATE(146), 14,
      sym_common_expression,
      sym_let_expression,
      sym__parameter,
      sym__literal,
      sym_int_lit,
      sym_bool_lit,
      sym_contract_principal_lit,
      sym_buffer_lit,
      sym_ascii_string_lit,
      sym_list_lit,
      sym_some_lit,
      sym_tuple_lit,
      sym_response_lit,
      sym_global,
  [1105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(123), 20,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(127), 20,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(131), 20,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(135), 20,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(139), 20,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(143), 20,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(147), 20,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(151), 20,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(155), 20,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(159), 20,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(163), 20,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(167), 20,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(171), 20,
      sym_constant,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(177), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(181), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(185), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(189), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(193), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(195), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(199), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(203), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(207), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(211), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [1980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(215), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(219), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(223), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(227), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_DOT,
    ACTIONS(233), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(231), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(237), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(241), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(245), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(249), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(253), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(257), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(261), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(265), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(269), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2472] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    STATE(54), 2,
      sym_common_expression,
      aux_sym_let_expression_repeat2,
    ACTIONS(278), 7,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(273), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(280), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(284), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    ACTIONS(290), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(288), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      anon_sym_0x,
      anon_sym_DQUOTE,
      sym_utf8_string_lit,
    ACTIONS(294), 16,
      sym_constant,
      aux_sym_buffer_type_token1,
      sym_uint_lit,
      anon_sym_true,
      anon_sym_false,
      sym_none_lit,
      anon_sym_block_DASHheight,
      anon_sym_burn_DASHblock_DASHheight,
      anon_sym_chain_id,
      anon_sym_contract_DASHcaller,
      anon_sym_is_DASHin_mainnet,
      anon_sym_is_DASHin_DASHregtest,
      anon_sym_stx_DASHliquid_DASHsupply,
      anon_sym_tx_DASHsender,
      anon_sym_tx_DASHsponsor_QMARK,
      sym_identifier,
  [2644] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym_identifier,
    ACTIONS(300), 1,
      anon_sym_define_DASHtrait,
    ACTIONS(302), 1,
      anon_sym_impl_DASHtrait,
    ACTIONS(304), 1,
      anon_sym_use_DASHtrait,
    ACTIONS(306), 1,
      anon_sym_define_DASHfungible_DASHtoken,
    ACTIONS(308), 1,
      anon_sym_define_DASHnon_DASHfungible_DASHtoken,
    ACTIONS(310), 1,
      anon_sym_define_DASHconstant,
    ACTIONS(312), 1,
      anon_sym_define_DASHdata_DASHvar,
    ACTIONS(314), 1,
      anon_sym_define_DASHmap,
    ACTIONS(318), 1,
      anon_sym_let,
    ACTIONS(320), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(324), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(5), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(316), 3,
      anon_sym_define_DASHread_DASHonly,
      anon_sym_define_DASHprivate,
      anon_sym_define_DASHpublic,
    ACTIONS(322), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2701] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    ACTIONS(330), 1,
      anon_sym_LT,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(62), 2,
      sym_parameter_type,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(82), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2741] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_LT,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    STATE(60), 2,
      sym_parameter_type,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(82), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2781] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    ACTIONS(343), 1,
      anon_sym_LT,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(62), 2,
      sym_parameter_type,
      aux_sym_function_signature_for_trait_repeat1,
    STATE(82), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(346), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2821] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_LT,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(177), 1,
      sym_parameter_type,
    STATE(82), 2,
      sym_trait_type,
      sym_native_type,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2857] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    STATE(122), 2,
      sym_common_expression,
      sym_let_expression,
    STATE(126), 2,
      sym_fungible_token_definition,
      sym_non_fungible_token_definition,
    STATE(64), 11,
      sym__expression,
      sym_deployment_expression,
      sym_trait_definition,
      sym_trait_implementation,
      sym_trait_usage,
      sym_token_definition,
      sym_constant_definition,
      sym_variable_definition,
      sym_mapping_definition,
      sym_function_definition,
      aux_sym_source_repeat1,
  [2888] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
    STATE(122), 2,
      sym_common_expression,
      sym_let_expression,
    STATE(126), 2,
      sym_fungible_token_definition,
      sym_non_fungible_token_definition,
    STATE(64), 11,
      sym__expression,
      sym_deployment_expression,
      sym_trait_definition,
      sym_trait_implementation,
      sym_trait_usage,
      sym_token_definition,
      sym_constant_definition,
      sym_variable_definition,
      sym_mapping_definition,
      sym_function_definition,
      aux_sym_source_repeat1,
  [2919] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym_identifier,
    ACTIONS(318), 1,
      anon_sym_let,
    ACTIONS(359), 1,
      anon_sym_list,
    ACTIONS(361), 1,
      anon_sym_some,
    STATE(6), 1,
      sym_list_lit_token,
    ACTIONS(320), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(324), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(363), 2,
      anon_sym_ok,
      anon_sym_err,
    STATE(5), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(322), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [2960] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym_native_type,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [2989] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(165), 1,
      sym_native_type,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3018] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym_tuple_type,
    STATE(154), 1,
      sym_native_type,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [3049] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym_tuple_type,
    STATE(154), 1,
      sym_native_type,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [3080] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(135), 1,
      sym_native_type,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3109] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(143), 1,
      sym_native_type,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3138] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(173), 1,
      sym_native_type,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3167] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(188), 1,
      sym_native_type,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3196] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(195), 1,
      sym_native_type,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3225] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(201), 1,
      sym_native_type,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3254] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_native_type,
    STATE(70), 1,
      sym_tuple_type,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 7,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_response_type,
  [3285] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_native_type,
    ACTIONS(332), 4,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
    STATE(24), 8,
      sym_buffer_type,
      sym_ascii_string_type,
      sym_utf8_string_type,
      sym_list_type,
      sym_optional_type,
      sym_tuple_type_for_trait,
      sym_tuple_type,
      sym_response_type,
  [3314] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym_identifier,
    ACTIONS(318), 1,
      anon_sym_let,
    ACTIONS(320), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(324), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(5), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(322), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [3342] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_identifier,
    ACTIONS(320), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(324), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(5), 2,
      sym_arithmetic_function,
      sym_boolean_function,
    ACTIONS(322), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [3367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      anon_sym_LBRACE,
  [3381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_principal,
      anon_sym_LBRACE,
  [3395] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_buff,
    ACTIONS(373), 1,
      anon_sym_string_DASHascii,
    ACTIONS(375), 1,
      anon_sym_string_DASHutf8,
    ACTIONS(377), 1,
      anon_sym_list,
    ACTIONS(379), 1,
      anon_sym_optional,
    ACTIONS(381), 1,
      anon_sym_tuple,
    ACTIONS(383), 1,
      anon_sym_response,
  [3420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(92), 2,
      sym_local_binding,
      aux_sym_let_expression_repeat1,
  [3434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    STATE(93), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    STATE(85), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3462] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    STATE(174), 1,
      sym_contract_principal_lit,
    STATE(186), 1,
      sym_standard_principal_lit,
  [3478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(88), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(88), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(90), 2,
      sym_local_binding,
      aux_sym_let_expression_repeat1,
  [3520] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    STATE(185), 1,
      sym_contract_principal_lit,
    STATE(186), 1,
      sym_standard_principal_lit,
  [3536] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    STATE(90), 2,
      sym_local_binding,
      aux_sym_let_expression_repeat1,
  [3550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(93), 2,
      sym_function_signature_for_trait,
      aux_sym_trait_definition_repeat1,
  [3564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(89), 2,
      sym_function_parameter,
      aux_sym_function_signature_repeat1,
  [3578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      sym_identifier,
    STATE(98), 1,
      aux_sym_tuple_type_repeat1,
    STATE(127), 1,
      sym__tuple_type_pair,
  [3591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    STATE(171), 2,
      sym_common_expression,
      sym_let_expression,
  [3602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      sym_identifier,
    STATE(95), 1,
      aux_sym_tuple_type_repeat1,
    STATE(123), 1,
      sym__tuple_type_pair,
  [3615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(98), 1,
      aux_sym_tuple_type_repeat1,
    STATE(175), 1,
      sym__tuple_type_pair,
  [3628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [3641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [3654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_tuple_type_for_trait_repeat1,
  [3667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym_identifier,
    STATE(102), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(158), 1,
      sym__tuple_lit_pair,
  [3680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_identifier,
    STATE(104), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(117), 1,
      sym__tuple_lit_pair,
  [3693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_identifier,
    STATE(102), 1,
      aux_sym_tuple_lit_repeat1,
    STATE(115), 1,
      sym__tuple_lit_pair,
  [3706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
  [3780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
  [3798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
  [3816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3824] = 3,
    ACTIONS(475), 1,
      anon_sym_DQUOTE,
    ACTIONS(477), 1,
      aux_sym_ascii_string_lit_token1,
    ACTIONS(479), 1,
      sym_comment,
  [3834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
  [3844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_function_signature,
  [3854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
  [3872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_identifier,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
  [3890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
  [3908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
  [3918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [3950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym_identifier,
  [3965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_uint,
  [3972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
  [3979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
  [3986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
  [3993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
  [4000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
  [4007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
  [4014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
  [4021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
  [4028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
  [4035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      sym_identifier,
  [4042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
  [4049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
  [4056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
  [4063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
  [4070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
  [4077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
  [4084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym_identifier,
  [4091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
  [4098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
  [4105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
  [4112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_COLON,
  [4119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      aux_sym_buffer_type_token1,
  [4126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_COMMA,
  [4133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_buffer_type_token1,
  [4140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      aux_sym_buffer_type_token1,
  [4147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      aux_sym_buffer_type_token1,
  [4154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym_identifier,
  [4161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
  [4168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
  [4175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
  [4182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_identifier,
  [4189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
  [4196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_COLON,
  [4203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym_identifier,
  [4210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
  [4217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
  [4224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
  [4231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
  [4238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_DOT,
  [4245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_COMMA,
  [4252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      sym_identifier,
  [4259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
  [4266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym_identifier,
  [4273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      aux_sym_buffer_lit_token1,
  [4280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      aux_sym_buffer_type_token1,
  [4287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym_identifier,
  [4294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
  [4301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
  [4308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
  [4315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_DOT,
  [4322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_DOT,
  [4329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      aux_sym_standard_principal_lit_token1,
  [4336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
  [4343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      sym_identifier,
  [4350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
  [4357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_identifier,
  [4364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_GT,
  [4371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_LPAREN,
  [4378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_identifier,
  [4385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
  [4392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym_identifier,
  [4399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym_identifier,
  [4406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      sym_identifier,
  [4413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      sym_identifier,
  [4420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      sym_identifier,
  [4427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
  [4434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 75,
  [SMALL_STATE(4)] = 150,
  [SMALL_STATE(5)] = 225,
  [SMALL_STATE(6)] = 300,
  [SMALL_STATE(7)] = 375,
  [SMALL_STATE(8)] = 451,
  [SMALL_STATE(9)] = 527,
  [SMALL_STATE(10)] = 603,
  [SMALL_STATE(11)] = 679,
  [SMALL_STATE(12)] = 750,
  [SMALL_STATE(13)] = 821,
  [SMALL_STATE(14)] = 892,
  [SMALL_STATE(15)] = 963,
  [SMALL_STATE(16)] = 1034,
  [SMALL_STATE(17)] = 1105,
  [SMALL_STATE(18)] = 1145,
  [SMALL_STATE(19)] = 1185,
  [SMALL_STATE(20)] = 1225,
  [SMALL_STATE(21)] = 1265,
  [SMALL_STATE(22)] = 1305,
  [SMALL_STATE(23)] = 1345,
  [SMALL_STATE(24)] = 1385,
  [SMALL_STATE(25)] = 1425,
  [SMALL_STATE(26)] = 1465,
  [SMALL_STATE(27)] = 1505,
  [SMALL_STATE(28)] = 1545,
  [SMALL_STATE(29)] = 1585,
  [SMALL_STATE(30)] = 1625,
  [SMALL_STATE(31)] = 1661,
  [SMALL_STATE(32)] = 1697,
  [SMALL_STATE(33)] = 1733,
  [SMALL_STATE(34)] = 1769,
  [SMALL_STATE(35)] = 1805,
  [SMALL_STATE(36)] = 1840,
  [SMALL_STATE(37)] = 1875,
  [SMALL_STATE(38)] = 1910,
  [SMALL_STATE(39)] = 1945,
  [SMALL_STATE(40)] = 1980,
  [SMALL_STATE(41)] = 2015,
  [SMALL_STATE(42)] = 2050,
  [SMALL_STATE(43)] = 2085,
  [SMALL_STATE(44)] = 2120,
  [SMALL_STATE(45)] = 2157,
  [SMALL_STATE(46)] = 2192,
  [SMALL_STATE(47)] = 2227,
  [SMALL_STATE(48)] = 2262,
  [SMALL_STATE(49)] = 2297,
  [SMALL_STATE(50)] = 2332,
  [SMALL_STATE(51)] = 2367,
  [SMALL_STATE(52)] = 2402,
  [SMALL_STATE(53)] = 2437,
  [SMALL_STATE(54)] = 2472,
  [SMALL_STATE(55)] = 2510,
  [SMALL_STATE(56)] = 2543,
  [SMALL_STATE(57)] = 2576,
  [SMALL_STATE(58)] = 2611,
  [SMALL_STATE(59)] = 2644,
  [SMALL_STATE(60)] = 2701,
  [SMALL_STATE(61)] = 2741,
  [SMALL_STATE(62)] = 2781,
  [SMALL_STATE(63)] = 2821,
  [SMALL_STATE(64)] = 2857,
  [SMALL_STATE(65)] = 2888,
  [SMALL_STATE(66)] = 2919,
  [SMALL_STATE(67)] = 2960,
  [SMALL_STATE(68)] = 2989,
  [SMALL_STATE(69)] = 3018,
  [SMALL_STATE(70)] = 3049,
  [SMALL_STATE(71)] = 3080,
  [SMALL_STATE(72)] = 3109,
  [SMALL_STATE(73)] = 3138,
  [SMALL_STATE(74)] = 3167,
  [SMALL_STATE(75)] = 3196,
  [SMALL_STATE(76)] = 3225,
  [SMALL_STATE(77)] = 3254,
  [SMALL_STATE(78)] = 3285,
  [SMALL_STATE(79)] = 3314,
  [SMALL_STATE(80)] = 3342,
  [SMALL_STATE(81)] = 3367,
  [SMALL_STATE(82)] = 3381,
  [SMALL_STATE(83)] = 3395,
  [SMALL_STATE(84)] = 3420,
  [SMALL_STATE(85)] = 3434,
  [SMALL_STATE(86)] = 3448,
  [SMALL_STATE(87)] = 3462,
  [SMALL_STATE(88)] = 3478,
  [SMALL_STATE(89)] = 3492,
  [SMALL_STATE(90)] = 3506,
  [SMALL_STATE(91)] = 3520,
  [SMALL_STATE(92)] = 3536,
  [SMALL_STATE(93)] = 3550,
  [SMALL_STATE(94)] = 3564,
  [SMALL_STATE(95)] = 3578,
  [SMALL_STATE(96)] = 3591,
  [SMALL_STATE(97)] = 3602,
  [SMALL_STATE(98)] = 3615,
  [SMALL_STATE(99)] = 3628,
  [SMALL_STATE(100)] = 3641,
  [SMALL_STATE(101)] = 3654,
  [SMALL_STATE(102)] = 3667,
  [SMALL_STATE(103)] = 3680,
  [SMALL_STATE(104)] = 3693,
  [SMALL_STATE(105)] = 3706,
  [SMALL_STATE(106)] = 3714,
  [SMALL_STATE(107)] = 3722,
  [SMALL_STATE(108)] = 3730,
  [SMALL_STATE(109)] = 3738,
  [SMALL_STATE(110)] = 3746,
  [SMALL_STATE(111)] = 3754,
  [SMALL_STATE(112)] = 3762,
  [SMALL_STATE(113)] = 3770,
  [SMALL_STATE(114)] = 3780,
  [SMALL_STATE(115)] = 3788,
  [SMALL_STATE(116)] = 3798,
  [SMALL_STATE(117)] = 3806,
  [SMALL_STATE(118)] = 3816,
  [SMALL_STATE(119)] = 3824,
  [SMALL_STATE(120)] = 3834,
  [SMALL_STATE(121)] = 3844,
  [SMALL_STATE(122)] = 3854,
  [SMALL_STATE(123)] = 3862,
  [SMALL_STATE(124)] = 3872,
  [SMALL_STATE(125)] = 3880,
  [SMALL_STATE(126)] = 3890,
  [SMALL_STATE(127)] = 3898,
  [SMALL_STATE(128)] = 3908,
  [SMALL_STATE(129)] = 3918,
  [SMALL_STATE(130)] = 3926,
  [SMALL_STATE(131)] = 3934,
  [SMALL_STATE(132)] = 3942,
  [SMALL_STATE(133)] = 3950,
  [SMALL_STATE(134)] = 3958,
  [SMALL_STATE(135)] = 3965,
  [SMALL_STATE(136)] = 3972,
  [SMALL_STATE(137)] = 3979,
  [SMALL_STATE(138)] = 3986,
  [SMALL_STATE(139)] = 3993,
  [SMALL_STATE(140)] = 4000,
  [SMALL_STATE(141)] = 4007,
  [SMALL_STATE(142)] = 4014,
  [SMALL_STATE(143)] = 4021,
  [SMALL_STATE(144)] = 4028,
  [SMALL_STATE(145)] = 4035,
  [SMALL_STATE(146)] = 4042,
  [SMALL_STATE(147)] = 4049,
  [SMALL_STATE(148)] = 4056,
  [SMALL_STATE(149)] = 4063,
  [SMALL_STATE(150)] = 4070,
  [SMALL_STATE(151)] = 4077,
  [SMALL_STATE(152)] = 4084,
  [SMALL_STATE(153)] = 4091,
  [SMALL_STATE(154)] = 4098,
  [SMALL_STATE(155)] = 4105,
  [SMALL_STATE(156)] = 4112,
  [SMALL_STATE(157)] = 4119,
  [SMALL_STATE(158)] = 4126,
  [SMALL_STATE(159)] = 4133,
  [SMALL_STATE(160)] = 4140,
  [SMALL_STATE(161)] = 4147,
  [SMALL_STATE(162)] = 4154,
  [SMALL_STATE(163)] = 4161,
  [SMALL_STATE(164)] = 4168,
  [SMALL_STATE(165)] = 4175,
  [SMALL_STATE(166)] = 4182,
  [SMALL_STATE(167)] = 4189,
  [SMALL_STATE(168)] = 4196,
  [SMALL_STATE(169)] = 4203,
  [SMALL_STATE(170)] = 4210,
  [SMALL_STATE(171)] = 4217,
  [SMALL_STATE(172)] = 4224,
  [SMALL_STATE(173)] = 4231,
  [SMALL_STATE(174)] = 4238,
  [SMALL_STATE(175)] = 4245,
  [SMALL_STATE(176)] = 4252,
  [SMALL_STATE(177)] = 4259,
  [SMALL_STATE(178)] = 4266,
  [SMALL_STATE(179)] = 4273,
  [SMALL_STATE(180)] = 4280,
  [SMALL_STATE(181)] = 4287,
  [SMALL_STATE(182)] = 4294,
  [SMALL_STATE(183)] = 4301,
  [SMALL_STATE(184)] = 4308,
  [SMALL_STATE(185)] = 4315,
  [SMALL_STATE(186)] = 4322,
  [SMALL_STATE(187)] = 4329,
  [SMALL_STATE(188)] = 4336,
  [SMALL_STATE(189)] = 4343,
  [SMALL_STATE(190)] = 4350,
  [SMALL_STATE(191)] = 4357,
  [SMALL_STATE(192)] = 4364,
  [SMALL_STATE(193)] = 4371,
  [SMALL_STATE(194)] = 4378,
  [SMALL_STATE(195)] = 4385,
  [SMALL_STATE(196)] = 4392,
  [SMALL_STATE(197)] = 4399,
  [SMALL_STATE(198)] = 4406,
  [SMALL_STATE(199)] = 4413,
  [SMALL_STATE(200)] = 4420,
  [SMALL_STATE(201)] = 4427,
  [SMALL_STATE(202)] = 4434,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [9] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [12] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_common_expression_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_common_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_common_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 5, 0, 14),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5, 0, 14),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4, 0, 14),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4, 0, 14),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4, 0, 6),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4, 0, 6),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_type, 5, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_type, 5, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_type, 5, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_type, 5, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type_for_trait, 4, 0, 12),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_for_trait, 4, 0, 12),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_type, 4, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_type, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_native_type, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_native_type, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_type, 4, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_type, 4, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_utf8_string_type, 4, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utf8_string_type, 4, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type_for_trait, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type_for_trait, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3, 0, 6),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3, 0, 6),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 4, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 4, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 6, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 6, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 8, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 8, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_expression, 4, 0, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_common_expression, 4, 0, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 7, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 7, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_expression, 3, 0, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_common_expression, 3, 0, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 5, 0, 10),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 5, 0, 10),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_lit, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_lit, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer_lit, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer_lit, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ascii_string_lit, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ascii_string_lit, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_principal_lit, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_principal_lit, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 4, 0, 10),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 4, 0, 10),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contract_principal_lit, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contract_principal_lit, 2, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_principal_lit, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_principal_lit, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 4, 0, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 4, 0, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 4, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 4, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_lit, 4, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_lit, 4, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_some_lit, 4, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_some_lit, 4, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_lit, 3, 0, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_lit, 3, 0, 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_expression_repeat2, 2, 0, 0),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat2, 2, 0, 0), SHIFT_REPEAT(80),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat2, 2, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_lit_token, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_lit_token, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic_function, 1, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_function, 1, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_let_expression_repeat2, 1, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat2, 1, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_function, 1, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_function, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_for_trait_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_type, 3, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_signature_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_signature_repeat1, 2, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat1, 2, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_definition_repeat1, 2, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2, 0, 7), SHIFT_REPEAT(156),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 2, 0, 7), SHIFT_REPEAT(145),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 2, 0, 7),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 2, 0, 4), SHIFT_REPEAT(168),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 4, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_implementation, 6, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_fungible_token_definition, 5, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 7, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_usage, 7, 0, 11),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_for_trait_repeat1, 4, 0, 15),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_binding, 4, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_lit_repeat1, 2, 0, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_for_trait, 6, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_definition, 5, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_definition, 6, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deployment_expression, 1, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_type_pair, 3, 0, 13),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2, 0, 5),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token_definition, 1, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_definition, 6, 0, 8),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_lit_pair, 3, 0, 9),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fungible_token_definition, 4, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_for_trait, 7, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 4, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [547] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 3, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_clarity(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
