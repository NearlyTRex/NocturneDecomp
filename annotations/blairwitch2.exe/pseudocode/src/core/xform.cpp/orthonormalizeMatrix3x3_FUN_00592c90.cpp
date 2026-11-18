// Name: core_xform.cpp_orthonormalizeMatrix3x3_FUN_00592c90
// Address: 00592c90
// Address Range: [[00592c90, 005931d0]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_orthonormalizeMatrix3x3_FUN_00592c90(CMatrix3x3f *matrix,int preserve_scale)

#include "nocturne.h"

void __cdecl core_xform_cpp_orthonormalizeMatrix3x3_FUN_00592c90(CMatrix3x3f *matrix,int preserve_scale)

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
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int iVar16;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  
  fVar1 = matrix->m[0].x;
  fVar2 = matrix->m[0].y;
  fVar3 = matrix->m[0].z;
  fVar4 = matrix->m[1].y;
  fVar5 = matrix->m[1].z;
  fVar6 = matrix->m[2].x;
  fVar7 = matrix->m[2].z;
  fVar8 = matrix[1].m[0].x;
  fVar9 = matrix[1].m[0].y;
  dStack_b0 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  dStack_80 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  dStack_88 = (double)SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7);
  if (dStack_b0 <= 0.0) {
    dStack_b0 = 1.0;
  }
  if (dStack_80 <= 0.0) {
    dStack_80 = 1.0;
  }
  if (dStack_88 <= 0.0) {
    dStack_88 = 1.0;
  }
  dStack_e8 = 1.0 / dStack_b0;
  dStack_c8 = 1.0 / dStack_80;
  dStack_f0 = (double)fVar1 * dStack_e8;
  dStack_90 = (double)fVar2 * dStack_e8;
  dStack_e8 = (double)fVar3 * dStack_e8;
  dStack_b8 = (double)fVar4 * dStack_c8;
  dStack_e0 = (double)fVar5 * dStack_c8;
  dStack_c8 = (double)fVar6 * dStack_c8;
  dStack_d0 = 1.0 / dStack_88;
  dStack_c0 = (double)fVar7 * dStack_d0;
  dStack_d8 = (double)fVar8 * dStack_d0;
  dStack_d0 = (double)fVar9 * dStack_d0;
  iVar16 = 0;
  do {
    dVar10 = dStack_f0 * 0.5 + (dStack_e0 * dStack_d0 - dStack_c8 * dStack_d8);
    dVar15 = dStack_90 * 0.5 + (dStack_c8 * dStack_c0 - dStack_b8 * dStack_d0);
    dVar11 = dStack_e8 * 0.5 + (dStack_b8 * dStack_d8 - dStack_c0 * dStack_e0);
    dVar14 = dStack_b8 * 0.5 + (dStack_d8 * dStack_e8 - dStack_d0 * dStack_90);
    dVar13 = dStack_e0 * 0.5 + (dStack_d0 * dStack_f0 - dStack_c0 * dStack_e8);
    dVar12 = dStack_c8 * 0.5 + (dStack_c0 * dStack_90 - dStack_d8 * dStack_f0);
    dStack_c0 = dStack_c0 * 0.5 + (dStack_90 * dStack_c8 - dStack_e8 * dStack_e0);
    dStack_d8 = dStack_d8 * 0.5 + (dStack_e8 * dStack_b8 - dStack_f0 * dStack_c8);
    dStack_d0 = dStack_d0 * 0.5 + (dStack_f0 * dStack_e0 - dStack_90 * dStack_b8);
    dStack_c8 = 1.0 / SQRT(dVar12 * dVar12 + dVar13 * dVar13 + dVar14 * dVar14);
    dStack_e8 = 1.0 / SQRT(dVar11 * dVar11 + dVar15 * dVar15 + dVar10 * dVar10);
    dStack_f0 = dVar10 * dStack_e8;
    dStack_90 = dVar15 * dStack_e8;
    dStack_e8 = dVar11 * dStack_e8;
    dStack_b8 = dVar14 * dStack_c8;
    dStack_e0 = dVar13 * dStack_c8;
    dStack_c8 = dVar12 * dStack_c8;
    dVar10 = 1.0 / SQRT(dStack_d0 * dStack_d0 + dStack_d8 * dStack_d8 + dStack_c0 * dStack_c0);
    dStack_c0 = dStack_c0 * dVar10;
    dStack_d8 = dStack_d8 * dVar10;
    dStack_d0 = dStack_d0 * dVar10;
    iVar16 = iVar16 + 1;
  } while (iVar16 < 10);
  dStack_a8 = dStack_e0 * dStack_d0 - dStack_c8 * dStack_d8;
  dStack_a0 = dStack_c8 * dStack_c0 - dStack_b8 * dStack_d0;
  dStack_98 = dStack_b8 * dStack_d8 - dStack_c0 * dStack_e0;
  if (preserve_scale != 0) {
    dStack_a8 = dStack_a8 * dStack_b0;
    dStack_a0 = dStack_a0 * dStack_b0;
    dStack_98 = dStack_98 * dStack_b0;
    dStack_b8 = dStack_b8 * dStack_80;
    dStack_e0 = dStack_e0 * dStack_80;
    dStack_c8 = dStack_c8 * dStack_80;
    dStack_c0 = dStack_c0 * dStack_88;
    dStack_d8 = dStack_d8 * dStack_88;
    dStack_d0 = dStack_d0 * dStack_88;
  }
  matrix->m[0].y = (float)dStack_a0;
  matrix->m[0].z = (float)dStack_98;
  matrix->m[1].y = (float)dStack_b8;
  matrix->m[1].z = (float)dStack_e0;
  matrix->m[2].x = (float)dStack_c8;
  matrix->m[2].z = (float)dStack_c0;
  matrix[1].m[0].x = (float)dStack_d8;
  matrix[1].m[0].y = (float)dStack_d0;
  matrix->m[0].x = (float)dStack_a8;
  return;
}
