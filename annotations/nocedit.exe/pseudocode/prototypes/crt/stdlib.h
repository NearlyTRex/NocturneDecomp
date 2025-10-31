#pragma once

// Function prototypes for crt/stdlib.cpp
// Generated from Ghidra function signatures

// Original: crt_stdlib.c_median_of_3_FUN_005fdea0
// Address: 005fdea0
void * median::of_3(void * a, void * b, void * c, QSORT_COMPARATOR compar);

// Original: crt_stdlib.c_memory_swap_FUN_005fdf10
// Address: 005fdf10
void memory::swap(void * ptr1, void * ptr2, SIZE_T bytes);

// Original: crt_stdlib.c_qsort_FUN_005fdf38
// Address: 005fdf38
void qsort(void * base, SIZE_T num, SIZE_T size, QSORT_COMPARATOR compar);

// Original: crt_stdlib.c_GetRandomSeedPointer_FUN_005feb50
// Address: 005feb50
uint * GetRandomSeedPointer(void);

// Original: crt_stdlib.c_rand_FUN_005feb5c
// Address: 005feb5c
int rand(void);

// Original: crt_stdlib.c_srand_FUN_005feb80
// Address: 005feb80
void srand(uint seed);

// Original: crt_stdlib.c_atexit_FUN_005ff060
// Address: 005ff060
void atexit(WatcomStaticDestructorNode * exit_node);

// Original: crt_stdlib.c_atoi_FUN_005ffef0
// Address: 005ffef0
int atoi(char * string_ptr);

// Original: crt_stdlib.c_system_FUN_00602130
// Address: 00602130
int system(char * command);

// Original: crt_stdlib.c_atexitRegisterNode_FUN_00605b89
// Address: 00605b89
void atexitRegisterNode(WatcomStaticDestructorNode * node_ptr);

// Original: crt_stdlib.c_itoa_FUN_00607cc0
// Address: 00607cc0
char * itoa(int value, char * buffer, int base);

// Original: crt_stdlib.c_i64toa_FUN_0060ad40
// Address: 0060ad40
char * i64toa(longlong * value, char * buffer, int base);

// Original: crt_stdlib.c_utoa_FUN_0060ae50
// Address: 0060ae50
char * utoa(uint value, char * buffer, int base);

// Original: crt_stdlib.c_strtol_internal_FUN_0060ec70
// Address: 0060ec70
long strtol::internal(char * str, char * * endptr, int base, int is_signed);

// Original: crt_stdlib.c_strtoul_FUN_0060ede0
// Address: 0060ede0
ulong strtoul(char * str, char * * endptr, int base);

// Original: crt_stdlib.c_strtol_FUN_0060edfc
// Address: 0060edfc
long strtol(char * str, char * * endptr, int base);

// Original: crt_stdlib.c_charToDigit_FUN_0060ee18
// Address: 0060ee18
int charToDigit(char ch);
