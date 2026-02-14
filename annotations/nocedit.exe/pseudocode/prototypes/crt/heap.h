#pragma once

// Function prototypes for crt/heap.cpp
// Generated from Ghidra function signatures

// Original: crt_heap.c__heapwalk_FUN_006012c0
// Address: 006012c0
int __cdecl ::heapwalk(_heapinfo *heap_info);

// Original: crt_heap.c_heapWalk_FUN_006012d0
// Address: 006012d0
int __cdecl heapWalk(HeapState *heap_state_ptr,Heap *heap_ptr);

// Original: crt_heap.c_heapCheck_FUN_00601374
// Address: 00601374
int __cdecl heapCheck(void *heap_state_ptr);

// Original: crt_heap.c_InternalHeapAlloc_FUN_00601bc0
// Address: 00601bc0
void * __cdecl InternalHeapAlloc(ulong size);

// Original: crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0
// Address: 00601ce0
void __cdecl ValidateHeapIntegrity(void *ptr);

// Original: crt_heap.c_AllocateFromFreeList_FUN_00609410
// Address: 00609410
void * __watcallRegister AllocateFromFreeList(ulong size,HeapBlock *free_block,ushort ds_segment);

// Original: crt_heap.c_CoalesceAndAddFreeBlock_FUN_006094c0
// Address: 006094c0
void __watcallRegister CoalesceAndAddFreeBlock(void *ptr,HeapBlock *heap_block,ushort segment);

// Original: crt_heap.c_InsertHeapBlockInOrder_FUN_006095f0
// Address: 006095f0
HeapBlock * __cdecl InsertHeapBlockInOrder(HeapBlock *new_block);

// Original: crt_heap.c_AllocateNewHeapBlock_FUN_00609668
// Address: 00609668
int __cdecl AllocateNewHeapBlock(uint size);

// Original: crt_heap.c_SystemAllocWrapper_FUN_00609718
// Address: 00609718
void * __cdecl SystemAllocWrapper(ulong size);

// Original: crt_heap.c_CalculateHeapBlockSize_FUN_0060972c
// Address: 0060972c
int __cdecl CalculateHeapBlockSize(uint *pSize);

// Original: crt_heap.c_AllocatorFallbackStub_FUN_00609780
// Address: 00609780
int __cdecl AllocatorFallbackStub(uint size);

// Original: crt_heap.c_GetBlockSize_FUN_00609790
// Address: 00609790
ulong __cdecl GetBlockSize(void *ptr);

// Original: crt_heap.c_ResizeBlockInPlace_FUN_006097b8
// Address: 006097b8
int __watcallRegister ResizeBlockInPlace(ushort segment,void *ptr,ulong new_size,ulong *pExtraNeeded);

// Original: crt_heap.c_TryResizeInPlace_FUN_00609974
// Address: 00609974
void * __cdecl TryResizeInPlace(void *ptr,ulong new_size);

// Original: crt_heap.c_CompactHeapBlocks_FUN_0060c920
// Address: 0060c920
void __cdecl CompactHeapBlocks(void);

// Original: crt_heap.c_VirtualFreeBlock_FUN_0060c95c
// Address: 0060c95c
int __cdecl VirtualFreeBlock(HeapBlock *block);

// Original: crt_heap.c_UnlinkAndFreeBlock_FUN_0060c9bc
// Address: 0060c9bc
void __cdecl UnlinkAndFreeBlock(HeapBlock *block);
