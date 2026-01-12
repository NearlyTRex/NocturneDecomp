// Name: shape_meshlod.cpp_fitLeastSquaresPlane_FUN_005151e0
// Address: 005151e0
// Address Range: [[005151e0, 00515836]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_fitLeastSquaresPlane_FUN_005151e0(int point_count, CVector3f * positions, float * values, CVector3f * normal, CVector3f * out_gradient, float * out_offset)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_fitLeastSquaresPlane_FUN_005151e0
          (int point_count,CVector3f *positions,float *values,CVector3f *normal,
          CVector3f *out_gradient,float *out_offset)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  CVector3f *pCVar5;
  float *pfVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d0;
  double local_c0;
  int local_a0;
  CMatrix3x3f local_98;
  byte local_70 [8];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  CVector3f local_4c;
  CVector3f local_40;
  double local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  local_98.m[0].z = normal->x;
  local_98.m[1].z = normal->y;
  local_98.m[2].z = normal->z;
  local_18 = ABS(normal->y);
  local_1c = ABS(normal->z);
  local_2c = ABS(normal->x);
  fVar1 = normal->x;
  fVar2 = normal->y;
  local_68 = normal->z;
  if ((local_2c < local_18) || (local_2c < local_1c)) {
    if ((local_18 < local_2c) || (local_18 < local_1c)) {
      local_68 = -local_68;
      local_24 = local_68;
      local_70._0_4_ = local_68;
      local_70._4_4_ = fVar2;
      local_68 = fVar1;
    }
    else {
      local_70._4_4_ = (uint)fVar2 ^ 0x80000000;
      local_28 = (float)local_70._4_4_;
      local_70._0_4_ = local_70._4_4_;
      local_70._4_4_ = fVar1;
    }
  }
  else {
    local_70._0_4_ = (uint)fVar1 ^ 0x80000000;
    local_20 = (float)local_70._0_4_;
    local_70._4_4_ = local_70._0_4_;
    local_70._0_4_ = fVar2;
  }
  local_58 = normal->y * local_68 - normal->z * (float)local_70._4_4_;
  local_54 = normal->z * (float)local_70._0_4_ - normal->x * local_68;
  local_50 = normal->x * (float)local_70._4_4_ - normal->y * (float)local_70._0_4_;
  if ((float *)local_70 != &local_58) {
    local_70._0_4_ = local_58;
    local_70._4_4_ = local_54;
    local_68 = local_50;
  }
  local_98.m[0].x = (float)local_70._0_4_;
  local_98.m[1].x = (float)local_70._4_4_;
  local_98.m[2].x = local_68;
  local_64 = normal->y * local_68 - normal->z * (float)local_70._4_4_;
  local_60 = normal->z * (float)local_70._0_4_ - normal->x * local_68;
  local_5c = normal->x * (float)local_70._4_4_ - normal->y * (float)local_70._0_4_;
  if ((float *)local_70 != &local_64) {
    local_70._0_4_ = local_64;
    local_70._4_4_ = local_60;
    local_68 = local_5c;
  }
  iVar7 = 0;
  local_98.m[0].y = (float)local_70._0_4_;
  local_e0 = 0.0;
  local_f0 = 0.0;
  fVar3 = 0.0;
  local_c0 = 0.0;
  local_d0 = 0.0;
  local_e8 = 0.0;
  fVar1 = 0.0;
  local_98.m[1].y = (float)local_70._4_4_;
  fVar2 = 0.0;
  local_98.m[2].y = local_68;
  pfVar6 = values;
  if (0 < point_count) {
    do {
      pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&local_98,&local_4c,positions);
      if ((CVector3f *)(local_70 + 4) != pCVar5) {
        local_70._0_4_ = pCVar5->x;
        local_70._4_4_ = pCVar5->y;
        local_68 = pCVar5->z;
      }
      local_e0 = (double)((float)local_70._0_4_ + (float)local_e0);
      positions = positions + 1;
      iVar7 = iVar7 + 1;
      fVar3 = *pfVar6 + fVar3;
      local_f0 = (double)((float)local_70._4_4_ + (float)local_f0);
      fVar1 = *pfVar6 * (float)local_70._0_4_ + fVar1;
      fVar2 = *pfVar6 * (float)local_70._4_4_ + fVar2;
      local_c0 = (double)((float)local_70._0_4_ * (float)local_70._0_4_ + (float)local_c0);
      local_d0 = (double)((float)local_70._4_4_ * (float)local_70._4_4_ + (float)local_d0);
      local_e8 = (double)((float)local_70._0_4_ * (float)local_70._4_4_ + (float)local_e8);
      pfVar6 = pfVar6 + 1;
    } while (iVar7 < point_count);
  }
  local_14 = point_count;
  dVar4 = local_f0 * local_f0 * local_c0 +
          local_d0 * local_e0 * local_e0 +
          (((double)point_count * local_e8 * local_e8 -
           local_e8 * 2 * local_e0 * local_f0) -
          local_d0 * (double)point_count * local_c0);
  local_a0 = SUB84 /* extract 2-byte value */(dVar4,0);
  if ((((ulonglong)dVar4 & 0x7fffffff00000000) == 0) && (local_a0 == 0)) {
    out_gradient->z = 0.0;
    out_gradient->y = out_gradient->z;
    out_gradient->x = out_gradient->y;
    iVar7 = 0;
    *out_offset = 0.0;
    if (0 < point_count) {
      do {
        fVar1 = *values;
        values = values + 1;
        iVar7 = iVar7 + 1;
        *out_offset = fVar1 + *out_offset;
      } while (iVar7 < point_count);
    }
    *out_offset = *out_offset / (float)point_count;
    return;
  }
  fVar8 = (float10)local_e0;
  local_34 = (double)(fVar8 * (float10)local_f0);
  fVar9 = (float10)fVar3;
  fVar10 = (float10)((double)point_count * local_e8);
  fVar11 = (float10)fVar1;
  local_68 = 0.0;
  local_70._0_4_ =
       (uint)
       (-((float10)local_f0 * (float10)local_e8 * fVar9 +
         fVar11 * (float10)point_count * (float10)local_d0 +
         (((fVar8 * (float10)local_f0 * (float10)fVar2 - fVar8 * fVar9 * (float10)local_d0) -
          fVar10 * (float10)fVar2) - (float10)(local_f0 * local_f0) * fVar11)) *
       ((float10)1 / (float10)dVar4));
  local_70._4_4_ =
       (uint)
       (((float10)fVar2 * fVar8 * fVar8 +
        (((float10)local_f0 * fVar9 * (float10)local_c0 +
         ((fVar10 * fVar11 + -(float10)local_e8 * fVar8 * fVar9) - (float10)local_34 * fVar11)) -
        (float10)fVar2 * (float10)point_count * (float10)local_c0)) * ((float10)1 / (float10)dVar4))
  ;
  pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     (&local_98,&local_40,(CVector3f *)local_70);
  if (pCVar5 != out_gradient) {
    out_gradient->x = pCVar5->x;
    out_gradient->y = pCVar5->y;
    out_gradient->z = pCVar5->z;
  }
  fVar8 = (float10)local_e8;
  *out_offset = (float)(-((float10)fVar3 * (float10)local_d0 * (float10)local_c0 +
                         ((((float10)local_f0 * fVar8 * (float10)fVar1 +
                           ((float10)local_e0 * fVar8 * (float10)fVar2 -
                           (float10)local_e0 * (float10)fVar1 * (float10)local_d0)) -
                          (float10)local_f0 * (float10)fVar2 * (float10)local_c0) -
                         (float10)fVar3 * fVar8 * fVar8)) / (float10)dVar4);
  return;
}
