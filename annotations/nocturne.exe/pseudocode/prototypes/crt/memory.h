#pragma once

// Function prototypes for crt/memory.cpp
// Generated from Ghidra function signatures

// Original: crt_memory.c_malloc_FUN_005635b0
// Address: 005635b0
void * __cdecl malloc(ulong size);

// Original: crt_memory.c_memset_FUN_00563cc0
// Address: 00563cc0
void * __cdecl memset(void *dest,int value,ulong count);

// Original: crt_memory.c___vec_delete_FUN_0056445f
// Address: 0056445f
void * __cdecl ::_vec_delete(void *object_ptr,WatcomTypeInfo *type_info);

// Original: crt_memory.c___arrinit_FUN_005644a7
// Address: 005644a7
void * __cdecl ::_arrinit(void *array_start,int element_count,WatcomTypeInfo *type_info);

// Original: crt_memory.c___arrfini_FUN_0056494f
// Address: 0056494f
void * __cdecl ::_arrfini(void *obj_array,int obj_count,WatcomTypeInfo *type_info);

// Original: crt_memory.c_realloc_FUN_00564a70
// Address: 00564a70
void * __cdecl realloc(void *ptr,ulong new_size);

// Original: crt_memory.c___vec_new_FUN_00566234
// Address: 00566234
void * __cdecl ::_vec_new(void *array_memory,int element_count,WatcomTypeInfo *type_info);

// Original: crt_memory.c___arrinit__FUN_0056d99b
// Address: 0056d99b
void * __cdecl ::_arrinit_(void *array_start,int element_count,WatcomTypeInfo *type_info);

// Original: crt_memory.c___GetStackLimits_FUN_0056e9d0
// Address: 0056e9d0
void __cdecl ::_GetStackLimits(ThreadData *pStackBound,uint *pHeapBound);
