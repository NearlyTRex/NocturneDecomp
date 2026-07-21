// Name: core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00
// Address: 00467a00
// Address Range: [[00467a00, 004680a9]]
// Convention: unknown
// Signature: float core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00(int param_1,float *param_2,float *param_3,float *param_4,float *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00(int param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  byte auStack_c0 [8];
  ulonglong local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0 [5];
  byte local_8c [8];
  byte local_84 [8];
  byte local_7c [8];
  int iStack_74;
  int local_70;
  int iStack_6c;
  int local_68;
  float local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  float local_48;
  float local_44;
  int local_40;
  int local_3c;
  int local_38;
  
  local_a8 = (*param_2 - *(float *)(param_1 + 0x10)) / *(float *)(param_1 + 0x28);
  local_a4 = (param_2[1] - *(float *)(param_1 + 0x14)) / *(float *)(param_1 + 0x2c);
  local_ac = (param_2[2] - *(float *)(param_1 + 0x18)) / *(float *)(param_1 + 0x30);
  local_b8 = (double)local_a8;
  auStack_c0._4_4_ = 0x467a5e;
  join_0x00000008_0x00000000_ = (double)floor();
  local_b8._4_4_ = 6.47241e-39;
  fVar9 = (float10)round((float10)join_0x00000008_0x00000000_);
  local_3c = (int)ROUND(fVar9);
  unique0x0000aa00 = (double)local_a8;
  auStack_c0._0_4_ = 0x467a87;
  dVar16 = (double)floor();
  local_b8._0_4_ = 6.472467e-39;
  local_7c = (byte  [8])dVar16;
  fVar9 = (float10)round((float10)dVar16);
  local_44 = (float)(int)ROUND(fVar9);
  auStack_c0 = (byte  [8])(double)local_b8._4_4_;
  dVar16 = (double)floor();
  fVar5 = (*param_3 - *(float *)(param_1 + 0x10)) / *(float *)(param_1 + 0x28);
  fVar18 = param_3[1];
  fVar1 = *(float *)(param_1 + 0x14);
  fVar17 = *(float *)(param_1 + 0x2c);
  fVar2 = param_3[2];
  fVar3 = *(float *)(param_1 + 0x18);
  fVar4 = *(float *)(param_1 + 0x30);
  auStack_c0._4_4_ = 0x467ae3;
  unique0x100005ae = dVar16;
  fVar9 = (float10)round((float10)dVar16);
  local_40 = (int)ROUND(fVar9);
  dVar16 = (double)fVar5;
  auStack_c0._0_4_ = (uint)((ulonglong)dVar16 >> 0x20);
  auStack_c0._4_4_ = (fVar18 - fVar1) / fVar17;
  local_a8 = (fVar2 - fVar3) / fVar4;
  local_a0[0] = fVar5;
  dVar16 = (double)floor(SUB84(__BITCAST_UINT64(dVar16),0));
  auStack_c0._0_4_ = 6.472641e-39;
  local_84 = (byte  [8])dVar16;
  fVar9 = (float10)round((float10)dVar16);
  local_68 = (int)ROUND(fVar9);
  dVar16 = (double)floor((double)(float)auStack_c0._0_4_);
  uVar19 = 0x467b3f;
  unique0x100005be = dVar16;
  fVar9 = (float10)round((float10)dVar16);
  iStack_74 = (int)ROUND(fVar9);
  dVar16 = (double)floor((double)local_b0,uVar19);
  fVar18 = 6.472755e-39;
  local_8c = (byte  [8])dVar16;
  fVar9 = (float10)round((float10)dVar16);
  iStack_74 = (int)ROUND(fVar9);
  if ((-1 < local_50) || (-1 < local_70)) {
    if ((local_54 < 0) && ((int)local_7c._4_4_ < 0)) {
      return -1.0;
    }
    if ((local_4c < 0) && (iStack_74 < 0)) {
      return -1.0;
    }
    if ((((local_50 < *(int *)(param_1 + 0x40)) || (local_70 < *(int *)(param_1 + 0x40))) &&
        ((local_54 < *(int *)(param_1 + 0x44) || ((int)local_7c._4_4_ < *(int *)(param_1 + 0x44)))))
       && ((local_4c < *(int *)(param_1 + 0x48) || (iStack_74 < *(int *)(param_1 + 0x48))))) {
      local_a8 = *param_3 - *param_2;
      local_a4 = param_3[1] - param_2[1];
      iVar8 = 1;
      local_a0[0] = param_3[2] - param_2[2];
      if ((local_50 != local_70) || ((local_54 != local_7c._4_4_ || (local_4c != iStack_74)))) {
        local_b8._0_4_ = SQRT(local_a0[0] * local_a0[0] + local_a8 * local_a8 + local_a4 * local_a4)
        ;
        if ((float)local_b8 <= 0.0) {
          return -1.0;
        }
        fVar10 = (float10)fVar18;
        fVar15 = (float10)(float)auStack_c0._4_4_;
        fVar11 = (float10)_DAT_0057e1da;
        fVar9 = (float10)(float)local_b8;
        fVar17 = 6.47312e-39;
        fVar12 = (float10)round
                                    (ABS((float10)local_ac - (float10)(float)auStack_c0._0_4_) *
                                     (fVar11 / fVar9));
        fVar1 = local_ac;
        local_64 = (float)(int)ROUND(fVar12);
        fVar9 = (float10)round(ABS(fVar10 - fVar15) * (fVar11 / fVar9));
        local_3c = (int)ROUND(fVar9);
        fVar9 = (float10)round();
        local_68 = (int)ROUND(fVar9);
        if (fVar1 < 0.0) {
          iVar6 = local_5c - local_7c._0_4_;
          local_8c._0_4_ = fVar17 - (float)local_5c;
          local_44 = -NAN;
        }
        else {
          iVar6 = local_7c._0_4_ - local_5c;
          local_8c._0_4_ = (float)(local_5c + 1) - fVar17;
          local_44 = 1.4013e-45;
        }
        if (local_b0 < 0.0) {
          iStack_74 = -1;
          iVar7 = local_60 - local_84._0_4_;
          local_8c._4_4_ = fVar18 - (float)local_60;
        }
        else {
          iVar7 = local_84._0_4_ - local_60;
          local_8c._4_4_ = (float)(local_60 + 1) - fVar18;
          iStack_74 = 1;
        }
        if (local_ac < 0.0) {
          local_70 = -1;
          iVar8 = local_58 - local_84._4_4_;
          local_64 = 6.473141e-39 - (float)local_58;
        }
        else {
          iVar8 = local_84._4_4_ - local_58;
          local_64 = (float)(local_58 + 1) - 6.473141e-39;
          local_70 = 1;
        }
        iVar8 = iVar6 + 1 + iVar7 + iVar8;
        fVar10 = (float10)local_40;
        fVar11 = (float10)local_64;
        fVar12 = (float10)iStack_6c;
        fVar13 = (float10)local_68;
        fVar9 = (float10)(float)local_8c._0_4_;
        fVar15 = (float10)(float)local_8c._4_4_;
        local_38 = local_68;
        fVar14 = (float10)round
                                    (fVar10 * (float10)(float)local_8c._0_4_ -
                                     fVar12 * (float10)(float)local_8c._4_4_);
        local_58 = (int)ROUND(fVar14);
        fVar15 = (float10)round(fVar10 * fVar11 - fVar13 * fVar15);
        local_58 = (int)ROUND(fVar15);
        fVar9 = (float10)round(fVar13 * fVar9 - fVar12 * fVar11);
        local_58 = (int)ROUND(fVar9);
      }
      fVar18 = 1.0001;
      fVar1 = local_64;
      iVar6 = local_5c;
      iVar7 = local_58;
      while( true ) {
        local_58 = iVar7;
        local_5c = iVar6;
        local_64 = fVar1;
        iVar6 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
                          (param_1,local_68,iStack_6c,local_64);
        if (iVar6 != 0) {
          local_48 = (float)core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290
                                      (iVar6,param_2,auStack_c0,(int)&local_b8 + 4,local_a0);
          if (local_48 < fVar18) {
            if ((param_4 != (float *)0x0) && (param_4 != (float *)((int)&local_b8 + 4))) {
              *param_4 = local_b8._4_4_;
              param_4[1] = local_b0;
              param_4[2] = local_ac;
            }
            fVar18 = local_48;
            if (param_5 != (float *)0x0) {
              *param_5 = local_a0[0];
            }
          }
          local_44 = local_48;
          if (fVar18 <= 1.0) {
            return fVar18;
          }
        }
        iVar8 = iVar8 + -1;
        if (iVar8 < 1) break;
        fVar1 = (float)((int)local_64 + local_7c._0_4_);
        iVar6 = local_5c + local_4c;
        iVar7 = local_58 - local_7c._4_4_;
        if (local_60 < 0) {
          if (local_58 < 0) {
            local_68 = local_68 + local_50;
            local_60 = local_60 + local_4c;
            fVar1 = local_64;
            iVar6 = local_5c;
            iVar7 = local_58 + iStack_74;
          }
        }
        else if (-1 < local_5c) {
          iStack_6c = iStack_6c + local_84._4_4_;
          local_60 = local_60 - local_7c._4_4_;
          fVar1 = local_64;
          iVar6 = local_5c - iStack_74;
          iVar7 = local_58;
        }
      }
      if (param_5 != (float *)0x0) {
        *param_5 = 1.4013e-45;
        return -1.0;
      }
    }
  }
  return -1.0;
}
