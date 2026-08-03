#pragma once

// Function prototypes for crt/heap.cpp
// Generated from Ghidra function signatures

// Original: crt_heap.c__heapwalk_FUN_00566b90
// Address: 00566b90
int __cdecl ::heapwalk(_heapinfo *heap_info);

// Original: crt_heap.c_AllocateFromFreeList_FUN_00568b00
// Address: 00568b00
uint * __watcallRegister AllocateFromFreeList(uint param_1,undefined4 param_2,int unaff_EBX);

// Original: crt_heap.c_CoalesceAndAddFreeBlock_FUN_00568bb0
// Address: 00568bb0
void __watcallRegister CoalesceAndAddFreeBlock(void *ptr,HeapBlock *heap_block,ushort segment);

// Original: crt_heap.c_InsertHeapBlockInOrder_FUN_00568ce0
// Address: 00568ce0
HeapBlock * __cdecl InsertHeapBlockInOrder(HeapBlock *new_block);

// Original: crt_heap.c_AllocateNewHeapBlock_FUN_00568d58
// Address: 00568d58
int __cdecl AllocateNewHeapBlock(uint size);

// Original: crt_heap.c_SystemAllocWrapper_FUN_00568e08
// Address: 00568e08
void * __cdecl SystemAllocWrapper(ulong size);

// Original: crt_heap.c_CalculateHeapBlockSize_FUN_00568e1c
// Address: 00568e1c
int __cdecl CalculateHeapBlockSize(uint *pSize);

// Original: crt_heap.c_GetBlockSize_FUN_0056afc0
// Address: 0056afc0
ulong __cdecl GetBlockSize(void *ptr);

// Original: crt_heap.c_ResizeBlockInPlace_FUN_0056afe8
// Address: 0056afe8
undefined4 __watcallRegister ResizeBlockInPlace(undefined4 param_1,undefined4 param_2,int *unaff_EBX,undefined4 param_4,short param_5,int *param_6,uint param_7,uint *param_8);

// Original: crt_heap.c_TryResizeInPlace_FUN_0056b1a4
// Address: 0056b1a4
void * __cdecl TryResizeInPlace(void *ptr,ulong new_size);
