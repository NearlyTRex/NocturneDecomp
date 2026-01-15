// Name: shape_superopt.cpp_CPoly_transform_FUN_005ccc30
// Address: 005ccc30
// Address Range: [[005ccc30, 005cd0aa]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_transform_FUN_005ccc30(CPoly * this_ptr, CMatrix3x3d * matrix, CVector3d * pivot)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CPoly_transform_FUN_005ccc30
          (CPoly *this_ptr,CMatrix3x3d *matrix,CVector3d *pivot)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  uint *puVar4;
  double dStack_1cc;
  double dStack_1c4;
  double dStack_1bc;
  double dStack_1b4;
  double dStack_1ac;
  double dStack_1a4;
  uint local_19c [4];
  uint local_18c;
  uint local_188;
  double dStack_184;
  double dStack_17c;
  double dStack_174;
  double dStack_16c;
  double dStack_164;
  double dStack_15c;
  double dStack_154;
  double dStack_14c;
  double dStack_144;
  double dStack_13c;
  double dStack_134;
  double dStack_12c;
  uint local_124 [4];
  uint local_114;
  uint local_110;
  double dStack_10c;
  double dStack_104;
  double dStack_fc;
  double dStack_f4;
  double dStack_ec;
  double dStack_e4;
  uint local_dc [4];
  uint local_cc;
  uint local_c8;
  double dStack_c4;
  double dStack_bc;
  double dStack_b4;
  double dStack_ac;
  double dStack_a4;
  double dStack_9c;
  double dStack_94;
  double dStack_8c;
  double dStack_84;
  double dStack_7c;
  double dStack_74;
  double dStack_6c;
  double dStack_64;
  double dStack_5c;
  double dStack_54;
  double dStack_4c;
  double dStack_44;
  double dStack_3c;
  double dStack_34;
  double dStack_2c;
  double dStack_24;
  CVert *local_1c;
  CVert *local_18;
  CVert *pCStack_14;
  
  local_1c = this_ptr->parent_obj->vertex_data;
  pCStack_14 = local_1c + this_ptr->vertex_idx_0;
  dStack_64 = (pCStack_14->position).x - pivot->x;
  dStack_5c = (pCStack_14->position).y - pivot->y;
  dStack_54 = (pCStack_14->position).z - pivot->z;
  pdVar2 = &dStack_64;
  pdVar3 = &dStack_154;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pdVar3 = *(uint *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  dStack_94 = matrix->m[0].z * dStack_144 +
              matrix->m[0].x * dStack_154 + matrix->m[0].y * dStack_14c;
  dStack_8c = matrix->m[1].z * dStack_144 +
              matrix->m[1].x * dStack_154 + matrix->m[1].y * dStack_14c;
  dStack_84 = matrix->m[2].z * dStack_144 +
              matrix->m[2].x * dStack_154 + matrix->m[2].y * dStack_14c;
  pdVar2 = &dStack_94;
  pdVar3 = &dStack_13c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pdVar3 = *(uint *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  dStack_4c = dStack_13c + pivot->x;
  dStack_44 = dStack_134 + pivot->y;
  dStack_3c = dStack_12c + pivot->z;
  pdVar2 = &dStack_4c;
  puVar4 = local_124;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(uint *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    puVar4 = puVar4 + 1;
  }
  *(uint *)&(pCStack_14->position).x = local_124[0];
  *(uint *)((int)&(pCStack_14->position).x + 4) = local_124[1];
  *(uint *)&(pCStack_14->position).y = local_124[2];
  *(uint *)((int)&(pCStack_14->position).y + 4) = local_124[3];
  *(uint *)&(pCStack_14->position).z = local_114;
  *(uint *)((int)&(pCStack_14->position).z + 4) = local_110;
  pCStack_14 = local_1c + this_ptr->vertex_idx_1;
  dStack_1b4 = (pCStack_14->position).x - pivot->x;
  dStack_1ac = (pCStack_14->position).y - pivot->y;
  dStack_1a4 = (pCStack_14->position).z - pivot->z;
  pdVar2 = &dStack_1b4;
  pdVar3 = &dStack_ac;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pdVar3 = *(uint *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  dStack_1cc = matrix->m[0].z * dStack_9c + matrix->m[0].x * dStack_ac + matrix->m[0].y * dStack_a4;
  dStack_1c4 = matrix->m[1].z * dStack_9c + matrix->m[1].x * dStack_ac + matrix->m[1].y * dStack_a4;
  dStack_1bc = matrix->m[2].z * dStack_9c + matrix->m[2].x * dStack_ac + matrix->m[2].y * dStack_a4;
  pdVar2 = &dStack_1cc;
  pdVar3 = &dStack_10c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pdVar3 = *(uint *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  dStack_c4 = dStack_10c + pivot->x;
  dStack_bc = dStack_104 + pivot->y;
  dStack_b4 = dStack_fc + pivot->z;
  pdVar2 = &dStack_c4;
  puVar4 = local_dc;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(uint *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    puVar4 = puVar4 + 1;
  }
  *(uint *)&(pCStack_14->position).x = local_dc[0];
  *(uint *)((int)&(pCStack_14->position).x + 4) = local_dc[1];
  *(uint *)&(pCStack_14->position).y = local_dc[2];
  *(uint *)((int)&(pCStack_14->position).y + 4) = local_dc[3];
  *(uint *)&(pCStack_14->position).z = local_cc;
  *(uint *)((int)&(pCStack_14->position).z + 4) = local_c8;
  local_18 = local_1c + this_ptr->vertex_idx_2;
  dStack_16c = (local_18->position).x - pivot->x;
  dStack_164 = (local_18->position).y - pivot->y;
  dStack_15c = (local_18->position).z - pivot->z;
  pdVar2 = &dStack_16c;
  pdVar3 = &dStack_7c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pdVar3 = *(uint *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  dStack_f4 = matrix->m[0].z * dStack_6c + matrix->m[0].x * dStack_7c + matrix->m[0].y * dStack_74;
  dStack_ec = matrix->m[1].z * dStack_6c + matrix->m[1].x * dStack_7c + matrix->m[1].y * dStack_74;
  dStack_e4 = matrix->m[2].z * dStack_6c + matrix->m[2].x * dStack_7c + matrix->m[2].y * dStack_74;
  pdVar2 = &dStack_f4;
  pdVar3 = &dStack_184;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pdVar3 = *(uint *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  dStack_34 = dStack_184 + pivot->x;
  dStack_2c = dStack_17c + pivot->y;
  dStack_24 = dStack_174 + pivot->z;
  pdVar2 = &dStack_34;
  puVar4 = local_19c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(uint *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    puVar4 = puVar4 + 1;
  }
  *(uint *)&(local_18->position).x = local_19c[0];
  *(uint *)((int)&(local_18->position).x + 4) = local_19c[1];
  *(uint *)&(local_18->position).y = local_19c[2];
  *(uint *)((int)&(local_18->position).y + 4) = local_19c[3];
  *(uint *)&(local_18->position).z = local_18c;
  *(uint *)((int)&(local_18->position).z + 4) = local_188;
  return;
}
