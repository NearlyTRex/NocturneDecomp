// Name: crt_heap.c_AllocateNewHeapBlock_FUN_00568d58
// Address: 00568d58
// Address Range: [[00568d58, 00568e06]]
// Convention: __cdecl
// Signature: int __cdecl crt_heap_c_AllocateNewHeapBlock_FUN_00568d58(uint size)

#include "nocturne.h"

int __cdecl AllocateNewHeapBlock(uint size)

{
  int iVar1;
  HeapBlock *new_block;
  uint uVar2;
  HeapBlock *pHVar3;
  int iVar4;
  
  if (0x00000001 == 0) {
    return 0;
  }
  if (DAT_005c1cc8 == -2) {
    return 0;
  }
  iVar1 = CalculateHeapBlockSize(&size);
  iVar4 = 0;
  if (iVar1 != 0) {
    new_block = VirtualAlloc((LPVOID)0x0,size,0x1000,0x40);
    iVar4 = 0;
    if (new_block != (HeapBlock *)0x0) {
      uVar2 = size - 4;
      if (size < uVar2) {
        return 0;
      }
      if (uVar2 < 0x38) {
        return 0;
      }
      new_block->size = uVar2;
      size = uVar2;
      pHVar3 = InsertHeapBlockInOrder(new_block);
      size = pHVar3->size;
      pHVar3->size = size | 1;
      new_block->block_size = 0;
      new_block->alloc_count = new_block->alloc_count + 1;
      ValidateHeapIntegrity(&pHVar3->prev);
      iVar4 = 1;
    }
  }
  return iVar4;
}
