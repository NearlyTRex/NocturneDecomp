// Name: core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00
// Address: 00467a00
// Address Range: [[00467a00, 004680a9]]
// Convention: unknown
// Signature: float core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00(CDemonRaytrace *param_1,float *param_2,float *param_3,float *param_4,float *param_5 )

#include "nocturne.h"

float core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00(CDemonRaytrace *param_1,float *param_2,float *param_3,float *param_4,float *param_5 )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  CDemonCube *pCVar7;
  int iVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
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
  
  local_a8 = (*param_2 - (param_1->bbox_min).x) / (param_1->cell_size).x;
  local_a4 = (param_2[1] - (param_1->bbox_min).y) / (param_1->cell_size).y;
  local_ac = (param_2[2] - (param_1->bbox_min).z) / (param_1->cell_size).z;
  local_b8 = (double)local_a8;
  auStack_c0._4_4_ = 0x467a5e;
  join_0x00000008_0x00000000_ = (double)floor();
  local_b8._4_4_ = 6.47241e-39;
  dVar9 = round(join_0x00000008_0x00000000_);
  local_3c = (int)ROUND(dVar9);
  unique0x0000aa00 = (double)local_a8;
  auStack_c0._0_4_ = 0x467a87;
  dVar9 = (double)floor();
  local_b8._0_4_ = 6.472467e-39;
  local_7c = (byte  [8])dVar9;
  dVar9 = round(dVar9);
  local_44 = (float)(int)ROUND(dVar9);
  auStack_c0 = (byte  [8])(double)local_b8._4_4_;
  dVar9 = (double)floor();
  fVar4 = (*param_3 - (param_1->bbox_min).x) / (param_1->cell_size).x;
  fVar12 = param_3[1];
  fVar11 = (param_1->bbox_min).y;
  fVar1 = (param_1->cell_size).y;
  fVar2 = param_3[2];
  fVar3 = (param_1->bbox_min).z;
  fVar10 = (param_1->cell_size).z;
  auStack_c0._4_4_ = 0x467ae3;
  unique0x1000098d = dVar9;
  dVar9 = round(dVar9);
  local_40 = (int)ROUND(dVar9);
  dVar9 = (double)fVar4;
  auStack_c0._0_4_ = (uint)((ulonglong)dVar9 >> 0x20);
  auStack_c0._4_4_ = (fVar12 - fVar11) / fVar1;
  local_a8 = (fVar2 - fVar3) / fVar10;
  local_a0[0] = fVar4;
  dVar9 = (double)floor(SUB84(__BITCAST_UINT64(dVar9),0));
  auStack_c0._0_4_ = 6.472641e-39;
  local_84 = (byte  [8])dVar9;
  dVar9 = round(dVar9);
  local_68 = (int)ROUND(dVar9);
  dVar9 = (double)floor((double)(float)auStack_c0._0_4_);
  fVar12 = 6.472697e-39;
  unique0x1000099d = dVar9;
  dVar9 = round(dVar9);
  iStack_74 = (int)ROUND(dVar9);
  dVar9 = (double)floor((double)local_b0);
  fVar11 = 6.472755e-39;
  local_8c = (byte  [8])dVar9;
  dVar9 = round(dVar9);
  iStack_74 = (int)ROUND(dVar9);
  if ((-1 < local_50) || (-1 < local_70)) {
    if ((local_54 < 0) && ((int)local_7c._4_4_ < 0)) {
      return -1.0;
    }
    if ((local_4c < 0) && (iStack_74 < 0)) {
      return -1.0;
    }
    iVar8 = (param_1->grid_coord).x;
    if ((((local_50 < iVar8) || (local_70 < iVar8)) &&
        ((iVar8 = (param_1->grid_coord).y, local_54 < iVar8 || ((int)local_7c._4_4_ < iVar8)))) &&
       ((iVar8 = (param_1->grid_coord).z, local_4c < iVar8 || (iStack_74 < iVar8)))) {
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
        fVar2 = fVar11 - (float)auStack_c0._4_4_;
        fVar12 = local_b8._4_4_ - fVar12;
        fVar1 = 2.684355e+08f / (float)local_b8;
        fVar10 = 6.47312e-39;
        dVar9 = round
                          ((double)(ABS(local_ac - (float)auStack_c0._0_4_) * fVar1));
        fVar3 = local_ac;
        local_64 = (float)(int)ROUND(dVar9);
        dVar9 = round((double)(ABS(fVar2) * fVar1));
        local_3c = (int)ROUND(dVar9);
        dVar9 = round((double)(ABS(fVar12) * fVar1));
        local_68 = (int)ROUND(dVar9);
        if (fVar3 < 0.0) {
          iVar5 = local_5c - local_7c._0_4_;
          local_8c._0_4_ = fVar10 - (float)local_5c;
          local_44 = -NAN;
        }
        else {
          iVar5 = local_7c._0_4_ - local_5c;
          local_8c._0_4_ = (float)(local_5c + 1) - fVar10;
          local_44 = 1.4013e-45;
        }
        if (local_b0 < 0.0) {
          iStack_74 = -1;
          iVar6 = local_60 - local_84._0_4_;
          local_8c._4_4_ = fVar11 - (float)local_60;
        }
        else {
          iVar6 = local_84._0_4_ - local_60;
          local_8c._4_4_ = (float)(local_60 + 1) - fVar11;
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
        iVar8 = iVar5 + 1 + iVar6 + iVar8;
        fVar2 = (float)local_40 * local_64;
        fVar11 = (float)local_68 * (float)local_8c._0_4_;
        fVar1 = (float)local_68 * (float)local_8c._4_4_;
        fVar12 = (float)iStack_6c * local_64;
        local_38 = local_68;
        dVar9 = round
                          ((double)((float)local_40 * (float)local_8c._0_4_ -
                                   (float)iStack_6c * (float)local_8c._4_4_));
        local_58 = (int)ROUND(dVar9);
        dVar9 = round((double)(fVar2 - fVar1));
        local_58 = (int)ROUND(dVar9);
        dVar9 = round((double)(fVar11 - fVar12));
        local_58 = (int)ROUND(dVar9);
      }
      fVar12 = 1.0001;
      fVar11 = local_64;
      iVar5 = local_5c;
      iVar6 = local_58;
      while( true ) {
        local_58 = iVar6;
        local_5c = iVar5;
        local_64 = fVar11;
        pCVar7 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
                           (param_1,local_68,iStack_6c,(int)local_64);
        if (pCVar7 != (CDemonCube *)0x0) {
          local_48 = (float)core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_0044b290
                                      (pCVar7,param_2,auStack_c0,(int)&local_b8 + 4,local_a0);
          if (local_48 < fVar12) {
            if ((param_4 != (float *)0x0) && (param_4 != (float *)((int)&local_b8 + 4))) {
              *param_4 = local_b8._4_4_;
              param_4[1] = local_b0;
              param_4[2] = local_ac;
            }
            fVar12 = local_48;
            if (param_5 != (float *)0x0) {
              *param_5 = local_a0[0];
            }
          }
          local_44 = local_48;
          if (fVar12 <= 1.0) {
            return fVar12;
          }
        }
        iVar8 = iVar8 + -1;
        if (iVar8 < 1) break;
        fVar11 = (float)((int)local_64 + local_7c._0_4_);
        iVar5 = local_5c + local_4c;
        iVar6 = local_58 - local_7c._4_4_;
        if (local_60 < 0) {
          if (local_58 < 0) {
            local_68 = local_68 + local_50;
            local_60 = local_60 + local_4c;
            fVar11 = local_64;
            iVar5 = local_5c;
            iVar6 = local_58 + iStack_74;
          }
        }
        else if (-1 < local_5c) {
          iStack_6c = iStack_6c + local_84._4_4_;
          local_60 = local_60 - local_7c._4_4_;
          fVar11 = local_64;
          iVar5 = local_5c - iStack_74;
          iVar6 = local_58;
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
