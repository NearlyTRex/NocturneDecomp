// Name: shape_superopt.cpp_CPoly_computeNormal_FUN_005cd7d0
// Address: 005cd7d0
// MANUAL RECONSTRUCTION
// Address Range: [[005cd7d0, 005cdfdf] [03fc206d, 03fc20a7]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_computeNormal_FUN_005cd7d0(CPoly *this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_computeNormal_FUN_005cd7d0(CPoly *this_ptr)

{
  double dVar1;
  double dVar2;
  double dVar6;
  int iVar8;
  double *pdVar10;
  double *pdVar8;
  double *pdVar11;
  double *pdVar9;
  double min_dot;
  double local_2e8;
  double local_2d8;
  double local_2a8;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_260;
  double local_258;
  double local_250;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_b0;
  double local_a8;
  double local_a0;
  CVert *local_18;
  double dVar5;
  CVert *pCVar6;
  double dVar3;
  double dVar4;
  CVert *pCVar1;
  CVert *pCVar2;
  double local_270;
  double local_268;
  double local_248;
  double local_240;
  double local_238;
  double local_1c8;
  double local_1c0;
  double local_138;
  double local_130;
  double local_108;
  double local_100;
  double local_d8;
  double local_d0;
  
  min_dot = 1.0;
  pCVar6 = this_ptr->parent_obj->vertex_data;
  pCVar1 = pCVar6 + this_ptr->vertex_idx_0;
  pCVar2 = pCVar6 + this_ptr->vertex_idx_1;
  local_158 = (pCVar2->position).x - (pCVar1->position).x;
  local_150 = (pCVar2->position).y - (pCVar1->position).y;
  local_148 = (pCVar2->position).z - (pCVar1->position).z;
  local_18 = pCVar6 + this_ptr->vertex_idx_2;
  local_248 = local_158;
  local_240 = local_150;
  local_238 = local_148;
  dVar1 = 1.0 / SQRT(local_148 * local_148 + local_158 * local_158 + local_150 * local_150);
  local_1a0 = local_158 * dVar1;
  local_198 = local_150 * dVar1;
  local_190 = local_148 * dVar1;
  local_278 = (local_18->position).x - (pCVar2->position).x;
  local_270 = (local_18->position).y - (pCVar2->position).y;
  local_268 = (local_18->position).z - (pCVar2->position).z;
  pdVar10 = &local_278;
  pdVar11 = &local_188;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(uint *)pdVar11 = *(uint *)pdVar10;
    pdVar10 = (double *)((int)pdVar10 + 4);
    pdVar11 = (double *)((int)pdVar11 + 4);
  }
  dVar1 = 1.0 / SQRT(local_178 * local_178 + local_188 * local_188 + local_180 * local_180);
  local_260 = local_188 * dVar1;
  local_258 = local_180 * dVar1;
  local_250 = local_178 * dVar1;
  local_2d8 = local_1a0 * local_260 + local_198 * local_258 + local_190 * local_250;
  if (local_2d8 < 0.0) {
    local_2d8 = -local_2d8;
  }
  if (local_2d8 < 1.0) {
    min_dot = local_2d8;
    local_1e8 = local_198 * local_250 - local_190 * local_258;
    local_1e0 = local_190 * local_260 - local_1a0 * local_250;
    local_1d8 = local_1a0 * local_258 - local_198 * local_260;
    (this_ptr->normal).impl.x = local_1e8;
    (this_ptr->normal).impl.y = local_1e0;
    (this_ptr->normal).impl.z = local_1d8;
  }
  local_110 = (local_18->position).x - (pCVar2->position).x;
  local_108 = (local_18->position).y - (pCVar2->position).y;
  local_100 = (local_18->position).z - (pCVar2->position).z;
  pdVar10 = &local_110;
  pdVar11 = &local_170;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(uint *)pdVar11 = *(uint *)pdVar10;
    pdVar10 = (double *)((int)pdVar10 + 4);
    pdVar11 = (double *)((int)pdVar11 + 4);
  }
  dVar1 = 1.0 / SQRT(local_160 * local_160 + local_170 * local_170 + local_168 * local_168);
  local_f8 = local_170 * dVar1;
  local_f0 = local_168 * dVar1;
  local_e8 = local_160 * dVar1;
  local_1d0 = (pCVar1->position).x - (local_18->position).x;
  local_1c8 = (pCVar1->position).y - (local_18->position).y;
  local_1c0 = (pCVar1->position).z - (local_18->position).z;
  pdVar10 = &local_1d0;
  pdVar11 = &local_200;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(uint *)pdVar11 = *(uint *)pdVar10;
    pdVar10 = (double *)((int)pdVar10 + 4);
    pdVar11 = (double *)((int)pdVar11 + 4);
  }
  dVar1 = 1.0 / SQRT(local_1f0 * local_1f0 + local_200 * local_200 + local_1f8 * local_1f8);
  local_128 = local_200 * dVar1;
  local_120 = local_1f8 * dVar1;
  local_118 = local_1f0 * dVar1;
  local_2e8 = local_f8 * local_128 + local_f0 * local_120 + local_e8 * local_118;
  if (local_2e8 < 0.0) {
    local_2e8 = -local_2e8;
  }
  if (local_2e8 < min_dot) {
    min_dot = local_2e8;
    local_b0 = local_f0 * local_118 - local_e8 * local_120;
    local_a8 = local_e8 * local_128 - local_f8 * local_118;
    local_a0 = local_f8 * local_120 - local_f0 * local_128;
    (this_ptr->normal).impl.x = local_b0;
    (this_ptr->normal).impl.y = local_a8;
    (this_ptr->normal).impl.z = local_a0;
  }
  local_140 = (pCVar1->position).x - (local_18->position).x;
  local_138 = (pCVar1->position).y - (local_18->position).y;
  local_130 = (pCVar1->position).z - (local_18->position).z;
  pdVar10 = &local_140;
  pdVar11 = &local_230;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(uint *)pdVar11 = *(uint *)pdVar10;
    pdVar10 = (double *)((int)pdVar10 + 4);
    pdVar11 = (double *)((int)pdVar11 + 4);
  }
  dVar1 = 1.0 / SQRT(local_220 * local_220 + local_230 * local_230 + local_228 * local_228);
  local_218 = local_230 * dVar1;
  local_210 = local_228 * dVar1;
  local_208 = local_220 * dVar1;
  local_e0 = (pCVar2->position).x - (pCVar1->position).x;
  local_d8 = (pCVar2->position).y - (pCVar1->position).y;
  local_d0 = (pCVar2->position).z - (pCVar1->position).z;
  pdVar8 = &local_e0;
  pdVar9 = &local_290;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(uint *)pdVar9 = *(uint *)pdVar8;
    pdVar8 = (double *)((int)pdVar8 + 4);
    pdVar9 = (double *)((int)pdVar9 + 4);
  }
  dVar6 = 1.0 / SQRT(local_280 * local_280 + local_290 * local_290 + local_288 * local_288);
  dVar1 = local_290 * dVar6;
  dVar2 = local_288 * dVar6;
  dVar6 = local_280 * dVar6;
  local_2a8 = local_218 * dVar1 + local_210 * dVar2 + local_208 * dVar6;
  if (local_2a8 < 0.0) {
    local_2a8 = -local_2a8;
  }
  if (local_2a8 < min_dot) {
    (this_ptr->normal).impl.x = local_210 * dVar6 - local_208 * dVar2;
    (this_ptr->normal).impl.y = local_208 * dVar1 - local_218 * dVar6;
    (this_ptr->normal).impl.z = local_218 * dVar2 - local_210 * dVar1;
  }
  dVar3 = (this_ptr->normal).impl.y;
  dVar4 = (this_ptr->normal).impl.x;
  dVar5 = (this_ptr->normal).impl.z;
  dVar6 = 1.0 / SQRT(dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3);
  dVar1 = (this_ptr->normal).impl.y;
  dVar2 = (this_ptr->normal).impl.z;
  (this_ptr->normal).impl.x = (this_ptr->normal).impl.x * dVar6;
  (this_ptr->normal).impl.y = dVar1 * dVar6;
  (this_ptr->normal).impl.z = dVar2 * dVar6;
  return;
}
