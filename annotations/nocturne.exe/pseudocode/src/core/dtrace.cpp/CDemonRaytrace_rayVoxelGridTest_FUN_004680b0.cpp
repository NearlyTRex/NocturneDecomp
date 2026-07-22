// Name: core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_004680b0
// Address: 004680b0
// Address Range: [[004680b0, 0046857d]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelGridTest_FUN_004680b0(int param_1,float *param_2,float *param_3)

#include "nocturne.h"

uint __cdecl core_dtrace_cpp_CDemonRaytrace_rayVoxelGridTest_FUN_004680b0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  double dVar15;
  uint uStack_c4;
  uint uStack_c0;
  byte auStack_bc [8];
  ulonglong uStack_b4;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  byte local_a0 [16];
  byte local_90 [8];
  ulonglong local_88;
  int iStack_80;
  float local_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  float local_58;
  float local_54;
  float local_50;
  int local_4c;
  int local_48;
  float local_44;
  float local_40;
  float local_38;
  int local_30;
  
  local_50 = (param_2[1] - *(float *)(param_1 + 0x14)) / *(float *)(param_1 + 0x2c);
  fVar1 = *param_2;
  fVar2 = *(float *)(param_1 + 0x10);
  fVar5 = 1.0 / *(float *)(param_1 + 0x28);
  local_58 = (param_2[2] - *(float *)(param_1 + 0x18)) / *(float *)(param_1 + 0x30);
  fVar3 = *param_3;
  fVar4 = *(float *)(param_1 + 0x10);
  fStack_a4 = 6.47477e-39;
  fVar8 = (float10)round((float10)local_50);
  local_a8 = 6.47478e-39;
  fVar9 = (float10)round();
  local_38 = (float)(int)ROUND(fVar8);
  local_30 = (int)ROUND(fVar9);
  fStack_ac = 6.474806e-39;
  local_54 = (fVar1 - fVar2) * fVar5;
  fVar8 = (float10)round();
  local_38 = (float)(int)ROUND(fVar8);
  uStack_b4 = (double)((fVar3 - fVar4) * fVar5);
  auStack_bc._4_4_ = 0x46812f;
  local_88 = (double)floor();
  fVar1 = param_3[1];
  fVar2 = *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_1 + 0x2c);
  uStack_b4._4_4_ = 6.474875e-39;
  fVar8 = (float10)round((float10)local_88);
  local_6c = (int)ROUND(fVar8);
  unique0x0000aa00 = (double)((fVar1 - fVar2) / fVar3);
  auStack_bc._0_4_ = 0x468160;
  dVar15 = (double)floor();
  fVar1 = param_3[2];
  fVar2 = *(float *)(param_1 + 0x18);
  fVar3 = *(float *)(param_1 + 0x30);
  uStack_b4._0_4_ = 6.474943e-39;
  unique0x10000537 = dVar15;
  fVar8 = (float10)round((float10)dVar15);
  local_7c = (float)(int)ROUND(fVar8);
  auStack_bc = (byte  [8])(double)((fVar1 - fVar2) / fVar3);
  uStack_c0 = 0x468191;
  dVar15 = (double)floor();
  iVar7 = 1;
  auStack_bc._4_4_ = 0x4681ad;
  local_90 = (byte  [8])dVar15;
  fVar8 = (float10)round((float10)dVar15);
  fStack_ac = *param_3 - *param_2;
  fStack_78 = (float)(int)ROUND(fVar8);
  local_a8 = param_3[1] - param_2[1];
  fStack_a4 = param_3[2] - param_2[2];
  if (((local_44 != fStack_74) || (local_48 != iStack_80)) ||
     (fVar1 = local_58, fVar2 = local_50, iVar6 = local_4c, local_40 != fStack_78)) {
    uStack_b4._4_4_ = SQRT(fStack_a4 * fStack_a4 + fStack_ac * fStack_ac + local_a8 * local_a8);
    if (uStack_b4._4_4_ <= 0.0) {
      return 0;
    }
    fVar8 = (float10)local_a8;
    fVar9 = (float10)fStack_a4;
    fVar10 = (float10)fStack_ac;
    fVar11 = (float10)2.684355e+08f / (float10)uStack_b4._4_4_;
    auStack_bc._0_4_ = 0x468243;
    fVar12 = (float10)round(ABS(fVar10) * fVar11);
    local_54 = (float)(int)ROUND(fVar12);
    uStack_c0 = 0x468250;
    fVar8 = (float10)round(ABS(fVar8) * fVar11);
    uStack_c4 = 0x468257;
    fVar9 = (float10)round(ABS(fVar9) * fVar11);
    local_60 = (int)ROUND(fVar8);
    local_58 = (float)(int)ROUND(fVar9);
    if (fVar10 < (float10)0) {
      iStack_80 = (int)local_50 - iStack_80;
      local_68 = -1;
      local_90._0_4_ = local_70 - (float)(int)local_50;
    }
    else {
      iStack_80 = iStack_80 - (int)local_50;
      local_68 = 1;
      local_90._0_4_ = (float)((int)local_50 + 1) - local_70;
    }
    if ((float)uStack_b4 < 0.0) {
      iVar6 = (int)local_54 - local_90._4_4_;
      local_6c = -1;
      fStack_78 = fStack_74 - (float)(int)local_54;
    }
    else {
      iVar6 = local_90._4_4_ - (int)local_54;
      local_6c = 1;
      fStack_78 = (float)((int)local_54 + 1) - fStack_74;
    }
    if (uStack_b4._4_4_ < 0.0) {
      iVar7 = local_4c - local_88._4_4_;
      local_64 = -1;
      local_88._0_4_ = local_7c - (float)local_4c;
    }
    else {
      iVar7 = local_88._4_4_ - local_4c;
      local_64 = 1;
      local_88._0_4_ = (float)(local_4c + 1) - local_7c;
    }
    iVar7 = iStack_80 + 1 + iVar6 + iVar7;
    fVar10 = (float10)local_60;
    fVar11 = (float10)(float)local_88;
    fVar12 = (float10)local_5c;
    fVar13 = (float10)(int)local_58;
    fVar8 = (float10)(float)local_90._0_4_;
    fVar9 = (float10)fStack_78;
    local_38 = local_58;
    fVar14 = (float10)round
                                (fVar10 * (float10)(float)local_90._0_4_ -
                                 fVar12 * (float10)fStack_78);
    local_4c = (int)ROUND(fVar14);
    fVar9 = (float10)round(fVar10 * fVar11 - fVar13 * fVar9);
    local_4c = (int)ROUND(fVar9);
    fVar8 = (float10)round(fVar13 * fVar8 - fVar12 * fVar11);
    fVar1 = local_58;
    fVar2 = local_50;
    iVar6 = (int)ROUND(fVar8);
  }
  do {
    local_4c = iVar6;
    local_50 = fVar2;
    local_58 = fVar1;
    iVar6 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
                      (param_1,local_5c,local_60,local_58);
    if (iVar6 != 0) {
      local_44 = (float)core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290
                                  (iVar6,param_2,&uStack_c4,auStack_bc + 4,local_a0);
      if ((0.0 <= local_44) && (local_44 <= 1.0)) {
        return 1;
      }
    }
    iVar7 = iVar7 + -1;
    if (iVar7 < 1) {
      return 0;
    }
    fVar1 = (float)((int)local_58 + (int)local_70);
    fVar2 = (float)((int)local_50 + local_6c);
    iVar6 = local_4c - local_68;
    if ((int)local_54 < 0) {
      if (local_4c < 0) {
        local_5c = local_5c + (int)fStack_74;
        local_54 = (float)((int)local_54 + local_6c);
        fVar1 = local_58;
        fVar2 = local_50;
        iVar6 = local_4c + local_64;
      }
    }
    else if (-1 < (int)local_50) {
      local_60 = local_60 + (int)fStack_78;
      local_54 = (float)((int)local_54 - local_68);
      fVar1 = local_58;
      fVar2 = (float)((int)local_50 - local_64);
      iVar6 = local_4c;
    }
  } while( true );
}
