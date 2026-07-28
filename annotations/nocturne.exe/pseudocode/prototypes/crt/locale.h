#pragma once

// Function prototypes for crt/locale.cpp
// Generated from Ghidra function signatures

// Original: crt_locale.c_wchar_to_bytes_FUN_0056da30
// Address: 0056da30
void __watcallStack wchar::to_bytes(wchar_t character,char *output_buffer);

// Original: crt_locale.c_mblen_FUN_0056da50
// Address: 0056da50
int __watcallStack mblen(char *mb_string);

// Original: crt_locale.c_mbtowc_FUN_0056f040
// Address: 0056f040
int __watcallStack mbtowc(wchar_t *wide_char,char *mb_string,SIZE_T max_bytes);

// Original: crt_locale.c_fullwidth_toupper_FUN_00574520
// Address: 00574520
wchar_t __watcallStack fullwidth::toupper(wchar_t character);

// Original: crt_locale.c_islower_multibyte_FUN_00574710
// Address: 00574710
int __watcallStack islower::multibyte(wchar_t character);

// Original: crt_locale.c_ismultibyte_FUN_00574760
// Address: 00574760
int __watcallStack ismultibyte(wchar_t character);

// Original: crt_locale.c_istrailbyte_FUN_005747b0
// Address: 005747b0
int __watcallStack istrailbyte(uchar byte_value);
