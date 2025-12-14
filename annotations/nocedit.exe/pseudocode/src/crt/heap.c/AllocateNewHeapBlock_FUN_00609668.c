// Name: crt_heap.c_AllocateNewHeapBlock_FUN_00609668
// Address: 00609668
// Address Range: [[00609668, 00609716]]
// Convention: __cdecl
// Signature: int crt_heap.c_AllocateNewHeapBlock_FUN_00609668(uint size)

#include "nocturne.h"

int __cdecl crt_heap_c_AllocateNewHeapBlock_FUN_00609668(uint size)

{
  int new_block;
  HeapBlock *new_block_00;
  uint uVar1;
  HeapBlock *pHVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  SIZE_T in_stack_00000008;
  uint in_stack_0000001c;
  uint uStack00000020;
  
  if (DAT_006854f0 == 0) {
    return 0;
  }
  if (DAT_00684fd0 == -2) {
    return 0;
  }
  new_block = crt_heap_c_CalculateHeapBlockSize_FUN_0060972c(&size);
  iVar3 = 0;
  if (new_block != 0) {
    new_block_00 = (*PTR_VirtualAlloc_00611660)((LPVOID)0x0,in_stack_00000008,0x1000,0x40);
    iVar3 = 0;
    if (new_block_00 != (HeapBlock *)0x0) {
      uVar1 = in_stack_0000001c - 4;
      if (in_stack_0000001c < uVar1) {
        return 0;
      }
      if (uVar1 < 0x38) {
        return 0;
      }
      new_block_00->size = uVar1;
      size = 0x6096e5;
      pHVar2 = crt_heap_c_InsertHeapBlockInOrder_FUN_006095f0(new_block_00);
      uStack00000020 = pHVar2->size;
      pHVar2->size = uStack00000020 | 1;
      new_block_00->block_size = 0;
      new_block_00->alloc_count = new_block_00->alloc_count + 1;
      crt_heap_c_ValidateHeapIntegrity_FUN_00601ce0(&pHVar2->prev);
      iVar3 = 1;
    }
  }
  return iVar3;
}
