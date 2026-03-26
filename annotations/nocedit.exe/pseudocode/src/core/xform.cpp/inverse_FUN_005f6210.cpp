// Name: core_xform.cpp_inverse_FUN_005f6210
// Address: 005f6210
// Address Range: [[005f6210, 005f6458] [03fc3ac5, 03fc3b27]]
// Convention: __stack_esi
// Signature: CMatrix3x4f * __stack_esi core_xform_cpp_inverse_FUN_005f6210(CMatrix3x4f *matrix_in,CMatrix3x4f *matrix_out)

#include "nocturne.h"

CMatrix3x4f * __stack_esi core_xform_cpp_inverse_FUN_005f6210(CMatrix3x4f *matrix_in,CMatrix3x4f *matrix_out)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar1;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  double dVar5;
  int local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  CMatrix3x4f *local_10;
  
  dVar5 = core_xform_cpp_determinant_FUN_005f61c0(matrix_in);
  local_98 = SUB84(__BITCAST_UINT64(dVar5),0);
  if ((((ulonglong)dVar5 & 0x7fffffff00000000) == 0) && (local_98 == 0)) {
    g_CurrentFilename = "..\\core\\xform.cpp";
    g_CurrentLineNumber = 0x23e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("inverse() - Singular matrix");
  }
  dVar10 = 1.0 / dVar5;
  fVar13 = (matrix_in->m[1].x * matrix_in->m[2].y - matrix_in->m[1].y * matrix_in->m[2].x) *
           (float)dVar10;
  fVar14 = -(matrix_in->m[0].x * matrix_in->m[2].y - matrix_in->m[0].y * matrix_in->m[2].x) *
           (float)dVar10;
  fVar11 = (matrix_in->m[0].x * matrix_in->m[1].y - matrix_in->m[0].y * matrix_in->m[1].x) *
           (float)dVar10;
  fVar15 = -(matrix_in->m[1].w * matrix_in->m[2].y - matrix_in->m[1].y * matrix_in->m[2].w) *
           (float)dVar10;
  fVar16 = (matrix_in->m[0].w * matrix_in->m[2].y - matrix_in->m[0].y * matrix_in->m[2].w) *
           (float)dVar10;
  fVar12 = -(matrix_in->m[0].w * matrix_in->m[1].y - matrix_in->m[0].y * matrix_in->m[1].w) *
           (float)dVar10;
  fVar17 = (matrix_in->m[1].w * matrix_in->m[2].x - matrix_in->m[1].x * matrix_in->m[2].w) *
           (float)dVar10;
  fVar18 = -(matrix_in->m[0].w * matrix_in->m[2].x - matrix_in->m[0].x * matrix_in->m[2].w) *
           (float)dVar10;
  fVar19 = (matrix_in->m[0].w * matrix_in->m[1].x - matrix_in->m[0].x * matrix_in->m[1].w) *
           (float)dVar10;
  fVar1 = matrix_in->m[1].z;
  fVar2 = matrix_in->m[0].z;
  fVar3 = matrix_in->m[0].z;
  fVar4 = matrix_in->m[0].z;
  fVar5 = matrix_in->m[1].z;
  fVar6 = matrix_in->m[1].z;
  fVar7 = matrix_in->m[2].z;
  fVar8 = matrix_in->m[2].z;
  fVar9 = matrix_in->m[2].z;
  matrix_out->m[0].w = fVar13;
  matrix_out->m[0].x = fVar14;
  matrix_out->m[0].y = fVar11;
  matrix_out->m[0].z = -(fVar7 * fVar11 + fVar4 * fVar13 + fVar1 * fVar14);
  matrix_out->m[1].w = fVar15;
  matrix_out->m[1].x = fVar16;
  matrix_out->m[1].y = fVar12;
  matrix_out->m[1].z = -(fVar8 * fVar12 + fVar5 * fVar16 + fVar2 * fVar15);
  matrix_out->m[2].w = fVar17;
  matrix_out->m[2].x = fVar18;
  matrix_out->m[2].y = fVar19;
  matrix_out->m[2].z = -(fVar9 * fVar19 + fVar6 * fVar18 + fVar3 * fVar17);
  return matrix_out;
}
