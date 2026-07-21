// Name: FUN_004d6650
// Address: 004d6650
// Address Range: [[004d6650, 004d747d]]
// Convention: unknown
// Signature: void FUN_004d6650(float *param_1,float *param_2,undefined4 param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d6650(float *param_1,float *param_2,uint param_3,float param_4)

{
  float fVar1;
  float *pfVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  uint *puVar7;
  byte bVar8;
  uint local_4a4 [12];
  uint local_474 [12];
  uint local_444 [12];
  uint local_414 [12];
  byte local_3e4 [12];
  float local_3d8;
  float local_3c8;
  float local_3b8;
  uint local_3b4 [12];
  uint local_384 [12];
  byte local_354 [40];
  uint local_32c;
  uint local_324 [12];
  uint local_2f4 [12];
  float local_2c4;
  float local_2c0;
  float local_2bc;
  uint local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  uint local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  uint local_298;
  float local_294 [12];
  uint local_264 [12];
  uint local_234 [12];
  uint local_204 [12];
  uint local_1d4 [12];
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_194;
  float local_190;
  float local_18c;
  byte local_188 [12];
  byte local_17c [12];
  uint local_170;
  uint local_16c;
  uint local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  byte local_140 [12];
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  byte local_11c [12];
  byte local_110 [12];
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  byte local_8c [12];
  byte local_80 [12];
  byte local_74 [12];
  byte local_68 [12];
  float local_5c;
  float local_58;
  float local_54;
  byte local_50 [12];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar8 = 0;
  core_mirror_cpp_computePlaneFromTriangle_FUN_004d6170(&local_1a4,param_1,param_1 + 3,param_1 + 6);
  if ((ABS(local_1a4) <= ABS(local_1a0)) || (ABS(local_1a4) <= ABS(local_19c))) {
    if ((ABS(local_1a0) <= ABS(local_1a4)) || (ABS(local_1a0) <= ABS(local_19c))) {
      local_160 = 1.0;
      local_15c = 0.0;
    }
    else {
      local_160 = 0.0;
      local_15c = 1.0;
    }
  }
  else {
    local_160 = 1.0;
    local_15c = 0.0;
  }
  local_164 = 0.0;
  local_14c = local_1a4;
  local_148 = local_1a0;
  local_b0 = local_160 * local_19c - local_15c * local_1a0;
  local_ac = local_15c * local_1a4 - local_19c * 0.0;
  local_a8 = local_1a0 * 0.0 - local_160 * local_1a4;
  local_144 = local_19c;
  if (&local_194 != &local_b0) {
    local_194 = local_b0;
    local_190 = local_ac;
    local_18c = local_a8;
  }
  fVar1 = SQRT(local_18c * local_18c + local_194 * local_194 + local_190 * local_190);
  if (fVar1 <= 0.0) {
    local_190 = 0.0;
    local_194 = 0.0;
    local_18c = 0.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    local_194 = local_194 * fVar1;
    local_190 = local_190 * fVar1;
    local_18c = local_18c * fVar1;
  }
  local_158 = local_1a0 * local_18c - local_19c * local_190;
  local_154 = local_19c * local_194 - local_1a4 * local_18c;
  local_150 = local_1a4 * local_190 - local_1a0 * local_194;
  if (&local_164 != &local_158) {
    local_164 = local_158;
    local_160 = local_154;
    local_15c = local_150;
  }
  fVar1 = SQRT(local_15c * local_15c + local_164 * local_164 + local_160 * local_160);
  if (fVar1 <= 0.0) {
    local_160 = 0.0;
    local_164 = 0.0;
    local_15c = 0.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    local_164 = local_164 * fVar1;
    local_160 = local_160 * fVar1;
    local_15c = local_15c * fVar1;
  }
  core_xform_cpp_setIdentityMatrix3x4_FUN_0055abf0(local_3e4);
  local_3d8 = -*param_1;
  local_3c8 = -param_1[1];
  local_2c4 = local_194;
  local_2c0 = local_190;
  local_2bc = local_18c;
  local_2b4 = local_164;
  local_2b0 = local_160;
  local_2ac = local_15c;
  local_2a4 = local_14c;
  local_3b8 = -param_1[2];
  local_2a0 = local_148;
  local_29c = local_144;
  local_2b8 = 0;
  local_2a8 = 0;
  local_298 = 0;
  core_xform_cpp_setIdentityMatrix3x4_FUN_0055abf0(local_354);
  local_32c = 0xbf800000;
  core_xform_cpp_inverse_FUN_0055bd00(local_3e4);
  puVar3 = local_264;
  puVar7 = local_234;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  core_xform_cpp_inverse_FUN_0055bd00(&local_2c4,local_234);
  puVar3 = local_204;
  puVar7 = local_3b4;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_3e4,&local_2c4,local_354,local_3b4);
  puVar3 = local_2f4;
  puVar7 = local_1d4;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_1d4);
  puVar3 = local_414;
  puVar7 = local_474;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_474);
  puVar3 = local_444;
  puVar7 = local_384;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_384);
  pfVar2 = local_294;
  pfVar6 = param_1 + 0xc;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar6 = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar8 * -2 + 1;
    pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
  }
  pfVar2 = (float *)core_xform_cpp_transformVector3x4_FUN_0055a8b0(local_8c,param_2,param_1 + 0xc);
  if (param_1 + 0x18 != pfVar2) {
    param_1[0x18] = *pfVar2;
    param_1[0x19] = pfVar2[1];
    param_1[0x1a] = pfVar2[2];
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(param_1 + 0x1c,param_3);
  local_38 = param_1[0x1d];
  local_18 = param_1[0x20];
  local_34 = param_1[0x23];
  local_30 = param_1[0x1c];
  local_2c = param_1[0x1f];
  local_28 = param_1[0x22];
  local_24 = param_1[0x1e];
  local_20 = param_1[0x21];
  local_1c = param_1[0x24];
  local_104 = local_38 + *param_2;
  local_100 = local_18 + param_2[1];
  local_fc = local_34 + param_2[2];
  local_128 = local_38;
  local_124 = local_18;
  local_120 = local_34;
  if (&local_128 != &local_104) {
    local_128 = local_104;
    local_124 = local_100;
    local_120 = local_fc;
  }
  local_c8 = local_30 + *param_2;
  local_c4 = local_2c + param_2[1];
  local_c0 = local_28 + param_2[2];
  local_e0 = local_30;
  local_dc = local_2c;
  local_d8 = local_28;
  if (&local_e0 != &local_c8) {
    local_e0 = local_c8;
    local_dc = local_c4;
    local_d8 = local_c0;
  }
  local_ec = local_24 + *param_2;
  local_e8 = local_20 + param_2[1];
  local_e4 = local_1c + param_2[2];
  local_5c = local_24;
  local_58 = local_20;
  local_54 = local_1c;
  if (&local_5c != &local_ec) {
    local_5c = local_ec;
    local_58 = local_e8;
    local_54 = local_e4;
  }
  pfVar2 = (float *)core_xform_cpp_transformVector3x4_FUN_0055a8b0
                              (local_80,&local_128,param_1 + 0xc);
  if (&local_128 != pfVar2) {
    local_128 = *pfVar2;
    local_124 = pfVar2[1];
    local_120 = pfVar2[2];
  }
  pfVar2 = (float *)core_xform_cpp_transformVector3x4_FUN_0055a8b0
                              (local_110,&local_e0,param_1 + 0xc);
  if (&local_e0 != pfVar2) {
    local_e0 = *pfVar2;
    local_dc = pfVar2[1];
    local_d8 = pfVar2[2];
  }
  pfVar2 = (float *)core_xform_cpp_transformVector3x4_FUN_0055a8b0(local_68,&local_5c,param_1 + 0xc)
  ;
  if (&local_5c != pfVar2) {
    local_5c = *pfVar2;
    local_58 = pfVar2[1];
    local_54 = pfVar2[2];
  }
  local_f8 = local_128 - param_1[0x18];
  local_f4 = local_124 - param_1[0x19];
  local_f0 = local_120 - param_1[0x1a];
  if (&local_128 != &local_f8) {
    local_128 = local_f8;
    local_124 = local_f4;
    local_120 = local_f0;
  }
  local_44 = local_e0 - param_1[0x18];
  local_40 = local_dc - param_1[0x19];
  local_3c = local_d8 - param_1[0x1a];
  if (&local_e0 != &local_44) {
    local_e0 = local_44;
    local_dc = local_40;
    local_d8 = local_3c;
  }
  local_134 = local_5c - param_1[0x18];
  local_130 = local_58 - param_1[0x19];
  local_12c = local_54 - param_1[0x1a];
  if (&local_5c != &local_134) {
    local_5c = local_134;
    local_58 = local_130;
    local_54 = local_12c;
  }
  param_1[0x1c] = local_e0;
  param_1[0x1f] = local_dc;
  param_1[0x22] = local_d8;
  param_1[0x1d] = local_128;
  param_1[0x20] = local_124;
  param_1[0x23] = local_120;
  param_1[0x1e] = local_5c;
  param_1[0x21] = local_58;
  param_1[0x24] = local_54;
  param_1[0x1b] = param_4;
  core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_004d6610(param_1);
  core_xform_cpp_setIdentityMatrix3x4_FUN_0055abf0(local_3e4);
  local_3d8 = -param_1[0x18];
  local_3c8 = -param_1[0x19];
  local_3b8 = -param_1[0x1a];
  core_xform_cpp_setIdentityMatrix3x4_FUN_0055abf0(&local_2c4);
  local_2c4 = (float)_DAT_01c039e8 * (float)_DAT_0058960a;
  local_2b4 = (float)_DAT_01c039ec * (float)_DAT_0058960a;
  local_2a4 = (float)_DAT_01c039f0 * (float)_DAT_0058960a;
  local_2c0 = (float)_DAT_01c039f4 * (float)_DAT_0058960a;
  local_2b0 = (float)_DAT_01c039f8 * (float)_DAT_0058960a;
  local_2a0 = (float)_DAT_01c039fc * (float)_DAT_0058960a;
  local_2bc = (float)_DAT_01c03a00 * (float)_DAT_0058960a;
  local_2ac = (float)_DAT_01c03a04 * (float)_DAT_0058960a;
  local_29c = (float)_DAT_01c03a08 * (float)_DAT_0058960a;
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_3e4,&local_2c4);
  puVar3 = local_4a4;
  puVar7 = local_324;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  puVar3 = (uint *)core_xform_cpp_transformVector3x4_FUN_0055a8b0(local_50,param_1,local_324);
  if (&local_170 != puVar3) {
    local_170 = *puVar3;
    local_16c = puVar3[1];
    local_168 = puVar3[2];
  }
  puVar3 = (uint *)
           core_xform_cpp_transformVector3x4_FUN_0055a8b0(local_74,param_1 + 3,local_324);
  if (&local_d4 != puVar3) {
    local_d4 = *puVar3;
    local_d0 = puVar3[1];
    local_cc = puVar3[2];
  }
  puVar3 = (uint *)
           core_xform_cpp_transformVector3x4_FUN_0055a8b0(local_140,param_1 + 6,local_324);
  if (&local_a4 != puVar3) {
    local_a4 = *puVar3;
    local_a0 = puVar3[1];
    local_9c = puVar3[2];
  }
  puVar3 = (uint *)
           core_xform_cpp_transformVector3x4_FUN_0055a8b0(local_188,param_1 + 9,local_324);
  if (&local_bc != puVar3) {
    local_bc = *puVar3;
    local_b8 = puVar3[1];
    local_b4 = puVar3[2];
  }
  uVar4 = core_xform_cpp_transformVector3x4_FUN_0055a8b0(local_17c,param_2,param_1 + 0xc,local_324);
  puVar3 = (uint *)core_xform_cpp_transformVector3x4_FUN_0055a8b0(local_11c,uVar4);
  if (&local_98 != puVar3) {
    local_98 = *puVar3;
    local_94 = puVar3[1];
    local_90 = puVar3[2];
  }
  core_mirror_cpp_computePlaneFromTriangle_FUN_004d6170
            (param_1 + 0x26,&local_170,&local_d4,&local_a4);
  core_mirror_cpp_computePlaneFromTriangle_FUN_004d6170
            (param_1 + 0x2a,&local_98,&local_170,&local_d4);
  core_mirror_cpp_computePlaneFromTriangle_FUN_004d6170
            (param_1 + 0x2e,&local_98,&local_d4,&local_a4);
  core_mirror_cpp_computePlaneFromTriangle_FUN_004d6170
            (param_1 + 0x32,&local_98,&local_a4,&local_bc);
  core_mirror_cpp_computePlaneFromTriangle_FUN_004d6170
            (param_1 + 0x36,&local_98,&local_bc,&local_170);
  return;
}
