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
  float fStack_c;
  float fStack_8;
  
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
  (param_1->orient).vec.x = *(float *)&param_1->field_0xec + (param_1->orient).vec.x;
  (param_1->orient).vec.y = *(float *)&param_1->field_0xf0 + (param_1->orient).vec.y;
  (param_1->orient).vec.z = *(float *)&param_1->field_0xf4 + (param_1->orient).vec.z;
  *(uint *)&param_1->field_0xf4 = 0;
  *(uint *)&param_1->field_0xf0 = *(uint *)&param_1->field_0xf4;
  *(uint *)&param_1->field_0xec = *(uint *)&param_1->field_0xf0;
  if (((((*(float *)&param_1[1].field_0x188 == *(float *)&param_1->field_0x20) &&
        (*(float *)&param_1[1].field_0x18c == *(float *)&param_1->field_0x24)) &&
       (*(float *)&param_1[1].field_0x190 == *(float *)&param_1->field_0x28)) &&
      ((*(float *)&param_1[1].field_0x194 == (param_1->orient).vec.x &&
       (*(float *)&param_1[1].field_0x198 == (param_1->orient).vec.y)))) &&
     (*(float *)&param_1[1].field_0x19c == (param_1->orient).vec.z)) {
    fStack_c = *(float *)&param_1[1].field_0x1a0;
  }
  else {
    fStack_c = (*((param_1->vtable)._ub)->cylinderGroundCheck)
                         (param_1,*(float *)&param_1[1].field_0x180,(CVector3f *)0x0);
    if (&param_1[1].field_0x188 != &param_1->field_0x20) {
      *(uint *)&param_1[1].field_0x188 = *(uint *)&param_1->field_0x20;
      *(uint *)&param_1[1].field_0x18c = *(uint *)&param_1->field_0x24;
      *(uint *)&param_1[1].field_0x190 = *(uint *)&param_1->field_0x28;
    }
    if ((UOrientationVector *)&param_1[1].field_0x194 != &param_1->orient) {
      *(float *)&param_1[1].field_0x194 = (param_1->orient).vec.x;
      *(float *)&param_1[1].field_0x198 = (param_1->orient).vec.y;
      *(float *)&param_1[1].field_0x19c = (param_1->orient).vec.z;
    }
    *(float *)&param_1[1].field_0x1a0 = fStack_c;
    fStack_8 = fStack_c;
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
    if (&param_1->orient != (UOrientationVector *)(iVar1 + 0x30)) {
      (param_1->orient).vec.x = *(float *)(iVar1 + 0x30);
      (param_1->orient).vec.y = *(float *)(iVar1 + 0x34);
      (param_1->orient).vec.z = *(float *)(iVar1 + 0x38);
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
  *(float *)&param_1->field_0x24 = fStack_c;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(param_1);
  return;
}
