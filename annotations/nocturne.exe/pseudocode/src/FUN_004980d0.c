// Name: FUN_004980d0
// Address: 004980d0
// Address Range: [[004980d0, 004983eb]]
// Convention: unknown
// Signature: void FUN_004980d0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004980d0(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  uint local_3ac [12];
  uint local_37c [12];
  byte local_34c [48];
  uint local_31c [12];
  uint local_2ec [12];
  uint local_2bc [12];
  uint local_28c [12];
  uint local_25c [12];
  byte local_22c [48];
  uint local_1fc [12];
  uint local_1cc [12];
  uint local_19c [12];
  uint local_16c [12];
  byte local_13c [48];
  uint local_10c [12];
  uint local_dc [12];
  uint local_ac [12];
  uint local_7c [12];
  byte local_4c [12];
  byte local_40 [12];
  byte local_34 [8];
  float local_2c;
  byte local_28 [20];
  int local_14;
  
  bVar5 = 0;
  core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00429220(param_1,param_2);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            (local_34c,param_1 + 0x20,param_1 + 0x30);
  local_14 = param_1 + 0x1f5a0;
  if (*(float *)(param_1 + 0x1fa44) < _DAT_0059dca4) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x1f8d0) + 0x14c) + 0xd4))
              (*(int *)(param_1 + 0x1f8d0),1);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(local_22c,0x1c71370,0x1c7137c)
    ;
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
              (local_22c,_DAT_01c713c0 * 0x30 + param_1 + 0xfd0,local_34c);
    puVar1 = local_1cc;
    puVar4 = local_1fc;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_1fc);
    puVar1 = local_dc;
  }
  else {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x1f8d0) + 0x14c) + 0xd4))
              (*(int *)(param_1 + 0x1f8d0),2);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (local_13c,0x1c71364,&DAT_02dd1184);
    core_xform_cpp_buildRotationX_FUN_0055c730
              (0x3fc90fdb,local_13c,_DAT_01c713dc * 0x30 + param_1 + 0xfd0);
    puVar1 = local_16c;
    puVar4 = local_28c;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    core_xform_cpp_buildRotationY_FUN_0055c7b0(0x3fc90fdb,local_28c);
    puVar1 = local_3ac;
    puVar4 = local_2bc;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_2bc);
    puVar1 = local_37c;
    puVar4 = local_25c;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_25c);
    puVar1 = local_ac;
    puVar4 = local_19c;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_19c);
    iVar2 = local_14;
    puVar1 = local_7c;
    puVar4 = local_2ec;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0
                      (*(uint *)(iVar2 + 0x330),"?CCrossbow" + 1);
    if (iVar2 != 0) {
      core_xform_cpp_getTranslation_FUN_0055bc00(local_2ec,local_40);
      core_xform_cpp_matrixToEulerAngles_FUN_0055b180(local_2ec,local_34);
      local_2c = (1.0 - *(float *)(param_1 + 0x1fa78)) * local_2c;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(local_2ec,local_40,local_34)
      ;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_2ec,local_34c);
    puVar1 = local_10c;
  }
  puVar4 = local_31c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar1 = (uint *)core_xform_cpp_getTranslation_FUN_0055bc00(local_31c,local_28);
  iVar2 = *(int *)(param_1 + 0x1f8d0);
  *(uint *)(iVar2 + 0x20) = *puVar1;
  *(uint *)(iVar2 + 0x24) = puVar1[1];
  *(uint *)(iVar2 + 0x28) = puVar1[2];
  puVar1 = (uint *)core_xform_cpp_matrixToEulerAngles_FUN_0055b180(local_31c,local_4c);
  iVar2 = *(int *)(param_1 + 0x1f8d0);
  if ((uint *)(iVar2 + 0x30) != puVar1) {
    *(uint *)(iVar2 + 0x30) = *puVar1;
    *(uint *)(iVar2 + 0x34) = puVar1[1];
    *(uint *)(iVar2 + 0x38) = puVar1[2];
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
            (*(uint *)(param_1 + 0x1f8d0));
  return;
}
