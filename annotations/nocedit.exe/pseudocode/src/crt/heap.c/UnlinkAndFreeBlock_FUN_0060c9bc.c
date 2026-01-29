// Name: crt_heap.c_UnlinkAndFreeBlock_FUN_0060c9bc
// Address: 0060c9bc
// Address Range: [[0060c9bc, 0060c9ed]]
// Convention: __cdecl
// Signature: void __cdecl crt_heap_c_UnlinkAndFreeBlock_FUN_0060c9bc(HeapBlock *block)

#include "nocturne.h"

void __cdecl UnlinkAndFreeBlock(HeapBlock *block)

{
  HeapBlock *pHVar1;
  HeapBlock *pHVar2;
  HeapBlock *pHVar3;
  int iVar4;
  
  pHVar1 = block->prev;
  pHVar2 = block->next;
  iVar4 = VirtualFreeBlock(block);
  if (iVar4 == 0) {
    pHVar3 = pHVar2;
    if (pHVar1 != (HeapBlock *)0x0) {
      pHVar1->next = pHVar2;
      pHVar3 = (HeapBlock *)g_MainHeap;
    }
    g_MainHeap = (Heap *)pHVar3;
    if (pHVar2 != (HeapBlock *)0x0) {
      pHVar2->prev = pHVar1;
    }
  }
  return;
}
