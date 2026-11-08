// Name: FUN_00438550
// Address: 00438550
// Address Range: [[00438550, 004385dc]]
// Convention: unknown
// Signature: void FUN_00438550(int param_1)

#include "nocturne.h"

void FUN_00438550(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_17f8 [1526];
  uint uStack_1c;
  
  bVar5 = 0;
  puVar1 = (uint *)(param_1 + 0x484);
  if (puVar1 != (uint *)(param_1 + 0x20)) {
    *puVar1 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x488) = *(uint *)(param_1 + 0x24);
    *(uint *)(param_1 + 0x48c) = *(uint *)(param_1 + 0x28);
  }
  if ((uint *)(param_1 + 0x478) != puVar1) {
    *(uint *)(param_1 + 0x478) = *puVar1;
    *(uint *)(param_1 + 0x47c) = *(uint *)(param_1 + 0x488);
    *(uint *)(param_1 + 0x480) = *(uint *)(param_1 + 0x48c);
  }
  FUN_00594380(param_1 + 0x30);
  puVar1 = (uint *)(param_1 + 0x4a4 + (uint)bVar5 * -8);
  *(uint *)(param_1 + 0x4a0) = uStack_1c;
  puVar2 = puVar1 + (uint)bVar5 * -2 + 1;
  *puVar1 = *(uint *)(&stack0xffffffe8 + (uint)bVar5 * -8);
  *puVar2 = *(uint *)(&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  puVar2[(uint)bVar5 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  puVar3 = (uint *)(param_1 + 0x494 + (uint)bVar5 * -8);
  puVar1 = (uint *)(param_1 + 0x4a4 + (uint)bVar5 * -8);
  *(uint *)(param_1 + 0x490) = *(uint *)(param_1 + 0x4a0);
  puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
  puVar2 = puVar1 + (uint)bVar5 * -2 + 1;
  *puVar3 = *puVar1;
  *puVar4 = *puVar2;
  puVar4[(uint)bVar5 * -2 + 1] = puVar2[(uint)bVar5 * -2 + 1];
  FUN_00518280(param_1);
  *(uint *)(param_1 + 0xfc) = 1;
  return;
}
