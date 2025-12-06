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
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  CVector3f *pCVar19;
  float *pfVar20;
  BADSPACEBASE *in_ESP;
  int iVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  uint local_c8;
  uint uStack_c4;
  uint local_c0;
  uint uStack_bc;
  uint local_b8;
  int local_a0;
  uint uStack_9c;
  CMatrix3x3f local_98;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
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
  fVar9 = normal->x;
  fVar10 = normal->y;
  local_70.z = normal->z;
  if ((local_2c < local_18) || (local_2c < local_1c)) {
    if ((local_18 < local_2c) || (local_18 < local_1c)) {
      local_70.z = -local_70.z;
      local_24 = local_70.z;
      local_70.x = local_70.z;
      local_70.y = fVar10;
      local_70.z = fVar9;
    }
    else {
      local_70.y = -fVar10;
      local_28 = local_70.y;
      local_70.x = local_70.y;
      local_70.y = fVar9;
    }
  }
  else {
    local_70.x = -fVar9;
    local_20 = local_70.x;
    local_70.y = local_70.x;
    local_70.x = fVar10;
  }
  local_58.x = normal->y * local_70.z - normal->z * local_70.y;
  local_58.y = normal->z * local_70.x - normal->x * local_70.z;
  local_58.z = normal->x * local_70.y - normal->y * local_70.x;
  if (&local_70 != &local_58) {
    local_70.x = local_58.x;
    local_70.y = local_58.y;
    local_70.z = local_58.z;
  }
  local_98.m[0].x = local_70.x;
  local_98.m[1].x = local_70.y;
  local_98.m[2].x = local_70.z;
  local_64.x = normal->y * local_70.z - normal->z * local_70.y;
  local_64.y = normal->z * local_70.x - normal->x * local_70.z;
  local_64.z = normal->x * local_70.y - normal->y * local_70.x;
  if (&local_70 != &local_64) {
    local_70.x = local_64.x;
    local_70.y = local_64.y;
    local_70.z = local_64.z;
  }
  iVar21 = 0;
  local_98.m[0].y = local_70.x;
  dVar11 = 0.0;
  dVar1 = 0.0;
  dVar12 = 0.0;
  dVar2 = 0.0;
  dVar13 = 0.0;
  dVar3 = 0.0;
  dVar14 = 0.0;
  dVar4 = 0.0;
  dVar15 = 0.0;
  dVar5 = 0.0;
  dVar16 = 0.0;
  dVar6 = 0.0;
  dVar17 = 0.0;
  dVar7 = 0.0;
  local_98.m[1].y = local_70.y;
  dVar18 = 0.0;
  dVar8 = 0.0;
  local_98.m[2].y = local_70.z;
  pfVar20 = values;
  if (0 < point_count) {
    do {
      pCVar19 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                          (&local_98,&local_4c,positions);
      if (&local_70 != pCVar19) {
        local_70.x = pCVar19->x;
        local_70.y = pCVar19->y;
        local_70.z = pCVar19->z;
      }
      dVar1 = (double)(local_70.x + (float)dVar11);
      positions = positions + 1;
      iVar21 = iVar21 + 1;
      dVar2 = (double)(local_70.y + (float)dVar12);
      dVar3 = (double)(*pfVar20 + (float)dVar13);
      dVar4 = (double)(local_70.x * local_70.x + (float)dVar14);
      dVar5 = (double)(local_70.y * local_70.y + (float)dVar15);
      dVar6 = (double)(local_70.x * local_70.y + (float)dVar16);
      dVar7 = (double)(*pfVar20 * local_70.x + (float)dVar17);
      dVar8 = (double)(*pfVar20 * local_70.y + (float)dVar18);
      pfVar20 = pfVar20 + 1;
      dVar11 = dVar1;
      dVar12 = dVar2;
      dVar13 = dVar3;
      dVar14 = dVar4;
      dVar15 = dVar5;
      dVar16 = dVar6;
      dVar17 = dVar7;
      dVar18 = dVar8;
    } while (iVar21 < point_count);
  }
  uStack_f4 = (uint)((ulonglong)dVar8 >> 0x20);
  uStack_c4 = (uint)((ulonglong)dVar7 >> 0x20);
  local_c8 = SUB84 /* extract 2-byte value */(dVar7,0);
  uStack_e4 = (uint)((ulonglong)dVar6 >> 0x20);
  local_e8 = SUB84 /* extract 2-byte value */(dVar6,0);
  uStack_cc = (uint)((ulonglong)dVar5 >> 0x20);
  local_d0 = SUB84 /* extract 2-byte value */(dVar5,0);
  uStack_bc = (uint)((ulonglong)dVar4 >> 0x20);
  local_c0 = SUB84 /* extract 2-byte value */(dVar4,0);
  uStack_d4 = (uint)((ulonglong)dVar3 >> 0x20);
  local_d8 = SUB84 /* extract 2-byte value */(dVar3,0);
  uStack_ec = (uint)((ulonglong)dVar2 >> 0x20);
  local_f0 = SUB84 /* extract 2-byte value */(dVar2,0);
  uStack_dc = (uint)((ulonglong)dVar1 >> 0x20);
  local_e0 = SUB84 /* extract 2-byte value */(dVar1,0);
  local_14 = point_count;
  local_b8 = SUB84 /* extract 2-byte value */((double)point_count,0);
  dVar11 = dVar2 * dVar2 * dVar4 +
           dVar5 * dVar1 * dVar1 +
           (((double)point_count * dVar6 * dVar6 - dVar6 * 2 * dVar1 * dVar2) -
           dVar5 * (double)point_count * dVar4);
  local_a0 = SUB84 /* extract 2-byte value */(dVar11,0);
  uStack_9c = (uint)((ulonglong)dVar11 >> 0x20);
  if ((((ulonglong)dVar11 & 0x7fffffff00000000) == 0) && (local_a0 == 0)) {
    out_gradient->z = 0.0;
    out_gradient->y = out_gradient->z;
    out_gradient->x = out_gradient->y;
    iVar21 = 0;
    *out_offset = 0.0;
    if (0 < point_count) {
      do {
        fVar9 = *values;
        values = values + 1;
        iVar21 = iVar21 + 1;
        *out_offset = fVar9 + *out_offset;
      } while (iVar21 < point_count);
    }
    *out_offset = *out_offset / (float)point_count;
    return;
  }
  fVar22 = (float10)dVar1;
  local_34 = (double)(fVar22 * (float10)dVar2);
  fVar23 = (float10)dVar3;
  fVar24 = (float10)((double)point_count * dVar6);
  fVar25 = (float10)dVar7;
  local_70.z = 0.0;
  local_70.x = (float)(-((float10)dVar2 * (float10)dVar6 * fVar23 +
                        fVar25 * (float10)point_count * (float10)dVar5 +
                        (((fVar22 * (float10)dVar2 * (float10)dVar8 -
                          fVar22 * fVar23 * (float10)dVar5) - fVar24 * (float10)dVar8) -
                        (float10)(dVar2 * dVar2) * fVar25)) * ((float10)1 / (float10)dVar11));
  local_70.y = (float)(((float10)dVar8 * fVar22 * fVar22 +
                       (((float10)dVar2 * fVar23 * (float10)dVar4 +
                        ((fVar24 * fVar25 + -(float10)dVar6 * fVar22 * fVar23) -
                        (float10)local_34 * fVar25)) -
                       (float10)dVar8 * (float10)point_count * (float10)dVar4)) *
                      ((float10)1 / (float10)dVar11));
  pCVar19 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_98,&local_40,&local_70);
  if (pCVar19 != out_gradient) {
    out_gradient->x = pCVar19->x;
    out_gradient->y = pCVar19->y;
    out_gradient->z = pCVar19->z;
  }
  fVar22 = (float10)(double)CONCAT44 /* combine 2-byte values */(local_e0,uStack_e4);
  *out_offset = (float)(-((float10)(double)CONCAT44 /* combine 2-byte values */(local_d0,uStack_d4) *
                          (float10)(double)CONCAT44 /* combine 2-byte values */(local_c8,uStack_cc) *
                          (float10)(double)CONCAT44 /* combine 2-byte values */(local_b8,uStack_bc) +
                         ((((float10)(double)CONCAT44 /* combine 2-byte values */(local_e8,uStack_ec) * fVar22 *
                            (float10)(double)CONCAT44 /* combine 2-byte values */(local_c0,uStack_c4) +
                           ((float10)(double)CONCAT44 /* combine 2-byte values */(local_d8,uStack_dc) * fVar22 *
                            (float10)(double)CONCAT44 /* combine 2-byte values */(local_f0,uStack_f4) -
                           (float10)(double)CONCAT44 /* combine 2-byte values */(local_d8,uStack_dc) *
                           (float10)(double)CONCAT44 /* combine 2-byte values */(local_c0,uStack_c4) *
                           (float10)(double)CONCAT44 /* combine 2-byte values */(local_c8,uStack_cc))) -
                          (float10)(double)CONCAT44 /* combine 2-byte values */(local_e8,uStack_ec) *
                          (float10)(double)CONCAT44 /* combine 2-byte values */(local_f0,uStack_f4) *
                          (float10)(double)CONCAT44 /* combine 2-byte values */(local_b8,uStack_bc)) -
                         (float10)(double)CONCAT44 /* combine 2-byte values */(local_d0,uStack_d4) * fVar22 * fVar22)) /
                       (float10)(double)CONCAT44 /* combine 2-byte values */(local_98.m[0].x,uStack_9c));
  return;
}
