#pragma once

// Function prototypes for crt/stdlib.cpp
// Generated from Ghidra function signatures

// Original: crt_stdlib.c__qsort_FUN_00563db8
// Address: 00563db8
void __cdecl ::qsort(void *base,SIZE_T num,SIZE_T size,QSORT_COMPARATOR compar);

// Original: crt_stdlib.c_rand_FUN_0056488c
// Address: 0056488c
int __cdecl rand(void);

// Original: crt_stdlib.c_srand_FUN_005648b0
// Address: 005648b0
void __cdecl srand(uint seed);

// Original: crt_stdlib.c__fullpath_FUN_00565d00
// Address: 00565d00
char * __cdecl ::fullpath(char *buffer,char *path,SIZE_T buffer_size);

// Original: crt_stdlib.c_atoi_FUN_00566f30
// Address: 00566f30
int __cdecl atoi(char *string_ptr);

// Original: crt_stdlib.c_atexitRegisterNode_FUN_0056b215
// Address: 0056b215
void __cdecl atexitRegisterNode(WatcomStaticDestructorNode *node_ptr);

// Original: crt_stdlib.c_itoa_FUN_0056dc10
// Address: 0056dc10
char * __cdecl itoa(int value,char *buffer,int base);

// Original: crt_stdlib.c_i64toa_FUN_0056f3e0
// Address: 0056f3e0
char * __cdecl i64toa(longlong *value,char *buffer,int base);

// Original: crt_stdlib.c_utoa_FUN_0056f4f0
// Address: 0056f4f0
char * __cdecl utoa(uint value,char *buffer,int base);

// Original: crt_stdlib.c_strtol_internal_FUN_00573720
// Address: 00573720
long __cdecl strtol::internal(char *str,char **endptr,int base,int is_signed);

// Original: crt_stdlib.c_strtol_FUN_005738ac
// Address: 005738ac
long __cdecl strtol(char *str,char **endptr,int base);

// Original: crt_stdlib.c_charToDigit_FUN_005738c8
// Address: 005738c8
int __cdecl charToDigit(char ch);
