#pragma once

// Function prototypes for crt/string.cpp
// Generated from Ghidra function signatures

// Original: crt_string.c__stricmp_FUN_00564520
// Address: 00564520
int __cdecl ::stricmp(char *str1,char *str2);

// Original: crt_string.c__strcmp_FUN_005649c0
// Address: 005649c0
int __cdecl ::strcmp(char *str1,char *str2);

// Original: crt_string.c__strnicmp_FUN_00564bc0
// Address: 00564bc0
int __cdecl ::strnicmp(char *str1,char *str2,int count);

// Original: crt_string.c__strncpy_FUN_00565f70
// Address: 00565f70
char * __cdecl ::strncpy(char *dest,char *src,SIZE_T count);

// Original: crt_string.c_memmove_FUN_00566170
// Address: 00566170
void * __cdecl memmove(void *dest,void *src,SIZE_T n);

// Original: crt_string.c_splitpath_FUN_00566498
// Address: 00566498
void __cdecl splitpath(char *path,char *drive,char *dir,char *fname,char *ext);

// Original: crt_string.c_strupr_FUN_00566ad0
// Address: 00566ad0
char * __cdecl strupr(char *string);

// Original: crt_string.c__stricmp_FUN_00566fb0
// Address: 00566fb0
int __cdecl ::stricmp(char *str1,char *str2);

// Original: crt_string.c_strstr_FUN_00566fe0
// Address: 00566fe0
char * __cdecl strstr(char *haystack_str,char *needle_str);

// Original: crt_string.c_parse_uint_FUN_0056d628
// Address: 0056d628
char * __cdecl parse::uint(char *str,int *result);

// Original: crt_string.c_mbtowc_peek_FUN_0056d9f0
// Address: 0056d9f0
int __watcallStack mbtowc::peek(char *str);

// Original: crt_string.c_mbtowc_next_FUN_0056da80
// Address: 0056da80
byte * mbtowc::next(byte *param_1);

// Original: crt_string.c_mb_get_last_char_FUN_0056dab0
// Address: 0056dab0
char * __cdecl mb::get_last_char(char *start,char *end);

// Original: crt_string.c_mbstrnlen_FUN_0056db40
// Address: 0056db40
int __watcallStack mbstrnlen(char *str,int max_bytes);

// Original: crt_string.c_mbstrncpy_FUN_0056db80
// Address: 0056db80
char * __watcallStack mbstrncpy(char *dest,char *src,int char_count);

// Original: crt_string.c_mbstrnbytes_FUN_0056dbb0
// Address: 0056dbb0
int __watcallStack mbstrnbytes(char *str,int char_count);

// Original: crt_string.c__mbstrnicmp_FUN_0056dcd0
// Address: 0056dcd0
int __cdecl ::mbstrnicmp(char *str1,char *str2,SIZE_T count);

// Original: crt_string.c_parseFloatString_FUN_0056f690
// Address: 0056f690
undefined4 parseFloatString(byte *param_1,undefined4 *param_2,undefined4 *param_3);

// Original: crt_string.c_strtod_main_FUN_0056f852
// Address: 0056f852
double strtod::main(undefined4 param_1,undefined4 param_2);

// Original: crt_string.c_mbstrncpy_core_FUN_0056fd26
// Address: 0056fd26
_FILE * mbstrncpy::core(_FILE *param_1);

// Original: crt_string.c_strpbrk_FUN_00570870
// Address: 00570870
char * __cdecl strpbrk(char *str,char *char_set);

// Original: crt_string.c_wcstombs_FUN_00570bd0
// Address: 00570bd0
int __cdecl wcstombs(char *dest,wchar_t *src,SIZE_T dest_size);

// Original: crt_string.c_mbstring_termination_check_FUN_00570ca0
// Address: 00570ca0
int __watcallStack mbstring::termination_check(char *str);

// Original: crt_string.c_char_in_set_FUN_00572a90
// Address: 00572a90
char * char::in_set(char *param_1,int param_2);
