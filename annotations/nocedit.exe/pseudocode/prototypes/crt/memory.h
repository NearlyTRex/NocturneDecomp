#pragma once

// Function prototypes for crt/memory.cpp
// Generated from Ghidra function signatures

// Original: crt_memory.c_memset_FUN_005fde40
// Address: 005fde40
void * memset(void * dest, int value, ulong count);

// Original: crt_memory.c_freeSingleInstance_FUN_005fe632
// Address: 005fe632
void * freeSingleInstance(void * object_ptr, WatcomTypeInfo * type_info);

// Original: crt_memory.c_free_FUN_005fe659
// Address: 005fe659
void free(void * ptr);

// Original: crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
// Address: 005fe667
void * constructObjectArray::DefaultCtor(void * array_start, int element_count, WatcomTypeInfo * type_info);

// Original: crt_memory.c_destroyTypeArray_FUN_005feeaf
// Address: 005feeaf
void * destroyTypeArray(WatcomTypeArrayInfo * destroy_info);

// Original: crt_memory.c_freeTypeArray_FUN_005feee9
// Address: 005feee9
int freeTypeArray(void * * obj_array, int obj_count, WatcomTypeInfo * type_info);

// Original: crt_memory.c_dispatchObjectArrayConstructor_FUN_00601200
// Address: 00601200
void * dispatchObjectArrayConstructor(void * array_ptr, int element_count, WatcomTypeInfo * type_info);

// Original: crt_memory.c_constructTypedObjectArray_FUN_00601232
// Address: 00601232
void * constructTypedObjectArray(void * dest, int element_count, WatcomTypeInfo * type_info);

// Original: crt_memory.c_constructTypedObjectArray_FUN_00601272
// Address: 00601272
void * constructTypedObjectArray(void * array_memory, int element_count, WatcomTypeInfo * type_info);

// Original: crt_memory.c_malloc_FUN_00601bb0
// Address: 00601bb0
void * malloc(ulong size);

// Original: crt_memory.c_free_FUN_00601cd0
// Address: 00601cd0
void free(void * ptr);

// Original: crt_memory.c_realloc_FUN_00601df0
// Address: 00601df0
void * realloc(void * ptr, ulong new_size);

// Original: crt_memory.c_realloc_implementation_FUN_00601e08
// Address: 00601e08
void * realloc::implementation(void * ptr, ulong new_size);

// Original: crt_memory.c_malloc_FUN_006021da
// Address: 006021da
void * malloc(SIZE_T size);

// Original: crt_memory.c_OptimizedMemFill_FUN_00603b00
// Address: 00603b00
void OptimizedMemFill(void * dest, uint replicated_value, uint count);

// Original: crt_memory.c_BulkDwordFill_FUN_00603b37
// Address: 00603b37
void BulkDwordFill(void * dest, uint replicated_value, uint dword_count);

// Original: crt_memory.c_constructObjectArray_FlaggedCtor_FUN_00608dc8
// Address: 00608dc8
void * constructObjectArray::FlaggedCtor(void * array_start, int element_count, WatcomTypeInfo * type_info);

// Original: crt_memory.c_GetMemoryBounds_FUN_0060a6a0
// Address: 0060a6a0
void GetMemoryBounds(ThreadData * pStackBound, uint * pHeapBound);

// Original: crt_memory.c_calloc_FUN_0060ca90
// Address: 0060ca90
void * calloc(ulong count, ulong size);
