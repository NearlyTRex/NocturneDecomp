// Name: crt_heap.c_CoalesceAndAddFreeBlock_FUN_006094c0
// Address: 006094c0
// Address Range: [[006094c0, 006095ed]]
// Convention: __watcallRegister
// Signature: void crt_heap.c_CoalesceAndAddFreeBlock_FUN_006094c0(void * ptr, HeapBlock * heap_block, ushort segment)

#include "nocturne.h"

void crt_heap_c_CoalesceAndAddFreeBlock_FUN_006094c0(void *ptr,HeapBlock *heap_block,ushort segment)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  ushort unaff_0000000e;
  int iVar7;
  uint *puVar8;
  
  iVar7 = CONCAT22 /* combine 2-byte values */(unaff_0000000e,segment);
  if (ptr == (void *)0x0) {
    return;
  }
  puVar1 = (uint *)((int)ptr - 4);
  if ((*puVar1 & 1) == 0) {
    return;
  }
  uVar6 = *puVar1 & 0xfffffffe;
  pbVar2 = (byte *)((int)puVar1 + uVar6);
  if ((*pbVar2 & 1) == 0) {
    *puVar1 = uVar6 + *(int *)pbVar2;
    if (pbVar2 == *(byte **)(iVar7 + 0xc)) {
      *(uint **)(iVar7 + 0xc) = puVar1;
    }
    uVar6 = *(uint *)(pbVar2 + 4);
    puVar4 = *(uint **)(pbVar2 + 8);
    *(uint **)(uVar6 + 8) = puVar4;
    puVar4[1] = uVar6;
    *(int *)(iVar7 + 0x1c) = *(int *)(iVar7 + 0x1c) + -1;
  }
  else {
    *puVar1 = uVar6;
    puVar4 = *(uint **)(iVar7 + 0xc);
    if (puVar1 < puVar4) {
      if (((uint *)puVar4[1] < puVar1) || (puVar4 = *(uint **)(iVar7 + 0x28), puVar1 < puVar4))
      goto LAB_0060959e;
    }
    else {
      puVar4 = (uint *)puVar4[2];
      if ((puVar1 < puVar4) || (puVar4 = (uint *)(iVar7 + 0x20), *(uint **)(iVar7 + 0x24) < puVar1))
      goto LAB_0060959e;
    }
    uVar6 = *(uint *)(iVar7 + 0x1c);
    uVar3 = *(uint *)(iVar7 + 0x18) / (uVar6 + 1);
    if (uVar3 < uVar6) {
      iVar5 = uVar3 * 2;
      if (*(int *)(iVar7 + 0x18) - uVar6 <= uVar6) {
        iVar5 = -1;
      }
      puVar4 = (uint *)(*puVar1 + (int)puVar1);
      do {
        uVar6 = *puVar4;
        if ((uVar6 & 1) == 0) goto LAB_0060959e;
        if (uVar6 == 0xffffffff) break;
        puVar4 = (uint *)((int)puVar4 + (uVar6 & 0xfffffffe));
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    puVar4 = *(uint **)(iVar7 + 0xc);
    if (puVar1 < puVar4) {
      puVar4 = *(uint **)(iVar7 + 0x28);
    }
    while (((puVar4 <= puVar1 && (puVar4 = (uint *)puVar4[2], puVar4 <= puVar1)) &&
           (puVar4 = (uint *)puVar4[2], puVar4 <= puVar1))) {
      puVar4 = (uint *)puVar4[2];
    }
  }
LAB_0060959e:
  puVar8 = (uint *)puVar4[1];
  uVar6 = *puVar1;
  if ((uint *)(*puVar8 + (int)puVar8) == puVar1) {
    uVar6 = uVar6 + *puVar8;
    *puVar8 = uVar6;
    if (puVar1 == *(uint **)(iVar7 + 0xc)) {
      *(uint **)(iVar7 + 0xc) = puVar8;
    }
  }
  else {
    *(int *)(iVar7 + 0x1c) = *(int *)(iVar7 + 0x1c) + 1;
    *(uint **)((int)ptr + 4) = puVar4;
    *(uint **)ptr = puVar8;
    puVar8[2] = (uint)puVar1;
    puVar4[1] = (uint)puVar1;
    puVar8 = puVar1;
  }
  *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + -1;
  if ((puVar8 < *(uint **)(iVar7 + 0xc)) && (*(uint *)(iVar7 + 0x10) < uVar6)) {
    *(uint *)(iVar7 + 0x10) = uVar6;
  }
  if (*(uint *)(iVar7 + 0x14) < uVar6) {
    *(uint *)(iVar7 + 0x14) = uVar6;
  }
  return;
}
