#pragma once

// Function prototypes for crt/heap.cpp
// Generated from Ghidra function signatures

// Original: crt_heap.c_free_FUN_10005b30
// Address: 10005b30
void __cdecl free(void *block);

// Original: crt_heap.c__heap_init_FUN_100078f0
// Address: 100078f0
int __cdecl ::heap_init(int mtflag);

// Original: crt_heap.c__heap_term_FUN_10007910
// Address: 10007910
void __cdecl ::heap_term(void);

// Original: crt_heap.c_malloc_FUN_10008830
// Address: 10008830
void * __cdecl malloc(size_t size);

// Original: crt_heap.c__nh_malloc_FUN_10008850
// Address: 10008850
void * __cdecl ::nh_malloc(size_t size,int nh_flag);

// Original: crt_heap.c__heap_alloc_FUN_10008890
// Address: 10008890
void * __cdecl ::heap_alloc(size_t size);

// Original: crt_heap.c_calloc_FUN_1000a750
// Address: 1000a750
void * __cdecl calloc(size_t num,size_t size);

// Original: crt_heap.c__set_new_handler_FUN_1000aaf0
// Address: 1000aaf0
_PNH __cdecl ::set_new_handler(_PNH pnh);

// Original: crt_heap.c__callnewh_FUN_1000ab30
// Address: 1000ab30
int __cdecl ::callnewh(size_t size);

// Original: crt_heap.c_realloc_FUN_10011680
// Address: 10011680
void * __cdecl realloc(void *ptr,size_t size);
