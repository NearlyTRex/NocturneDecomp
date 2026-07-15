#pragma once

// Function prototypes for crt/string.cpp
// Generated from Ghidra function signatures

// Original: crt_string.c_memcpy_FUN_1000a4a0
// Address: 1000a4a0
void * __cdecl memcpy(void *dst,void *src,size_t size);

// Original: crt_string.c_wcslen_FUN_1000a930
// Address: 1000a930
size_t __cdecl wcslen(wchar_t *str);

// Original: crt_string.c__strncpy_FUN_1000a9f0
// Address: 1000a9f0
char * __cdecl ::strncpy(char *dest,char *source,size_t count);

// Original: crt_string.c_wcsnlen_FUN_1000c300
// Address: 1000c300
size_t __cdecl wcsnlen(wchar_t *str,int max);

// Original: crt_string.c__strncnt_FUN_1000c570
// Address: 1000c570
size_t __cdecl ::strncnt(char *str,size_t count);

// Original: crt_string.c_strcspn_FUN_1000e290
// Address: 1000e290
size_t __cdecl strcspn(char *str,char *control);

// Original: crt_string.c_strncmp_FUN_1000e2d0
// Address: 1000e2d0
int __cdecl strncmp(char *str1,char *str2,size_t count);

// Original: crt_string.c_strpbrk_FUN_1000e310
// Address: 1000e310
char * __cdecl strpbrk(char *str,char *control);

// Original: crt_string.c__stricmp_FUN_1000ff20
// Address: 1000ff20
int __cdecl ::stricmp(char *str1,char *str2);

// Original: crt_string.c__wcsnlen_FUN_10010be0
// Address: 10010be0
size_t __cdecl ::wcsnlen(wchar_t *str,size_t max);

// Original: crt_string.c_wcsnlen_v3_FUN_10011000
// Address: 10011000
int __cdecl wcsnlen::v3(wchar_t *str,int max);

// Original: crt_string.c_strncnt_FUN_10011330
// Address: 10011330
int __cdecl strncnt(char *str,int count);

// Original: crt_string.c__mbschr_FUN_100116f0
// Address: 100116f0
uchar * __cdecl ::mbschr(uchar *str,uint c);

// Original: crt_string.c__strdup_FUN_100117b0
// Address: 100117b0
char * __cdecl ::strdup(char *s);

// Original: crt_string.c_strchr_FUN_100117f0
// Address: 100117f0
char * __cdecl strchr(char *s,int c);

// Original: crt_string.c_strlen_FUN_100118b0
// Address: 100118b0
size_t __cdecl strlen(char *s);

// Original: crt_string.c_strcpy_FUN_10011930
// Address: 10011930
char * __cdecl strcpy(char *dst,char *src);
