// Name: crt_heap.c_AllocateFromFreeList_FUN_00568b00
// Address: 00568b00
// Address Range: [[00568b00, 00568bac]]
// Convention: unknown
// Signature: uint * crt_heap_c_AllocateFromFreeList_FUN_00568b00(void)

#include "nocturne.h"

uint * AllocateFromFreeList(void)

{
  uint *puVar1;
  uint uVar2;
  uint in_EAX;
  uint *puVar3;
  uint uVar4;
  int unaff_EBX;
  uint uVar5;
  
  if ((in_EAX != 0) && (in_EAX <= in_EAX + 0xb)) {
    uVar4 = in_EAX + 0xb & 0xfffffff8;
    if (uVar4 < 0x10) {
      uVar4 = 0x10;
    }
    if (uVar4 <= *(uint *)(unaff_EBX + 0x14)) {
      uVar5 = *(uint *)(unaff_EBX + 0x10);
      puVar3 = *(uint **)(unaff_EBX + 0xc);
      if (uVar4 <= uVar5) {
        puVar3 = *(uint **)(unaff_EBX + 0x28);
        uVar5 = 0;
      }
      do {
        uVar2 = *puVar3;
        if (uVar4 <= uVar2) {
          *(uint *)(unaff_EBX + 0x10) = uVar5;
          *(int *)(unaff_EBX + 0x18) = *(int *)(unaff_EBX + 0x18) + 1;
          if (uVar2 - uVar4 < 0x10) {
            *(int *)(unaff_EBX + 0x1c) = *(int *)(unaff_EBX + 0x1c) + -1;
            uVar4 = puVar3[1];
            *(uint *)(unaff_EBX + 0xc) = uVar4;
            uVar5 = puVar3[2];
            *(uint *)(uVar4 + 8) = uVar5;
            *(uint *)(uVar5 + 4) = uVar4;
          }
          else {
            puVar1 = (uint *)((int)puVar3 + uVar4);
            *(uint **)(unaff_EBX + 0xc) = puVar1;
            *puVar1 = uVar2 - uVar4;
            *puVar3 = uVar4;
            uVar4 = puVar3[1];
            puVar1[1] = uVar4;
            uVar5 = puVar3[2];
            puVar1[2] = uVar5;
            *(uint **)(uVar4 + 8) = puVar1;
            *(uint **)(uVar5 + 4) = puVar1;
          }
          *(byte *)puVar3 = (byte)*puVar3 | 1;
          return puVar3 + 1;
        }
        if (uVar5 < uVar2) {
          uVar5 = uVar2;
        }
        puVar3 = (uint *)puVar3[2];
      } while (puVar3 != (uint *)(unaff_EBX + 0x20));
      *(uint *)(unaff_EBX + 0x14) = uVar5;
    }
  }
  return (uint *)0x0;
}
