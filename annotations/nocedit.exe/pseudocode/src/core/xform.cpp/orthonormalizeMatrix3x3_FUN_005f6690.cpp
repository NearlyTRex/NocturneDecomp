// Name: core_xform.cpp_orthonormalizeMatrix3x3_FUN_005f6690
// Address: 005f6690
// Address Range: [[005f6690, 005f6bd0]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_orthonormalizeMatrix3x3_FUN_005f6690(CMatrix3x3f *matrix,int preserve_scale)

#include "nocturne.h"

void __cdecl core_xform_cpp_orthonormalizeMatrix3x3_FUN_005f6690(CMatrix3x3f *matrix,int preserve_scale)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar16;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  float fVar6;
  float fVar5;
  double dVar15;
  float fVar8;
  float fVar7;
  double dVar10;
  float fVar9;
  float fVar2;
  float fVar1;
  float fVar4;
  float fVar3;
  double dVar12;
  double dVar11;
  double dVar14;
  double dVar13;
  
  fVar1 = matrix->m[0].x;
  fVar2 = matrix->m[0].y;
  fVar3 = matrix->m[0].z;
  fVar4 = matrix->m[1].y;
  fVar5 = matrix->m[1].z;
  fVar6 = matrix->m[2].x;
  fVar7 = matrix->m[2].z;
  fVar8 = matrix[1].m[0].x;
  fVar9 = matrix[1].m[0].y;
  local_b0 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  local_80 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  local_88 = (double)SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7);
  if (local_b0 <= 0.0) {
    local_b0 = 1.0;
  }
  if (local_80 <= 0.0) {
    local_80 = 1.0;
  }
  if (local_88 <= 0.0) {
    local_88 = 1.0;
  }
  dVar1 = 1.0 / local_b0;
  dVar2 = 1.0 / local_80;
  local_f0 = (double)fVar1 * dVar1;
  local_90 = (double)fVar2 * dVar1;
  local_e8 = (double)fVar3 * dVar1;
  local_b8 = (double)fVar4 * dVar2;
  local_e0 = (double)fVar5 * dVar2;
  local_c8 = (double)fVar6 * dVar2;
  dVar1 = 1.0 / local_88;
  local_c0 = (double)fVar7 * dVar1;
  local_d8 = (double)fVar8 * dVar1;
  local_d0 = (double)fVar9 * dVar1;
  iVar16 = 0;
  do {
    dVar1 = local_f0 * 0.5 + (local_e0 * local_d0 - local_c8 * local_d8);
    dVar15 = local_90 * 0.5 + (local_c8 * local_c0 - local_b8 * local_d0);
    dVar11 = local_e8 * 0.5 + (local_b8 * local_d8 - local_c0 * local_e0);
    dVar14 = local_b8 * 0.5 + (local_d8 * local_e8 - local_d0 * local_90);
    dVar13 = local_e0 * 0.5 + (local_d0 * local_f0 - local_c0 * local_e8);
    dVar12 = local_c8 * 0.5 + (local_c0 * local_90 - local_d8 * local_f0);
    dVar5 = local_c0 * 0.5 + (local_90 * local_c8 - local_e8 * local_e0);
    dVar4 = local_d8 * 0.5 + (local_e8 * local_b8 - local_f0 * local_c8);
    dVar3 = local_d0 * 0.5 + (local_f0 * local_e0 - local_90 * local_b8);
    dVar6 = 1.0 / SQRT(dVar12 * dVar12 + dVar13 * dVar13 + dVar14 * dVar14);
    dVar2 = 1.0 / SQRT(dVar11 * dVar11 + dVar15 * dVar15 + dVar1 * dVar1);
    local_f0 = dVar1 * dVar2;
    local_90 = dVar15 * dVar2;
    local_e8 = dVar11 * dVar2;
    local_b8 = dVar14 * dVar6;
    local_e0 = dVar13 * dVar6;
    local_c8 = dVar12 * dVar6;
    dVar10 = 1.0 / SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar5 * dVar5);
    local_c0 = dVar5 * dVar10;
    local_d8 = dVar4 * dVar10;
    local_d0 = dVar3 * dVar10;
    iVar16 = iVar16 + 1;
  } while (iVar16 < 10);
  local_a8 = local_e0 * local_d0 - local_c8 * local_d8;
  local_a0 = local_c8 * local_c0 - local_b8 * local_d0;
  local_98 = local_b8 * local_d8 - local_c0 * local_e0;
  if (preserve_scale != 0) {
    local_a8 = local_a8 * local_b0;
    local_a0 = local_a0 * local_b0;
    local_98 = local_98 * local_b0;
    local_b8 = local_b8 * local_80;
    local_e0 = local_e0 * local_80;
    local_c8 = local_c8 * local_80;
    local_c0 = local_c0 * local_88;
    local_d8 = local_d8 * local_88;
    local_d0 = local_d0 * local_88;
  }
  matrix->m[0].y = (float)local_a0;
  matrix->m[0].z = (float)local_98;
  matrix->m[1].y = (float)local_b8;
  matrix->m[1].z = (float)local_e0;
  matrix->m[2].x = (float)local_c8;
  matrix->m[2].z = (float)local_c0;
  matrix[1].m[0].x = (float)local_d8;
  matrix[1].m[0].y = (float)local_d0;
  matrix->m[0].x = (float)local_a8;
  return;
}
