// Name: shape_superopt.cpp_CPoly_computeNormal_FUN_005cd7d0
// Address: 005cd7d0
// Address Range: [[005cd7d0, 005cdfdf]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_computeNormal_FUN_005cd7d0(CPoly *this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_computeNormal_FUN_005cd7d0(CPoly *this_ptr)

{
  CVert *pCVar1;
  CVert *pCVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  CVert *pCVar6;
  int iVar7;
  double *pdVar8;
  double *pdVar9;
  uint local_2f0;
  uint uStack_2ec;
  ulonglong local_2e8;
  ulonglong local_2d8;
  double local_2a8;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
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
  double local_1c8;
  double local_1c0;
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
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_b0;
  double local_a8;
  double local_a0;
  CVert *local_18;
  
  uStack_2ec = 0x3ff00000;
  local_2f0 = 0;
  pCVar6 = this_ptr->parent_obj->vertex_data;
  pCVar1 = pCVar6 + this_ptr->vertex_idx_0;
  pCVar2 = pCVar6 + this_ptr->vertex_idx_1;
  local_158 = (pCVar2->position).x - (pCVar1->position).x;
  local_150 = (pCVar2->position).y - (pCVar1->position).y;
  local_18 = pCVar6 + this_ptr->vertex_idx_2;
  local_148 = (pCVar2->position).z - (pCVar1->position).z;
  pdVar8 = &local_158;
  pdVar9 = &local_248;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(uint *)pdVar9 = *(uint *)pdVar8;
    pdVar8 = (double *)((int)pdVar8 + 4);
    pdVar9 = (double *)((int)pdVar9 + 4);
  }
  local_190 = 1.0 / SQRT(local_238 * local_238 + local_248 * local_248 + local_240 * local_240);
  local_1a0 = local_248 * local_190;
  local_198 = local_240 * local_190;
  local_190 = local_238 * local_190;
  local_278 = (local_18->position).x - (pCVar2->position).x;
  local_270 = (local_18->position).y - (pCVar2->position).y;
  local_268 = (local_18->position).z - (pCVar2->position).z;
  pdVar8 = &local_278;
  pdVar9 = &local_188;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(uint *)pdVar9 = *(uint *)pdVar8;
    pdVar8 = (double *)((int)pdVar8 + 4);
    pdVar9 = (double *)((int)pdVar9 + 4);
  }
  local_250 = 1.0 / SQRT(local_178 * local_178 + local_188 * local_188 + local_180 * local_180);
  local_260 = local_188 * local_250;
  local_258 = local_180 * local_250;
  local_250 = local_178 * local_250;
  local_2d8 = local_1a0 * local_260 + local_198 * local_258 + local_190 * local_250;
  if (local_2d8 < 0.0) {
    local_2d8 = -local_2d8;
  }
  if (local_2d8 < 1.0) {
    local_2f0 = (uint)local_2d8;
    uStack_2ec = local_2d8._4_4_;
    local_1e8 = local_198 * local_250 - local_190 * local_258;
    local_1e0 = local_190 * local_260 - local_1a0 * local_250;
    local_1d8 = local_1a0 * local_258 - local_198 * local_260;
    (this_ptr->normal).x = local_1e8;
    (this_ptr->normal).y = local_1e0;
    (this_ptr->normal).z = local_1d8;
  }
  local_110 = (local_18->position).x - (pCVar2->position).x;
  local_108 = (local_18->position).y - (pCVar2->position).y;
  local_100 = (local_18->position).z - (pCVar2->position).z;
  pdVar8 = &local_110;
  pdVar9 = &local_170;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(uint *)pdVar9 = *(uint *)pdVar8;
    pdVar8 = (double *)((int)pdVar8 + 4);
    pdVar9 = (double *)((int)pdVar9 + 4);
  }
  dVar3 = 1.0 / SQRT(local_160 * local_160 + local_170 * local_170 + local_168 * local_168);
  local_f8 = local_170 * dVar3;
  local_f0 = local_168 * dVar3;
  local_e8 = local_160 * dVar3;
  local_1d0 = (pCVar1->position).x - (local_18->position).x;
  local_1c8 = (pCVar1->position).y - (local_18->position).y;
  local_1c0 = (pCVar1->position).z - (local_18->position).z;
  pdVar8 = &local_1d0;
  pdVar9 = &local_200;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(uint *)pdVar9 = *(uint *)pdVar8;
    pdVar8 = (double *)((int)pdVar8 + 4);
    pdVar9 = (double *)((int)pdVar9 + 4);
  }
  local_118 = 1.0 / SQRT(local_1f0 * local_1f0 + local_200 * local_200 + local_1f8 * local_1f8);
  local_128 = local_200 * local_118;
  local_120 = local_1f8 * local_118;
  local_118 = local_1f0 * local_118;
  local_2e8 = local_f8 * local_128 + local_f0 * local_120 + local_e8 * local_118;
  if (local_2e8 < 0.0) {
    local_2e8 = -local_2e8;
  }
  if (local_2e8 < (double)CONCAT44(uStack_2ec,local_2f0)) {
    local_2f0 = (uint)local_2e8;
    uStack_2ec = local_2e8._4_4_;
    local_b0 = local_f0 * local_118 - local_e8 * local_120;
    local_a8 = local_e8 * local_128 - local_f8 * local_118;
    local_a0 = local_f8 * local_120 - local_f0 * local_128;
    (this_ptr->normal).x = local_b0;
    (this_ptr->normal).y = local_a8;
    (this_ptr->normal).z = local_a0;
  }
  local_140 = (pCVar1->position).x - (local_18->position).x;
  local_138 = (pCVar1->position).y - (local_18->position).y;
  local_130 = (pCVar1->position).z - (local_18->position).z;
  pdVar8 = &local_140;
  pdVar9 = &local_230;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(uint *)pdVar9 = *(uint *)pdVar8;
    pdVar8 = (double *)((int)pdVar8 + 4);
    pdVar9 = (double *)((int)pdVar9 + 4);
  }
  dVar3 = 1.0 / SQRT(local_220 * local_220 + local_230 * local_230 + local_228 * local_228);
  local_218 = local_230 * dVar3;
  local_210 = local_228 * dVar3;
  local_208 = local_220 * dVar3;
  local_e0 = (pCVar2->position).x - (pCVar1->position).x;
  local_d8 = (pCVar2->position).y - (pCVar1->position).y;
  local_d0 = (pCVar2->position).z - (pCVar1->position).z;
  pdVar8 = &local_e0;
  pdVar9 = &local_290;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(uint *)pdVar9 = *(uint *)pdVar8;
    pdVar8 = (double *)((int)pdVar8 + 4);
    pdVar9 = (double *)((int)pdVar9 + 4);
  }
  dVar5 = 1.0 / SQRT(local_280 * local_280 + local_290 * local_290 + local_288 * local_288);
  dVar3 = local_290 * dVar5;
  dVar4 = local_288 * dVar5;
  dVar5 = local_280 * dVar5;
  local_2a8 = local_218 * dVar3 + local_210 * dVar4 + local_208 * dVar5;
  if (local_2a8 < 0.0) {
    local_2a8 = -local_2a8;
  }
  if (local_2a8 < (double)CONCAT44(uStack_2ec,local_2f0)) {
    (this_ptr->normal).x = local_210 * dVar5 - local_208 * dVar4;
    (this_ptr->normal).y = local_208 * dVar3 - local_218 * dVar5;
    (this_ptr->normal).z = local_218 * dVar4 - local_210 * dVar3;
  }
  dVar3 = (this_ptr->normal).y;
  dVar4 = (this_ptr->normal).x;
  dVar5 = (this_ptr->normal).z;
  dVar3 = 1.0 / SQRT(dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3);
  (this_ptr->normal).x = (this_ptr->normal).x * dVar3;
  (this_ptr->normal).y = (this_ptr->normal).y * dVar3;
  (this_ptr->normal).z = (this_ptr->normal).z * dVar3;
  return;
}
