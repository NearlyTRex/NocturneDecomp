// Name: FUN_00499ca0
// Address: 00499ca0
// Address Range: [[00499ca0, 0049a109]]
// Convention: unknown
// Signature: void FUN_00499ca0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00499ca0(int param_1,float param_2)

{
  int iVar1;
  float *pfVar2;
  uint *puVar3;
  int iVar4;
  uint *unaff_ESI;
  uint *puVar5;
  byte bVar6;
  uint auStack_190 [12];
  uint local_160 [3];
  float local_154;
  float local_144;
  float local_134;
  uint auStack_130 [12];
  uint auStack_100 [12];
  uint auStack_d0 [12];
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float local_7c [3];
  byte local_70 [12];
  float local_64;
  float local_60;
  float local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  byte auStack_4c [12];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  
  bVar6 = 0;
  iVar1 = (int)param_2 * 0x44 + param_1;
  iVar4 = *(int *)(iVar1 + 0x24ac);
  local_10 = *(int *)(iVar1 + 0x24a4);
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_14 = 0.0;
  local_18 = 0.0;
  local_1c = 0.0;
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890(iVar4,DAT_00764ad4);
  if (iVar1 == 0) goto LAB_00499d1a;
  (**(code **)(*(int *)(iVar4 + 0x14c) + 0x14))(iVar4,&local_a0);
  fStack_28 = local_a0 + fStack_94;
  fStack_88 = fStack_28 * 0.5f;
  fStack_24 = fStack_9c + fStack_90;
  fStack_20 = fStack_98 + fStack_8c;
  fStack_84 = fStack_24 * 0.5f;
  fStack_80 = fStack_20 * 0.5f;
  if (&local_1c != &fStack_88) {
    local_1c = fStack_88;
    local_18 = fStack_84;
    local_14 = fStack_80;
  }
  iVar4 = *(int *)(iVar1 + 0x664);
  if (iVar4 == 2) {
    local_18 = fStack_90;
    goto LAB_00499d1a;
  }
  if (iVar4 != 1) {
    if (iVar4 == 3) {
      local_18 = fStack_90;
    }
    else {
      _DAT_01cc4800 = "..\\core\\gabriela.cpp";
      _DAT_01cc4804 = 0x945;
      FUN_004c8440("Don't know how to carry light %s",iVar1);
    }
    goto LAB_00499d1a;
  }
  if (param_2 == 0.0) {
    core_xform_cpp_buildRotationY_FUN_0055c7b0(0xbfc90fdb);
    puVar3 = auStack_190;
LAB_00499f65:
    puVar5 = auStack_d0;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  else {
    if (param_2 == 1.4013e-45) {
      core_xform_cpp_buildRotationY_FUN_0055c7b0(0x3fc90fdb);
      puVar3 = auStack_100;
      goto LAB_00499f65;
    }
    core_xform_cpp_setIdentityMatrix3x4_FUN_0055abf0(auStack_d0);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(auStack_d0,local_10 * 0x30 + param_1 + 0xfd0);
  puVar3 = auStack_130;
  puVar5 = auStack_d0;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  puVar3 = (uint *)core_xform_cpp_matrixToEulerAngles_FUN_0055b180(auStack_d0,auStack_4c);
  if (&local_58 != puVar3) {
    local_58 = *puVar3;
    local_54 = puVar3[1];
    local_50 = puVar3[2];
  }
  local_14 = fStack_8c * (float)0.29999999999999999 + fStack_98 * (float)0.69999999999999996;
LAB_00499d1a:
  if (param_2 == 0.0) {
    local_60 = param_2;
    local_64 = -0.4;
    local_5c = param_2;
    if (&local_34 != &local_64) {
      local_30 = param_2;
      local_2c = param_2;
      local_34 = -0.4;
    }
  }
  else if (param_2 == 1.4013e-45) {
    local_7c[1] = 0.0;
    local_7c[2] = 0.0;
    local_7c[0] = 0.4;
    if (&local_34 != local_7c) {
      local_34 = 0.4;
      local_30 = 0.0;
      local_2c = 0.0;
    }
  }
  else {
    local_30 = 0.0;
    local_34 = 0.0;
    local_2c = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_0055a910(&local_34,local_10 * 0x30 + param_1 + 0xfd0)
  ;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(local_160,&local_34,&local_58);
  pfVar2 = (float *)core_xform_cpp_transformVector3x4_FUN_0055a8b0(local_70,&local_1c,local_160);
  local_40 = local_34 - *pfVar2;
  local_3c = local_30 - pfVar2[1];
  local_38 = local_2c - pfVar2[2];
  local_154 = local_154 + (local_34 - *pfVar2);
  local_144 = local_144 + (local_30 - pfVar2[1]);
  local_134 = local_134 + (local_2c - pfVar2[2]);
  puVar3 = local_160;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar6 * -2 + 1;
  }
  return;
}
