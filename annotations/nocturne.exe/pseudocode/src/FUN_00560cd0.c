// Name: FUN_00560cd0
// Address: 00560cd0
// Address Range: [[00560cd0, 00561001]]
// Convention: unknown
// Signature: void FUN_00560cd0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00560cd0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  uint *unaff_ESI;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  byte *puVar8;
  uint local_16c [12];
  uint local_13c [12];
  uint local_10c [3];
  float local_100;
  float local_f0;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  byte local_c4 [24];
  byte local_ac [12];
  float local_a0;
  float local_9c;
  float local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  byte local_88 [12];
  float local_7c;
  float local_78;
  float local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  float local_64;
  float local_60;
  float local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  byte local_28 [12];
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  
  bVar7 = 0;
  iVar2 = param_2 * 0x44 + param_1;
  iVar4 = *(int *)(iVar2 + 0x24ac);
  local_10 = *(int *)(iVar2 + 0x24a4);
  uVar1 = *(uint *)(param_1 + 0xbd38);
  if ((uVar1 == 0) || ((1 < uVar1 && (uVar1 != 3)))) {
    pfVar3 = (float *)(**(code **)(*(int *)(iVar4 + 0x14c) + 0x14))(iVar4,local_c4);
    local_34 = *pfVar3 + pfVar3[3];
    local_30 = pfVar3[1] + pfVar3[4];
    local_4c = local_34 * _DAT_00598782;
    local_2c = pfVar3[2] + pfVar3[5];
    local_48 = local_30 * _DAT_00598782;
    local_44 = local_2c * _DAT_00598782;
    if (&local_64 != &local_4c) {
      local_64 = local_4c;
      local_60 = local_48;
      local_5c = local_44;
    }
    puVar5 = (uint *)(param_2 * 0x44 + param_1 + 0x24b0);
    puVar6 = local_16c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
  }
  else {
    iVar2 = _strnicmp(param_1 + 0x23b0,&DAT_0059877e,3);
    if (iVar2 == 0) {
      local_8c = 0xbf7c6a90;
      local_90 = 0x3f7343c8;
      local_94 = 0xbf93b0b4;
    }
    else {
      local_8c = 0;
      local_90 = 0x3f676c8b;
      local_94 = 0x3e1eb852;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (local_16c,&DAT_02dd1184,&local_94);
    (**(code **)(*(int *)(iVar4 + 0x14c) + 0x14))(iVar4,&local_dc);
    core_actor_cpp_CVector_ctor_FUN_0040e160(&local_1c);
    local_1c = local_dc + local_d0;
    local_18 = local_d8 + local_cc;
    local_14 = local_d4 + local_c8;
    core_actor_cpp_CVector_ctor_FUN_0040e160(&local_7c);
    local_7c = local_1c * _DAT_00598782;
    local_78 = local_18 * _DAT_00598782;
    local_74 = local_d4 + (float)_DAT_00598786;
    if (&local_64 != &local_7c) {
      local_64 = local_7c;
      local_60 = local_78;
      local_5c = local_74;
    }
  }
  if (local_10 == *(int *)(param_1 + 0xbdb8)) {
    puVar5 = &local_70;
    puVar8 = local_88;
    local_70 = 0xbecccccd;
    local_6c = 0;
    local_68 = 0;
  }
  else {
    puVar5 = &local_58;
    puVar8 = local_28;
    local_58 = 0x3ecccccd;
    local_54 = 0;
    local_50 = 0;
  }
  pfVar3 = (float *)core_xform_cpp_transformVector3x4_FUN_0055a8b0
                              (puVar8,puVar5,local_10 * 0x30 + param_1 + 0xfd0);
  if (&local_40 != pfVar3) {
    local_40 = *pfVar3;
    local_3c = pfVar3[1];
    local_38 = pfVar3[2];
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_16c,local_10 * 0x30 + param_1 + 0xfd0);
  puVar5 = local_13c;
  puVar6 = local_10c;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  pfVar3 = (float *)core_xform_cpp_transformVector3x4_FUN_0055a8b0(local_ac,&local_64,local_10c);
  local_a0 = local_40 - *pfVar3;
  local_9c = local_3c - pfVar3[1];
  local_98 = local_38 - pfVar3[2];
  local_100 = local_100 + (local_40 - *pfVar3);
  local_f0 = local_f0 + (local_3c - pfVar3[1]);
  local_e0 = local_e0 + (local_38 - pfVar3[2]);
  puVar5 = local_10c;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *unaff_ESI = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar7 * -2 + 1;
  }
  return;
}
