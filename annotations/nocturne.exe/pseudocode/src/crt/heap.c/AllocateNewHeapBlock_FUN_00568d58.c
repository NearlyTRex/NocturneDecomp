// Name: crt_heap.c_AllocateNewHeapBlock_FUN_00568d58
// Address: 00568d58
// Address Range: [[00568d58, 00568e06]]
// Convention: __cdecl
// Signature: int __cdecl crt_heap_c_AllocateNewHeapBlock_FUN_00568d58(uint size)

#include "nocturne.h"

int __cdecl AllocateNewHeapBlock(uint size)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  
  if (0x00000001 == 0) {
    return 0;
  }
  if (DAT_005c1cc8 == -2) {
    return 0;
  }
  iVar1 = CalculateHeapBlockSize(&size);
  iVar5 = 0;
  if (iVar1 != 0) {
    puVar2 = VirtualAlloc((LPVOID)0x0,size,0x1000,0x40);
    iVar5 = 0;
    if (puVar2 != (uint *)0x0) {
      uVar3 = size - 4;
      if (size < uVar3) {
        return 0;
      }
      if (uVar3 < 0x38) {
        return 0;
      }
      *puVar2 = uVar3;
      size = uVar3;
      puVar4 = (uint *)InsertHeapBlockInOrder(puVar2);
      size = *puVar4;
      *puVar4 = size | 1;
      puVar2[5] = 0;
      puVar2[6] = puVar2[6] + 1;
      ValidateHeapIntegrity(puVar4 + 1);
      iVar5 = 1;
    }
  }
  return iVar5;
}
