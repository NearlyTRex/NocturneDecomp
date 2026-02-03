#pragma once

// Function prototypes for crt/memory.cpp
// Generated from Ghidra function signatures

// Original: crt_memory.c_memset_FUN_005fde40
// Address: 005fde40
void * __cdecl memset(void *dest,int value,ulong count);

// Original: crt_memory.c___vec_delete_FUN_005fe632
// Address: 005fe632
void * __cdecl ::_vec_delete(void *object_ptr,WatcomTypeInfo *type_info);

// Original: crt_memory.c___arrinit_FUN_005fe667
// Address: 005fe667
void * __cdecl ::_arrinit(void *array_start,int element_count,WatcomTypeInfo *type_info);

// Original: crt_memory.c___arrdtor_FUN_005feeaf
// Address: 005feeaf
void * __cdecl ::_arrdtor(WatcomTypeArrayInfo *destroy_info);

// Original: crt_memory.c___arrfini_FUN_005feee9
// Address: 005feee9
void * __cdecl ::_arrfini(void *obj_array,int obj_count,WatcomTypeInfo *type_info);

// Original: crt_memory.c___arrcopy_FUN_00600bc2
// Address: 00600bc2
void * __cdecl ::_arrcopy(void *dest,void *source,int count,WatcomTypeInfo *type_info);

// Original: crt_memory.c___arrinit_dispatch_FUN_00601200
// Address: 00601200
void * __cdecl ::_arrinit_dispatch(void *array_ptr,int element_count,WatcomTypeInfo *type_info);

// Original: crt_memory.c___vec_new__FUN_00601232
// Address: 00601232
void * __cdecl ::_vec_new_(void *dest,int element_count,WatcomTypeInfo *type_info);

// Original: crt_memory.c___vec_new_FUN_00601272
// Address: 00601272
void * __cdecl ::_vec_new(void *array_memory,int element_count,WatcomTypeInfo *type_info);

// Original: crt_memory.c_malloc_FUN_00601bb0
// Address: 00601bb0
void * __cdecl malloc(ulong size);

// Original: crt_memory.c_free_FUN_00601cd0
// Address: 00601cd0
void __cdecl free(void *ptr);

// Original: crt_memory.c_realloc_FUN_00601df0
// Address: 00601df0
void * __cdecl realloc(void *ptr,ulong new_size);

// Original: crt_memory.c_realloc__FUN_00601e08
// Address: 00601e08
void * __cdecl realloc::(void *ptr,ulong new_size);

// Original: crt_memory.c___arr_op_FUN_006020c2
// Address: 006020c2
void * __cdecl ::_arr_op(void *dest,void *source,int count,int element_size,void *copy_func);

// Original: crt_memory.c___memfill_FUN_00603b00
// Address: 00603b00
void ::_memfill(void *dest,uint replicated_value,uint count);

// Original: crt_memory.c___stosd_FUN_00603b37
// Address: 00603b37
void ::_stosd(void *dest,uint replicated_value,uint dword_count);

// Original: crt_memory.c___arrinit__FUN_00608dc8
// Address: 00608dc8
void * __cdecl ::_arrinit_(void *array_start,int element_count,WatcomTypeInfo *type_info);

// Original: crt_memory.c___GetStackLimits_FUN_0060a6a0
// Address: 0060a6a0
void __cdecl ::_GetStackLimits(ThreadData *pStackBound,uint *pHeapBound);

// Original: crt_memory.c_calloc_FUN_0060ca90
// Address: 0060ca90
void * __cdecl calloc(ulong count,ulong size);
