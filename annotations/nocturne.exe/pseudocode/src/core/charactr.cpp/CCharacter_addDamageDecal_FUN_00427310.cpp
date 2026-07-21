// Name: core_charactr.cpp_CCharacter_addDamageDecal_FUN_00427310
// Address: 00427310
// Address Range: [[00427310, 0042772a]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_addDamageDecal_FUN_00427310(int param_1)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_addDamageDecal_FUN_00427310(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint local_2ec [12];
  uint local_2bc [12];
  uint local_28c [12];
  uint local_25c [12];
  uint local_22c [12];
  uint local_1fc [12];
  uint local_1cc [12];
  uint local_19c [12];
  uint local_16c [12];
  uint local_13c [12];
  byte local_10c [48];
  uint local_dc [12];
  uint local_ac [12];
  uint local_7c [12];
  float local_4c;
  float local_48;
  float local_44;
  byte local_40 [12];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  uint *local_18;
  float local_14;
  
  iVar2 = 0x01E57284;
  bVar7 = 0;
  iVar4 = *(int *)(param_1 + 0x2dec);
  if ((iVar4 < 5) && (-1 < *(int *)(0x01E57284 + 0x14cd60))) {
    *(int *)(param_1 + 0x2dec) = *(int *)(param_1 + 0x2dec) + 1;
    local_18 = (uint *)(param_1 + 0x2df0 + iVar4 * 0x38);
    *local_18 = *(uint *)(iVar2 + 0x14cd60);
    iVar4 = *(int *)(iVar2 + 0x14cd64);
    local_18[1] = iVar4;
    if (iVar4 < 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x110))(param_1,*local_18);
      local_18[1] = uVar3;
    }
    local_4c = *(float *)(0x01E57284 + 0x14cd34) - *(float *)(0x01E57284 + 0x14cd28);
    local_48 = *(float *)(0x01E57284 + 0x14cd38) - *(float *)(0x01E57284 + 0x14cd2c);
    local_44 = *(float *)(0x01E57284 + 0x14cd3c) - *(float *)(0x01E57284 + 0x14cd30);
    fVar1 = SQRT(local_44 * local_44 + local_48 * local_48 + local_4c * local_4c);
    if (fVar1 <= 0.0) {
      local_30 = 0.0;
      local_34 = 0.0;
      local_2c = 0.0;
    }
    else {
      local_2c = 1.0 / fVar1;
      local_34 = local_4c * local_2c;
      local_30 = local_48 * local_2c;
      local_2c = local_44 * local_2c;
    }
    local_1c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                (0x3e99999a,0x3f19999a,fVar1);
    local_34 = local_34 * local_1c;
    local_30 = local_30 * local_1c;
    local_2c = local_2c * local_1c;
    local_28 = *(float *)(0x01E57284 + 0x14cd50) - local_34;
    local_24 = *(float *)(0x01E57284 + 0x14cd54) - local_30;
    local_20 = *(float *)(0x01E57284 + 0x14cd58) - local_2c;
    local_14 = local_1c;
    uVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_40,&local_4c);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(local_ac,&local_28,uVar3);
    local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                (0xbd0efa35,0x3d0efa35,local_ac);
    core_xform_cpp_buildRotationY_FUN_0055c7b0(local_14);
    puVar5 = local_25c;
    puVar6 = local_2bc;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                (0xbd0efa35,0x3d0efa35,local_2bc);
    core_xform_cpp_buildRotationX_FUN_0055c730(local_14);
    puVar5 = local_16c;
    puVar6 = local_19c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_19c);
    puVar5 = local_1cc;
    puVar6 = local_13c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_13c);
    puVar5 = local_7c;
    puVar6 = local_ac;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
              (local_10c,param_1 + 0x20,param_1 + 0x30);
    core_xform_cpp_inverse_FUN_0055bd00(local_18[1] * 0x30 + param_1 + 0xfd0);
    puVar5 = local_2ec;
    puVar6 = local_22c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_ac,local_10c,local_22c);
    puVar5 = local_1fc;
    puVar6 = local_dc;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_dc);
    puVar5 = local_28c;
    puVar6 = local_18 + 2;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
  }
  return;
}
