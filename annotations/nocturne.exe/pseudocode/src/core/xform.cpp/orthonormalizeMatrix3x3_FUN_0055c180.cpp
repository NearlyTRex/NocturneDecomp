// Name: core_xform.cpp_orthonormalizeMatrix3x3_FUN_0055c180
// Address: 0055c180
// Address Range: [[0055c180, 0055c6c0]]
// Convention: unknown
// Signature: void core_xform_cpp_orthonormalizeMatrix3x3_FUN_0055c180(float *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_xform_cpp_orthonormalizeMatrix3x3_FUN_0055c180(float *param_1,int param_2)

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
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[4];
  fVar5 = param_1[5];
  fVar6 = param_1[6];
  fVar7 = param_1[8];
  fVar8 = param_1[9];
  fVar9 = param_1[10];
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
  local_e8 = 1.0 / local_b0;
  local_c8 = 1.0 / local_80;
  local_f0 = (double)fVar1 * local_e8;
  local_90 = (double)fVar2 * local_e8;
  local_e8 = (double)fVar3 * local_e8;
  local_b8 = (double)fVar4 * local_c8;
  local_e0 = (double)fVar5 * local_c8;
  local_c8 = (double)fVar6 * local_c8;
  local_d0 = 1.0 / local_88;
  local_c0 = (double)fVar7 * local_d0;
  local_d8 = (double)fVar8 * local_d0;
  local_d0 = (double)fVar9 * local_d0;
  iVar16 = 0;
  do {
    dVar10 = local_f0 * _DAT_0059832e + (local_e0 * local_d0 - local_c8 * local_d8);
    dVar15 = local_90 * _DAT_0059832e + (local_c8 * local_c0 - local_b8 * local_d0);
    dVar11 = local_e8 * _DAT_0059832e + (local_b8 * local_d8 - local_c0 * local_e0);
    dVar14 = local_b8 * _DAT_0059832e + (local_d8 * local_e8 - local_d0 * local_90);
    dVar13 = local_e0 * _DAT_0059832e + (local_d0 * local_f0 - local_c0 * local_e8);
    dVar12 = local_c8 * _DAT_0059832e + (local_c0 * local_90 - local_d8 * local_f0);
    local_c0 = local_c0 * _DAT_0059832e + (local_90 * local_c8 - local_e8 * local_e0);
    local_d8 = local_d8 * _DAT_0059832e + (local_e8 * local_b8 - local_f0 * local_c8);
    local_d0 = local_d0 * _DAT_0059832e + (local_f0 * local_e0 - local_90 * local_b8);
    local_c8 = 1.0 / SQRT(dVar12 * dVar12 + dVar13 * dVar13 + dVar14 * dVar14);
    local_e8 = 1.0 / SQRT(dVar11 * dVar11 + dVar15 * dVar15 + dVar10 * dVar10);
    local_f0 = dVar10 * local_e8;
    local_90 = dVar15 * local_e8;
    local_e8 = dVar11 * local_e8;
    local_b8 = dVar14 * local_c8;
    local_e0 = dVar13 * local_c8;
    local_c8 = dVar12 * local_c8;
    dVar10 = 1.0 / SQRT(local_d0 * local_d0 + local_d8 * local_d8 + local_c0 * local_c0);
    local_c0 = local_c0 * dVar10;
    local_d8 = local_d8 * dVar10;
    local_d0 = local_d0 * dVar10;
    iVar16 = iVar16 + 1;
  } while (iVar16 < 10);
  local_a8 = local_e0 * local_d0 - local_c8 * local_d8;
  local_a0 = local_c8 * local_c0 - local_b8 * local_d0;
  local_98 = local_b8 * local_d8 - local_c0 * local_e0;
  if (param_2 != 0) {
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
  param_1[1] = (float)local_a0;
  param_1[2] = (float)local_98;
  param_1[4] = (float)local_b8;
  param_1[5] = (float)local_e0;
  param_1[6] = (float)local_c8;
  param_1[8] = (float)local_c0;
  param_1[9] = (float)local_d8;
  param_1[10] = (float)local_d0;
  *param_1 = (float)local_a8;
  return;
}
