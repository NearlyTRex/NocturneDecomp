// Name: core_boneguy.cpp_FUN_004194b0
// Address: 004194b0
// Address Range: [[004194b0, 004196a6]]
// Convention: unknown
// Signature: void core_boneguy_cpp_FUN_004194b0(int param_1,int param_2)

#include "nocturne.h"

void core_boneguy_cpp_FUN_004194b0(int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  uint *unaff_ESI;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  byte local_120 [48];
  uint local_f0 [3];
  float local_e4;
  float local_d4;
  float local_c4;
  uint local_c0 [12];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  byte local_78 [12];
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  byte local_24 [12];
  float local_18;
  float local_14;
  float local_10;
  
  bVar6 = 0;
  iVar1 = param_2 * 0x44 + param_1;
  iVar3 = *(int *)(iVar1 + 0x24ac);
  iVar1 = *(int *)(iVar1 + 0x24a4);
  local_58 = 0x40224dd3;
  local_60 = 0xbf456042;
  local_5c = 0xc0224dd3;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            (local_120,&DAT_02dd1184,&local_60);
  (**(code **)(*(int *)(iVar3 + 0x14c) + 0x14))(iVar3,&local_90);
  core_actor_cpp_CVector_ctor_FUN_0040e160(&local_54);
  local_54 = local_90 + local_84;
  local_50 = local_8c + local_80;
  local_4c = local_88 + local_7c;
  core_actor_cpp_CVector_ctor_FUN_0040e160(&local_30);
  local_30 = local_54 * 5.2220990168285998e-315._0_4_;
  local_2c = local_50 * 5.2220990168285998e-315._0_4_;
  local_28 = local_88 + (float)0.40000000000000002;
  if (&local_48 != &local_30) {
    local_48 = local_30;
    local_44 = local_2c;
    local_40 = local_28;
  }
  local_64 = 0xbda7ef9e;
  local_6c = 0x3d03126f;
  local_68 = 0x3e560419;
  pfVar2 = (float *)core_xform_cpp_transformVector3x4_FUN_0055a8b0
                              (local_78,&local_6c,param_1 + 0xfd0 + iVar1 * 0x30);
  if (&local_18 != pfVar2) {
    local_18 = *pfVar2;
    local_14 = pfVar2[1];
    local_10 = pfVar2[2];
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_120,param_1 + 0xfd0 + iVar1 * 0x30);
  puVar4 = local_c0;
  puVar5 = local_f0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  pfVar2 = (float *)core_xform_cpp_transformVector3x4_FUN_0055a8b0(local_24,&local_48,local_f0);
  local_3c = local_18 - *pfVar2;
  local_38 = local_14 - pfVar2[1];
  local_34 = local_10 - pfVar2[2];
  local_e4 = local_e4 + (local_18 - *pfVar2);
  local_d4 = local_d4 + (local_14 - pfVar2[1]);
  local_c4 = local_c4 + (local_10 - pfVar2[2]);
  puVar4 = local_f0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_ESI = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar6 * -2 + 1;
  }
  return;
}
