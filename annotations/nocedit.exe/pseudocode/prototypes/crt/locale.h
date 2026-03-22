#pragma once

// Function prototypes for crt/locale.cpp
// Generated from Ghidra function signatures

// Original: crt_locale.c_wchar_to_bytes_FUN_00605a20
// Address: 00605a20
void __watcallStack wchar::to_bytes(wchar_t character,char *output_buffer);

// Original: crt_locale.c_mblen_FUN_00605a40
// Address: 00605a40
int __watcallStack mblen(char *mb_string);

// Original: crt_locale.c_mbtowc_FUN_0060b1c0
// Address: 0060b1c0
int __watcallStack mbtowc(wchar_t *wide_char,char *mb_string,SIZE_T max_bytes);

// Original: crt_locale.c_fullwidth_toupper_FUN_0060ffb0
// Address: 0060ffb0
wchar_t __watcallStack fullwidth::toupper(wchar_t character);

// Original: crt_locale.c_islower_multibyte_FUN_00610990
// Address: 00610990
int __watcallStack islower::multibyte(wchar_t character);

// Original: crt_locale.c_ismultibyte_FUN_00610a20
// Address: 00610a20
int __watcallStack ismultibyte(wchar_t character);

// Original: crt_locale.c_istrailbyte_FUN_00610a70
// Address: 00610a70
int __watcallStack istrailbyte(uchar byte_value);
