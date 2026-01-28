// Name: shape_superopt.cpp_CPoly_scale_FUN_005cc7c0
// Address: 005cc7c0
// Address Range: [[005cc7c0, 005ccc2e]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_scale_FUN_005cc7c0(CPoly *this_ptr,CVector3d *scale,CVector3d *pivot)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CPoly_scale_FUN_005cc7c0(CPoly *this_ptr,CVector3d *scale,CVector3d *pivot)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  CVert *pCVar5;
  double *pdVar6;
  double *pdVar7;
  uint *puVar8;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  uint local_1c8 [4];
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  uint uStack_1ac;
  uint local_1a8;
  uint uStack_1a4;
  uint local_1a0;
  uint uStack_19c;
  double local_198;
  double local_190;
  double local_188;
  uint local_180;
  uint uStack_17c;
  uint local_178;
  uint uStack_174;
  uint local_170;
  uint uStack_16c;
  double local_168;
  double local_160;
  double local_158;
  uint local_150 [4];
  uint local_140;
  uint local_13c;
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
  double local_c8;
  uint local_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint local_b0;
  uint uStack_ac;
  double local_a8;
  double local_a0;
  double local_98;
  uint local_90 [4];
  uint local_80;
  uint local_7c;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  CVert *local_18;
  
  local_18 = this_ptr->parent_obj->vertex_data;
  local_c0 = *(uint *)&scale->x;
  uStack_bc = *(uint *)((int)&scale->x + 4);
  local_b8 = *(uint *)&scale->y;
  uStack_b4 = *(uint *)((int)&scale->y + 4);
  local_b0 = *(uint *)&scale->z;
  uStack_ac = *(uint *)((int)&scale->z + 4);
  pCVar5 = local_18 + this_ptr->vertex_idx_0;
  local_108 = (pCVar5->position).x - pivot->x;
  local_100 = (pCVar5->position).y - pivot->y;
  local_f8 = (pCVar5->position).z - pivot->z;
  pdVar6 = &local_108;
  pdVar7 = &local_210;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pdVar7 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar7 = (double *)((int)pdVar7 + 4);
  }
  local_60 = local_210 * (double)CONCAT44(uStack_bc,local_c0);
  local_58 = local_208 * (double)CONCAT44(uStack_b4,local_b8);
  local_50 = local_200 * (double)CONCAT44(uStack_ac,local_b0);
  pdVar6 = &local_60;
  pdVar7 = &local_a8;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pdVar7 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar7 = (double *)((int)pdVar7 + 4);
  }
  local_f0 = local_a8 + pivot->x;
  local_e8 = local_a0 + pivot->y;
  local_e0 = local_98 + pivot->z;
  pdVar6 = &local_f0;
  puVar8 = local_90;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    puVar8 = puVar8 + 1;
  }
  *(uint *)&(pCVar5->position).x = local_90[0];
  *(uint *)((int)&(pCVar5->position).x + 4) = local_90[1];
  *(uint *)&(pCVar5->position).y = local_90[2];
  *(uint *)((int)&(pCVar5->position).y + 4) = local_90[3];
  *(uint *)&(pCVar5->position).z = local_80;
  *(uint *)((int)&(pCVar5->position).z + 4) = local_7c;
  local_180 = *(uint *)&scale->x;
  dVar1 = scale->x;
  uStack_17c = *(uint *)((int)&scale->x + 4);
  local_178 = *(uint *)&scale->y;
  dVar2 = scale->y;
  uStack_174 = *(uint *)((int)&scale->y + 4);
  local_170 = *(uint *)&scale->z;
  dVar3 = scale->z;
  uStack_16c = *(uint *)((int)&scale->z + 4);
  pCVar5 = local_18 + this_ptr->vertex_idx_1;
  local_168 = (pCVar5->position).x - pivot->x;
  local_160 = (pCVar5->position).y - pivot->y;
  local_158 = (pCVar5->position).z - pivot->z;
  pdVar6 = &local_168;
  pdVar7 = &local_78;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pdVar7 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar7 = (double *)((int)pdVar7 + 4);
  }
  local_138 = local_78 * dVar1;
  local_130 = local_70 * dVar2;
  local_128 = local_68 * dVar3;
  pdVar6 = &local_138;
  pdVar7 = &local_d8;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pdVar7 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar7 = (double *)((int)pdVar7 + 4);
  }
  local_48 = local_d8 + pivot->x;
  local_40 = local_d0 + pivot->y;
  local_38 = local_c8 + pivot->z;
  pdVar6 = &local_48;
  puVar8 = local_150;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    puVar8 = puVar8 + 1;
  }
  *(uint *)&(pCVar5->position).x = local_150[0];
  *(uint *)((int)&(pCVar5->position).x + 4) = local_150[1];
  *(uint *)&(pCVar5->position).y = local_150[2];
  *(uint *)((int)&(pCVar5->position).y + 4) = local_150[3];
  *(uint *)&(pCVar5->position).z = local_140;
  *(uint *)((int)&(pCVar5->position).z + 4) = local_13c;
  local_1b0 = *(uint *)&scale->x;
  dVar1 = scale->x;
  uStack_1ac = *(uint *)((int)&scale->x + 4);
  local_1a8 = *(uint *)&scale->y;
  dVar2 = scale->y;
  uStack_1a4 = *(uint *)((int)&scale->y + 4);
  local_1a0 = *(uint *)&scale->z;
  dVar3 = scale->z;
  uStack_19c = *(uint *)((int)&scale->z + 4);
  pCVar5 = local_18 + this_ptr->vertex_idx_2;
  local_1f8 = (pCVar5->position).x - pivot->x;
  local_1f0 = (pCVar5->position).y - pivot->y;
  local_1e8 = (pCVar5->position).z - pivot->z;
  pdVar6 = &local_1f8;
  pdVar7 = &local_30;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pdVar7 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar7 = (double *)((int)pdVar7 + 4);
  }
  local_1e0 = local_30 * dVar1;
  local_1d8 = local_28 * dVar2;
  local_1d0 = local_20 * dVar3;
  pdVar6 = &local_1e0;
  pdVar7 = &local_120;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pdVar7 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar7 = (double *)((int)pdVar7 + 4);
  }
  local_198 = local_120 + pivot->x;
  local_190 = local_118 + pivot->y;
  local_188 = local_110 + pivot->z;
  pdVar6 = &local_198;
  puVar8 = local_1c8;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    puVar8 = puVar8 + 1;
  }
  *(uint *)&(pCVar5->position).x = local_1c8[0];
  *(uint *)((int)&(pCVar5->position).x + 4) = local_1c8[1];
  *(uint *)&(pCVar5->position).y = local_1c8[2];
  *(uint *)((int)&(pCVar5->position).y + 4) = local_1c8[3];
  *(uint *)&(pCVar5->position).z = local_1b8;
  *(uint *)((int)&(pCVar5->position).z + 4) = local_1b4;
  return;
}
