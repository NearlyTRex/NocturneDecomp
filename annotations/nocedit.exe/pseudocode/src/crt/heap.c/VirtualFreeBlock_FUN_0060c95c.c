// Name: crt_heap.c_VirtualFreeBlock_FUN_0060c95c
// Address: 0060c95c
// Address Range: [[0060c95c, 0060c9ba]]
// Convention: __cdecl
// Signature: int __cdecl crt_heap_c_VirtualFreeBlock_FUN_0060c95c(HeapBlock *block)

#include "nocturne.h"

int __cdecl VirtualFreeBlock(HeapBlock *block)

{
  HeapBlock *pHVar1;
  BOOL BVar2;
  
  pHVar1 = block->next;
  BVar2 = (*g_VirtualFreeFunc)(block,0,0x8000);
  if (BVar2 != 0) {
    if ((block == (HeapBlock *)g_SecondaryHeap) &&
       (g_SecondaryHeap = (Heap *)pHVar1, pHVar1 == (HeapBlock *)0x0)) {
      g_SecondaryHeap = g_MainHeap;
      INT_00684edc = 0;
    }
    if (block == (HeapBlock *)INT_03f9b210) {
      INT_03f9b210 = (uint)block ^ INT_03f9b210;
    }
    return 0;
  }
  return -1;
}
