// Name: core_conveyor.cpp_FUN_00438550
// Address: 00438550
// Address Range: [[00438550, 004385dc]]
// Convention: unknown
// Signature: void core_conveyor_cpp_FUN_00438550(CPlatform *param_1)

#include "nocturne.h"

void core_conveyor_cpp_FUN_00438550(CPlatform *param_1)

{
  byte *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_17f8 [1526];
  uint uStack_1c;
  
  bVar6 = 0;
  puVar1 = &param_1->field_0x484;
  if (puVar1 != &param_1->field_0x20) {
    *(uint *)puVar1 = *(uint *)&param_1->field_0x20;
    *(uint *)&param_1->field_0x488 = *(uint *)&param_1->field_0x24;
    *(uint *)&param_1->field_0x48c = *(uint *)&param_1->field_0x28;
  }
  if (&param_1->field_0x478 != puVar1) {
    *(uint *)&param_1->field_0x478 = *(uint *)puVar1;
    *(uint *)&param_1->field_0x47c = *(uint *)&param_1->field_0x488;
    *(uint *)&param_1->field_0x480 = *(uint *)&param_1->field_0x48c;
  }
  core_xform_cpp_FUN_00594380(&param_1->field_0x30);
  puVar2 = (uint *)((int)param_1 + (uint)bVar6 * -8 + 0x4a4);
  *(uint *)&param_1->field_0x4a0 = uStack_1c;
  puVar3 = puVar2 + (uint)bVar6 * -2 + 1;
  *puVar2 = *(uint *)(&stack0xffffffe8 + (uint)bVar6 * -8);
  *puVar3 = *(uint *)(&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  puVar3[(uint)bVar6 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4)
  ;
  puVar4 = (uint *)((int)param_1 + (uint)bVar6 * -8 + 0x494);
  puVar2 = (uint *)((int)param_1 + (uint)bVar6 * -8 + 0x4a4);
  *(uint *)&param_1->field_0x490 = *(uint *)&param_1->field_0x4a0;
  puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
  puVar3 = puVar2 + (uint)bVar6 * -2 + 1;
  *puVar4 = *puVar2;
  *puVar5 = *puVar3;
  puVar5[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
  core_platfrm_cpp_FUN_00518280(param_1);
  *(uint *)&param_1->field_0xfc = 1;
  return;
}
