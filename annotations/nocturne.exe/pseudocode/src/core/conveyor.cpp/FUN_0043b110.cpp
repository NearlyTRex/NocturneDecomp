// Name: core_conveyor.cpp_FUN_0043b110
// Address: 0043b110
// Address Range: [[0043b110, 0043b19c]]
// Convention: unknown
// Signature: void core_conveyor_cpp_FUN_0043b110(int param_1)

#include "nocturne.h"

void core_conveyor_cpp_FUN_0043b110(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_17f8 [1526];
  uint local_1c;
  
  bVar5 = 0;
  puVar1 = (uint *)(param_1 + 800);
  if (puVar1 != (uint *)(param_1 + 0x20)) {
    *puVar1 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x324) = *(uint *)(param_1 + 0x24);
    *(uint *)(param_1 + 0x328) = *(uint *)(param_1 + 0x28);
  }
  if ((uint *)(param_1 + 0x314) != puVar1) {
    *(uint *)(param_1 + 0x314) = *puVar1;
    *(uint *)(param_1 + 0x318) = *(uint *)(param_1 + 0x324);
    *(uint *)(param_1 + 0x31c) = *(uint *)(param_1 + 0x328);
  }
  core_xform_cpp_FUN_0055d610(param_1 + 0x30);
  puVar1 = (uint *)(param_1 + 0x340 + (uint)bVar5 * -8);
  *(uint *)(param_1 + 0x33c) = local_1c;
  puVar2 = puVar1 + (uint)bVar5 * -2 + 1;
  *puVar1 = *(uint *)(&stack0xffffffe8 + (uint)bVar5 * -8);
  *puVar2 = *(uint *)(&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  puVar2[(uint)bVar5 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  puVar3 = (uint *)(param_1 + 0x330 + (uint)bVar5 * -8);
  puVar1 = (uint *)(param_1 + 0x340 + (uint)bVar5 * -8);
  *(uint *)(param_1 + 0x32c) = *(uint *)(param_1 + 0x33c);
  puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
  puVar2 = puVar1 + (uint)bVar5 * -2 + 1;
  *puVar3 = *puVar1;
  *puVar4 = *puVar2;
  puVar4[(uint)bVar5 * -2 + 1] = puVar2[(uint)bVar5 * -2 + 1];
  core_platfrm_cpp_FUN_004f5f60(param_1);
  *(uint *)(param_1 + 0xfc) = 1;
  return;
}
