// Name: shape_superopt.cpp_CPoly_transform_FUN_005ccc30
// Address: 005ccc30
// Address Range: [[005ccc30, 005cd0aa]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_transform_FUN_005ccc30(CPoly *this_ptr,CMatrix3x3d *matrix,CVector3d *pivot)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_transform_FUN_005ccc30(CPoly *this_ptr,CMatrix3x3d *matrix,CVector3d *pivot)

{
  int iVar1;
  int iVar2;
  double *pdVar4;
  double *pdVar2;
  uint *puVar5;
  double *pdVar6;
  double *pdVar3;
  uint *puVar4;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  uint local_1a0 [4];
  uint local_190;
  uint local_18c;
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
  uint local_128 [4];
  uint local_118;
  uint local_114;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  uint local_e0 [4];
  uint local_d0;
  uint local_cc;
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
  CVert *local_20;
  CVert *local_1c;
  CVert *local_18;
  
  local_20 = this_ptr->parent_obj->vertex_data;
  local_18 = local_20 + this_ptr->vertex_idx_0;
  local_68 = (local_18->position).x - pivot->x;
  local_60 = (local_18->position).y - pivot->y;
  local_58 = (local_18->position).z - pivot->z;
  pdVar4 = &local_68;
  pdVar6 = &local_158;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pdVar6 = *(uint *)pdVar4;
    pdVar4 = (double *)((int)pdVar4 + 4);
    pdVar6 = (double *)((int)pdVar6 + 4);
  }
  local_98 = matrix->m[0].z * local_148 + matrix->m[0].x * local_158 + matrix->m[0].y * local_150;
  local_90 = matrix->m[1].z * local_148 + matrix->m[1].x * local_158 + matrix->m[1].y * local_150;
  local_88 = matrix->m[2].z * local_148 + matrix->m[2].x * local_158 + matrix->m[2].y * local_150;
  pdVar4 = &local_98;
  pdVar6 = &local_140;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pdVar6 = *(uint *)pdVar4;
    pdVar4 = (double *)((int)pdVar4 + 4);
    pdVar6 = (double *)((int)pdVar6 + 4);
  }
  local_50 = local_140 + pivot->x;
  local_48 = local_138 + pivot->y;
  local_40 = local_130 + pivot->z;
  pdVar4 = &local_50;
  puVar5 = local_128;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *(uint *)pdVar4;
    pdVar4 = (double *)((int)pdVar4 + 4);
    puVar5 = puVar5 + 1;
  }
  *(uint *)&(local_18->position).x = local_128[0];
  *(uint *)((int)&(local_18->position).x + 4) = local_128[1];
  *(uint *)&(local_18->position).y = local_128[2];
  *(uint *)((int)&(local_18->position).y + 4) = local_128[3];
  *(uint *)&(local_18->position).z = local_118;
  *(uint *)((int)&(local_18->position).z + 4) = local_114;
  local_18 = local_20 + this_ptr->vertex_idx_1;
  local_1b8 = (local_18->position).x - pivot->x;
  local_1b0 = (local_18->position).y - pivot->y;
  local_1a8 = (local_18->position).z - pivot->z;
  pdVar4 = &local_1b8;
  pdVar6 = &local_b0;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pdVar6 = *(uint *)pdVar4;
    pdVar4 = (double *)((int)pdVar4 + 4);
    pdVar6 = (double *)((int)pdVar6 + 4);
  }
  local_1d0 = matrix->m[0].z * local_a0 + matrix->m[0].x * local_b0 + matrix->m[0].y * local_a8;
  local_1c8 = matrix->m[1].z * local_a0 + matrix->m[1].x * local_b0 + matrix->m[1].y * local_a8;
  local_1c0 = matrix->m[2].z * local_a0 + matrix->m[2].x * local_b0 + matrix->m[2].y * local_a8;
  pdVar4 = &local_1d0;
  pdVar6 = &local_110;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pdVar6 = *(uint *)pdVar4;
    pdVar4 = (double *)((int)pdVar4 + 4);
    pdVar6 = (double *)((int)pdVar6 + 4);
  }
  local_c8 = local_110 + pivot->x;
  local_c0 = local_108 + pivot->y;
  local_b8 = local_100 + pivot->z;
  pdVar4 = &local_c8;
  puVar5 = local_e0;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *(uint *)pdVar4;
    pdVar4 = (double *)((int)pdVar4 + 4);
    puVar5 = puVar5 + 1;
  }
  *(uint *)&(local_18->position).x = local_e0[0];
  *(uint *)((int)&(local_18->position).x + 4) = local_e0[1];
  *(uint *)&(local_18->position).y = local_e0[2];
  *(uint *)((int)&(local_18->position).y + 4) = local_e0[3];
  *(uint *)&(local_18->position).z = local_d0;
  *(uint *)((int)&(local_18->position).z + 4) = local_cc;
  local_1c = local_20 + this_ptr->vertex_idx_2;
  local_170 = (local_1c->position).x - pivot->x;
  local_168 = (local_1c->position).y - pivot->y;
  local_160 = (local_1c->position).z - pivot->z;
  pdVar4 = &local_170;
  pdVar6 = &local_80;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pdVar6 = *(uint *)pdVar4;
    pdVar4 = (double *)((int)pdVar4 + 4);
    pdVar6 = (double *)((int)pdVar6 + 4);
  }
  local_f8 = matrix->m[0].z * local_70 + matrix->m[0].x * local_80 + matrix->m[0].y * local_78;
  local_f0 = matrix->m[1].z * local_70 + matrix->m[1].x * local_80 + matrix->m[1].y * local_78;
  local_e8 = matrix->m[2].z * local_70 + matrix->m[2].x * local_80 + matrix->m[2].y * local_78;
  pdVar4 = &local_f8;
  pdVar3 = &local_188;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pdVar3 = *(uint *)pdVar4;
    pdVar4 = (double *)((int)pdVar4 + 4);
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  local_38 = local_188 + pivot->x;
  local_30 = local_180 + pivot->y;
  local_28 = local_178 + pivot->z;
  pdVar2 = &local_38;
  puVar4 = local_1a0;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(uint *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    puVar4 = puVar4 + 1;
  }
  *(uint *)&(local_1c->position).x = local_1a0[0];
  *(uint *)((int)&(local_1c->position).x + 4) = local_1a0[1];
  *(uint *)&(local_1c->position).y = local_1a0[2];
  *(uint *)((int)&(local_1c->position).y + 4) = local_1a0[3];
  *(uint *)&(local_1c->position).z = local_190;
  *(uint *)((int)&(local_1c->position).z + 4) = local_18c;
  return;
}
