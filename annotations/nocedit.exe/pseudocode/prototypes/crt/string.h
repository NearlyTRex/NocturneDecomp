#pragma once

// Function prototypes for crt/string.cpp
// Generated from Ghidra function signatures

// Original: crt_string.c_memmove_FUN_005fe5e0
// Address: 005fe5e0
void * memmove(void * dest, void * src, SIZE_T n);

// Original: crt_string.c_stricmp_FUN_005fe7f0
// Address: 005fe7f0
int stricmp(char * str1, char * str2);

// Original: crt_string.c_strstr_FUN_005fedd0
// Address: 005fedd0
char * strstr(char * haystack_str, char * needle_str);

// Original: crt_string.c_strcmp_FUN_005fef20
// Address: 005fef20
int strcmp(char * str1, char * str2);

// Original: crt_string.c_strnicmp_FUN_005ff070
// Address: 005ff070
int strnicmp(char * str1, char * str2, int count);

// Original: crt_string.c_strtod_FUN_005ff0f3
// Address: 005ff0f3
double strtod(char * str);

// Original: crt_string.c_strncpy_safe_FUN_005ff130
// Address: 005ff130
void strncpy::safe(char * dest, char * src, int length, int maxlen);

// Original: crt_string.c_splitpath_FUN_005ff178
// Address: 005ff178
void splitpath(char * path, char * drive, char * dir, char * fname, char * ext);

// Original: crt_string.c_strtok_FUN_005fff50
// Address: 005fff50
char * strtok(char * str, char * delimiters);

// Original: crt_string.c_strupr_FUN_00600770
// Address: 00600770
char * strupr(char * string);

// Original: crt_string.c_strncpy_FUN_00600f40
// Address: 00600f40
char * strncpy(char * dest, char * src, SIZE_T count);

// Original: crt_string.c_strerror_FUN_00601470
// Address: 00601470
char * strerror(int errnum);

// Original: crt_string.c_hexDigitToChar_FUN_00601f0c
// Address: 00601f0c
char hexDigitToChar(int digit);

// Original: crt_string.c_stricmp_FUN_005fe7f0
// Address: 006020fc
int stricmp(char * str1, char * str2);

// Original: crt_string.c_strlen_far_FUN_00602f4c
// Address: 00602f4c
int strlen::far(char * string_offset, ushort segment, int max_length);

// Original: crt_string.c_strupr_FUN_0060389c
// Address: 0060389c
char * strupr(char * string);

// Original: crt_string.c_mbtowc_peek_FUN_006059e0
// Address: 006059e0
wchar_t mbtowc::peek(char * str);

// Original: crt_string.c_mbtowc_next_FUN_00605a70
// Address: 00605a70
char * mbtowc::next(char * str);

// Original: crt_string.c_mb_get_last_char_FUN_00605aa0
// Address: 00605aa0
char * mb::get_last_char(char * start, char * end);

// Original: crt_string.c_parseFloatString_FUN_00605b9b
// Address: 00605b9b
int parseFloatString(char * str, void * result, char * * endptr);

// Original: crt_string.c_strtod_main_FUN_00605d5d
// Address: 00605d5d
double strtod::main(char * str, char * * endptr);

// Original: crt_string.c_mbstrnlen_FUN_00605e50
// Address: 00605e50
int mbstrnlen(char * str, int max_bytes);

// Original: crt_string.c_mbstrncpy_FUN_00605e90
// Address: 00605e90
char * mbstrncpy(char * dest, char * src, int char_count);

// Original: crt_string.c_mbstrnbytes_FUN_00605ec0
// Address: 00605ec0
int mbstrnbytes(char * str, int char_count);

// Original: crt_string.c_parse_uint_FUN_00607318
// Address: 00607318
char * parse::uint(char * str, int * result);

// Original: crt_string.c_mbstrnicmp_FUN_00608e50
// Address: 00608e50
int mbstrnicmp(char * str1, char * str2, SIZE_T count);

// Original: crt_string.c_strdup_FUN_0060a610
// Address: 0060a610
char * strdup(char * str);

// Original: crt_string.c_wcsdup_FUN_0060a660
// Address: 0060a660
WCHAR * wcsdup(WCHAR * str);

// Original: crt_string.c_mbstring_termination_check_FUN_0060b630
// Address: 0060b630
int mbstring::termination_check(char * str);

// Original: crt_string.c_mbstrncpy_core_FUN_0060b670
// Address: 0060b6d7
char * mbstrncpy::core(char * dest, char * src, int count);

// Original: crt_string.c_wcstombs_FUN_0060c0c0
// Address: 0060c0c0
int wcstombs(char * dest, wchar_t * src, SIZE_T dest_size);

// Original: crt_string.c_strpbrk_FUN_0060c190
// Address: 0060c190
char * strpbrk(char * str, char * char_set);

// Original: crt_string.c_compare_mb_chars_ci_FUN_0060c790
// Address: 0060c790
int compare::mb_chars_ci(char * str1, char * str2);

// Original: crt_string.c_wcslen_FUN_0060cd30
// Address: 0060cd30
ulong wcslen(LPWSTR str);

// Original: crt_string.c_memcpy_FUN_0060cd60
// Address: 0060cd60
void * memcpy(void * dest, void * src, SIZE_T count);

// Original: crt_string.c_char_in_set_FUN_0060e340
// Address: 0060e340
char * char::in_set(char * charset, wchar_t wc);

// Original: crt_string.c_mbcmp_FUN_0060e640
// Address: 0060e640
int mbcmp(char * str1, char * str2);

// Original: crt_string.c_strlen_FUN_0060f870
// Address: 0060f870
int strlen(char * str);

// Original: crt_string.c_strchr_FUN_0060f890
// Address: 0060f890
char * strchr(char * str, int ch);

// Original: crt_string.c_strcpy_advance_FUN_00610240
// Address: 00610240
char * strcpy::advance(char * dest, char * src);

// Original: crt_string.c_strcpy_FUN_00610760
// Address: 00610760
char * strcpy(char * dest, char * src);
