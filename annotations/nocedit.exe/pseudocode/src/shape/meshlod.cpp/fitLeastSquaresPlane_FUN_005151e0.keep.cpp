// Name: shape_meshlod.cpp_fitLeastSquaresPlane_FUN_005151e0
// Address: 005151e0
// MANUAL RECONSTRUCTION
// Address Range: [[005151e0, 00515836]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_fitLeastSquaresPlane_FUN_005151e0(int point_count,CVector3f *positions,float *values,CVector3f *normal,CVector3f *out_gradient,float *out_offset)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_fitLeastSquaresPlane_FUN_005151e0(int point_count,CVector3f *positions,float *values,CVector3f *normal,CVector3f *out_gradient,float *out_offset)

{
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar12;
  CVector3f *pCVar5;
  CVector3f *pCVar13;
  int iVar14;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar15;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d0;
  double local_c0;
  CMatrix3x3f local_98;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  double dVar4;
  float fVar3;
  float fVar2;
  float fVar1;
  
  local_98.m[0].z = normal->x;
  local_98.m[1].z = normal->y;
  local_98.m[2].z = normal->z;
  fVar7 = ABS(normal->y);
  fVar12 = ABS(normal->x);
  fVar1 = normal->x;
  fVar2 = normal->y;
  local_70.z = normal->z;
  if ((fVar12 < fVar7) || (fVar12 < ABS(normal->z))) {
    if ((fVar7 < fVar12) || (fVar7 < ABS(normal->z))) {
      local_70.z = -local_70.z;
      local_70.x = local_70.z;
      local_70.y = fVar2;
      local_70.z = fVar1;
    }
    else {
      local_70.y = -fVar2;
      local_70.x = local_70.y;
      local_70.y = fVar1;
    }
  }
  else {
    local_70.x = -fVar1;
    local_70.y = local_70.x;
    local_70.x = fVar2;
  }
  local_58.x = normal->y * local_70.z - normal->z * local_70.y;
  local_58.y = normal->z * local_70.x - normal->x * local_70.z;
  local_58.z = normal->x * local_70.y - normal->y * local_70.x;
  local_70 = local_58;
  local_98.m[0].x = local_70.x;
  local_98.m[1].x = local_70.y;
  local_98.m[2].x = local_70.z;
  local_64.x = normal->y * local_70.z - normal->z * local_70.y;
  local_64.y = normal->z * local_70.x - normal->x * local_70.z;
  local_64.z = normal->x * local_70.y - normal->y * local_70.x;
  local_70 = local_64;
  iVar7 = 0;
  local_98.m[0].y = local_70.x;
  local_e0 = 0.0;
  local_f0 = 0.0;
  fVar3 = 0.0;
  local_c0 = 0.0;
  local_d0 = 0.0;
  local_e8 = 0.0;
  fVar7 = 0.0;
  local_98.m[1].y = local_70.y;
  fVar12 = 0.0;
  local_98.m[2].y = local_70.z;
  pfVar6 = values;
  if (0 < point_count) {
    do {
      pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&local_98,&local_4c,positions);
      local_70 = *pCVar5;
      fVar4 = *pfVar6;
      fVar5 = *pfVar6;
      local_e0 = (double)(local_70.x + (float)local_e0);
      fVar6 = *pfVar6;
      positions = positions + 1;
      pfVar6 = pfVar6 + 1;
      iVar7 = iVar7 + 1;
      fVar3 = fVar6 + fVar3;
      local_f0 = (double)(local_70.y + (float)local_f0);
      fVar7 = fVar4 * local_70.x + fVar7;
      fVar12 = fVar5 * local_70.y + fVar12;
      local_c0 = (double)(local_70.x * local_70.x + (float)local_c0);
      local_d0 = (double)(local_70.y * local_70.y + (float)local_d0);
      local_e8 = (double)(local_70.x * local_70.y + (float)local_e8);
    } while (iVar7 < point_count);
  }
  dVar4 = local_f0 * local_f0 * local_c0 +
          local_d0 * local_e0 * local_e0 +
          (((double)point_count * local_e8 * local_e8 -
           local_e8 * 2 * local_e0 * local_f0) -
          local_d0 * (double)point_count * local_c0);
  if (dVar4 == 0.0) {
    out_gradient->x = 0.0f;
    out_gradient->y = 0.0f;
    out_gradient->z = 0.0f;
    iVar14 = 0;
    *out_offset = 0.0;
    if (0 < point_count) {
      do {
        fVar7 = *values;
        values = values + 1;
        iVar14 = iVar14 + 1;
        *out_offset = fVar7 + *out_offset;
      } while (iVar14 < point_count);
    }
    *out_offset = *out_offset / (float)point_count;
    return;
  }
  fVar8 = (float10)local_e0;
  fVar9 = (float10)fVar3;
  fVar10 = (float10)((double)point_count * local_e8);
  fVar11 = (float10)fVar7;
  local_70.z = 0.0;
  local_70.x = (float)(-((float10)local_f0 * (float10)local_e8 * fVar9 +
                        fVar11 * (float10)point_count * (float10)local_d0 +
                        (((fVar8 * (float10)local_f0 * (float10)fVar12 -
                          fVar8 * fVar9 * (float10)local_d0) - fVar10 * (float10)fVar12) -
                        (float10)(local_f0 * local_f0) * fVar11)) * ((float10)1 / (float10)dVar4));
  local_70.y = (float)(((float10)fVar12 * fVar8 * fVar8 +
                       (((float10)local_f0 * fVar9 * (float10)local_c0 +
                        ((fVar10 * fVar11 + -(float10)local_e8 * fVar8 * fVar9) -
                        (float10)(double)(fVar8 * (float10)local_f0) * fVar11)) -
                       (float10)fVar12 * (float10)point_count * (float10)local_c0)) *
                      ((float10)1 / (float10)dVar4));
  pCVar13 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_98,&local_40,&local_70);
  *out_gradient = *pCVar13;
  fVar15 = (float10)local_e8;
  *out_offset = (float)(-((float10)fVar3 * (float10)local_d0 * (float10)local_c0 +
                         ((((float10)local_f0 * fVar15 * (float10)fVar7 +
                           ((float10)local_e0 * fVar15 * (float10)fVar12 -
                           (float10)local_e0 * (float10)fVar7 * (float10)local_d0)) -
                          (float10)local_f0 * (float10)fVar12 * (float10)local_c0) -
                         (float10)fVar3 * fVar15 * fVar15)) / (float10)dVar4);
  return;
}
