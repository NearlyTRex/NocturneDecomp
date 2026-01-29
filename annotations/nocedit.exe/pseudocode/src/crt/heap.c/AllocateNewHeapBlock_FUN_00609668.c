// Name: crt_heap.c_AllocateNewHeapBlock_FUN_00609668
// Address: 00609668
// Address Range: [[00609668, 00609716]]
// Convention: __cdecl
// Signature: int __cdecl crt_heap_c_AllocateNewHeapBlock_FUN_00609668(uint size)

#include "nocturne.h"

int __cdecl AllocateNewHeapBlock(uint size)

{
  int new_block;
  HeapBlock *new_block_00;
  uint uVar1;
  HeapBlock *pHVar2;
  int iVar3;
  
  if (0x00000001 == 0) {
    return 0;
  }
  if (DAT_00684fd0 == -2) {
    return 0;
  }
  new_block = CalculateHeapBlockSize(&size);
  iVar3 = 0;
  if (new_block != 0) {
    new_block_00 = (*g_VirtualAllocFunc)((LPVOID)0x0,size,0x1000,0x40);
    iVar3 = 0;
    if (new_block_00 != (HeapBlock *)0x0) {
      uVar1 = size - 4;
      if (size < uVar1) {
        return 0;
      }
      if (uVar1 < 0x38) {
        return 0;
      }
      new_block_00->size = uVar1;
      size = uVar1;
      pHVar2 = InsertHeapBlockInOrder(new_block_00);
      size = pHVar2->size;
      pHVar2->size = size | 1;
      new_block_00->block_size = 0;
      new_block_00->alloc_count = new_block_00->alloc_count + 1;
      ValidateHeapIntegrity(&pHVar2->prev);
      iVar3 = 1;
    }
  }
  return iVar3;
}
