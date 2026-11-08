// Name: FUN_00447810
// Address: 00447810
// Address Range: [[00447810, 0044789c]]
// Convention: unknown
// Signature: void FUN_00447810(int param_1)

#include "nocturne.h"

void FUN_00447810(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_17f8 [1526];
  uint uStack_1c;
  
  bVar5 = 0;
  puVar1 = (uint *)(param_1 + 0x328);
  if (puVar1 != (uint *)(param_1 + 0x20)) {
    *puVar1 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x32c) = *(uint *)(param_1 + 0x24);
    *(uint *)(param_1 + 0x330) = *(uint *)(param_1 + 0x28);
  }
  if ((uint *)(param_1 + 0x31c) != puVar1) {
    *(uint *)(param_1 + 0x31c) = *puVar1;
    *(uint *)(param_1 + 800) = *(uint *)(param_1 + 0x32c);
    *(uint *)(param_1 + 0x324) = *(uint *)(param_1 + 0x330);
  }
  FUN_005b7ed0(param_1 + 0x30);
  puVar1 = (uint *)(param_1 + 0x348 + (uint)bVar5 * -8);
  *(uint *)(param_1 + 0x344) = uStack_1c;
  puVar2 = puVar1 + (uint)bVar5 * -2 + 1;
  *puVar1 = *(uint *)(&stack0xffffffe8 + (uint)bVar5 * -8);
  *puVar2 = *(uint *)(&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  puVar2[(uint)bVar5 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  puVar3 = (uint *)(param_1 + 0x338 + (uint)bVar5 * -8);
  puVar1 = (uint *)(param_1 + 0x348 + (uint)bVar5 * -8);
  *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x344);
  puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
  puVar2 = puVar1 + (uint)bVar5 * -2 + 1;
  *puVar3 = *puVar1;
  *puVar4 = *puVar2;
  puVar4[(uint)bVar5 * -2 + 1] = puVar2[(uint)bVar5 * -2 + 1];
  FUN_005395d0(param_1);
  *(uint *)(param_1 + 0xfc) = 1;
  return;
}
