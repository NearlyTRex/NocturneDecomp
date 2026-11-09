// Name: core_crate.cpp_FUN_00439f00
// Address: 00439f00
// Address Range: [[00439f00, 0043a12b]]
// Convention: unknown
// Signature: void core_crate_cpp_FUN_00439f00(CDemonActor *param_1)

#include "nocturne.h"

void core_crate_cpp_FUN_00439f00(CDemonActor *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_3c [6];
  uint uStack_24;
  float fStack_20;
  float fStack_14;
  uint uStack_c;
  uint uStack_8;
  
  bVar4 = 0;
  if (*(int *)&param_1[1].field_0x17c != 0) {
    *(uint *)&param_1[1].field_0x184 = 0;
    return;
  }
  *(float *)&param_1->field_0x20 = *(float *)&param_1->field_0xe0 + *(float *)&param_1->field_0x20;
  *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0xe4 + *(float *)&param_1->field_0x24;
  *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0xe8 + *(float *)&param_1->field_0x28;
  *(uint *)&param_1->field_0xe8 = 0;
  *(uint *)&param_1->field_0xe4 = *(uint *)&param_1->field_0xe8;
  *(uint *)&param_1->field_0xe0 = *(uint *)&param_1->field_0xe4;
  *(float *)&param_1->field_0x30 = *(float *)&param_1->field_0xec + *(float *)&param_1->field_0x30;
  *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0xf0 + *(float *)&param_1->field_0x34;
  *(float *)&param_1->field_0x38 = *(float *)&param_1->field_0xf4 + *(float *)&param_1->field_0x38;
  *(uint *)&param_1->field_0xf4 = 0;
  *(uint *)&param_1->field_0xf0 = *(uint *)&param_1->field_0xf4;
  *(uint *)&param_1->field_0xec = *(uint *)&param_1->field_0xf0;
  if (((((*(float *)&param_1[1].field_0x188 == *(float *)&param_1->field_0x20) &&
        (*(float *)&param_1[1].field_0x18c == *(float *)&param_1->field_0x24)) &&
       (*(float *)&param_1[1].field_0x190 == *(float *)&param_1->field_0x28)) &&
      ((*(float *)&param_1[1].field_0x194 == *(float *)&param_1->field_0x30 &&
       (*(float *)&param_1[1].field_0x198 == *(float *)&param_1->field_0x34)))) &&
     (*(float *)&param_1[1].field_0x19c == *(float *)&param_1->field_0x38)) {
    uStack_c = *(uint *)&param_1[1].field_0x1a0;
  }
  else {
    uStack_c = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x48))
                         (param_1,*(uint *)&param_1[1].field_0x180,0);
    if (&param_1[1].field_0x188 != &param_1->field_0x20) {
      *(uint *)&param_1[1].field_0x188 = *(uint *)&param_1->field_0x20;
      *(uint *)&param_1[1].field_0x18c = *(uint *)&param_1->field_0x24;
      *(uint *)&param_1[1].field_0x190 = *(uint *)&param_1->field_0x28;
    }
    if (&param_1[1].field_0x194 != &param_1->field_0x30) {
      *(uint *)&param_1[1].field_0x194 = *(uint *)&param_1->field_0x30;
      *(uint *)&param_1[1].field_0x198 = *(uint *)&param_1->field_0x34;
      *(uint *)&param_1[1].field_0x19c = *(uint *)&param_1->field_0x38;
    }
    *(uint *)&param_1[1].field_0x1a0 = uStack_c;
    uStack_8 = uStack_c;
  }
  if ((*(int *)&param_1[1].field_0x184 == 0) && (*(int *)&param_1->field_0xdc != 0)) {
    *(int *)&param_1[1].field_0x184 = *(int *)&param_1->field_0xdc;
  }
  iVar1 = *(int *)&param_1[1].field_0x184;
  if (iVar1 != 0) {
    *(int *)&param_1->field_0xdc = iVar1;
    *(uint *)&param_1->field_0x20 = *(uint *)(iVar1 + 0x20);
    *(uint *)&param_1->field_0x24 = *(uint *)(iVar1 + 0x24);
    *(uint *)&param_1->field_0x28 = *(uint *)(iVar1 + 0x28);
    *(uint *)&param_1->field_0x2c = *(uint *)(iVar1 + 0x2c);
    iVar1 = *(int *)&param_1->field_0xdc;
    if ((uint *)&param_1->field_0x30 != (uint *)(iVar1 + 0x30)) {
      *(uint *)&param_1->field_0x30 = *(uint *)(iVar1 + 0x30);
      *(uint *)&param_1->field_0x34 = *(uint *)(iVar1 + 0x34);
      *(uint *)&param_1->field_0x38 = *(uint *)(iVar1 + 0x38);
    }
    (**(code **)(*(int *)(*(int *)&param_1->field_0xdc + 0x2b0) + 0x24))
              (*(int *)&param_1->field_0xdc);
    puVar2 = auStack_3c;
    puVar3 = &uStack_24;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    *(float *)&param_1->field_0x24 = (fStack_14 - fStack_20) + *(float *)&param_1->field_0x24;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(param_1);
    return;
  }
  *(uint *)&param_1->field_0x24 = uStack_c;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(param_1);
  return;
}
