// Name: shape_superopt.cpp_CPoly_scale_FUN_005cc7c0
// Address: 005cc7c0
// Address Range: [[005cc7c0, 005ccc2e]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_scale_FUN_005cc7c0(CPoly * this_ptr, CVector3d * scale, CVector3d * pivot)

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
  double dStack_20c;
  double dStack_204;
  double dStack_1fc;
  double dStack_1f4;
  double dStack_1ec;
  double dStack_1e4;
  double dStack_1dc;
  double dStack_1d4;
  double dStack_1cc;
  uint local_1c4 [4];
  uint local_1b4;
  uint local_1b0;
  uint uStack_1ac;
  uint local_1a8;
  uint uStack_1a4;
  uint local_1a0;
  uint uStack_19c;
  uint local_198;
  double dStack_194;
  double dStack_18c;
  double dStack_184;
  uint uStack_17c;
  uint local_178;
  uint uStack_174;
  uint local_170;
  uint uStack_16c;
  uint local_168;
  double dStack_164;
  double dStack_15c;
  double dStack_154;
  uint local_14c [4];
  uint local_13c;
  uint local_138;
  double dStack_134;
  double dStack_12c;
  double dStack_124;
  double dStack_11c;
  double dStack_114;
  double dStack_10c;
  double dStack_104;
  double dStack_fc;
  double dStack_f4;
  double dStack_ec;
  double dStack_e4;
  double dStack_dc;
  double dStack_d4;
  double dStack_cc;
  double dStack_c4;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  double dStack_a4;
  double dStack_9c;
  double dStack_94;
  uint local_8c [4];
  uint local_7c;
  uint local_78;
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
  double dStack_1c;
  CVert *pCStack_14;
  
  pCStack_14 = this_ptr->parent_obj->vertex_data;
  uStack_bc = *(uint *)&scale->x;
  local_b8 = *(uint *)((int)&scale->x + 4);
  uStack_b4 = *(uint *)&scale->y;
  local_b0 = *(uint *)((int)&scale->y + 4);
  uStack_ac = *(uint *)&scale->z;
  local_a8 = *(uint *)((int)&scale->z + 4);
  pCVar5 = pCStack_14 + this_ptr->vertex_idx_0;
  dStack_104 = (pCVar5->position).x - pivot->x;
  dStack_fc = (pCVar5->position).y - pivot->y;
  dStack_f4 = (pCVar5->position).z - pivot->z;
  pdVar6 = &dStack_104;
  pdVar7 = &dStack_20c;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pdVar7 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar7 = (double *)((int)pdVar7 + 4);
  }
  dStack_5c = dStack_20c * (double)CONCAT44 /* combine 2-byte values */(local_b8,uStack_bc);
  dStack_54 = dStack_204 * (double)CONCAT44 /* combine 2-byte values */(local_b0,uStack_b4);
  dStack_4c = dStack_1fc * (double)CONCAT44 /* combine 2-byte values */(local_a8,uStack_ac);
  pdVar6 = &dStack_5c;
  pdVar7 = &dStack_a4;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pdVar7 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar7 = (double *)((int)pdVar7 + 4);
  }
  dStack_ec = dStack_a4 + pivot->x;
  dStack_e4 = dStack_9c + pivot->y;
  dStack_dc = dStack_94 + pivot->z;
  pdVar6 = &dStack_ec;
  puVar8 = local_8c;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    puVar8 = puVar8 + 1;
  }
  *(uint *)&(pCVar5->position).x = local_8c[0];
  *(uint *)((int)&(pCVar5->position).x + 4) = local_8c[1];
  *(uint *)&(pCVar5->position).y = local_8c[2];
  *(uint *)((int)&(pCVar5->position).y + 4) = local_8c[3];
  *(uint *)&(pCVar5->position).z = local_7c;
  *(uint *)((int)&(pCVar5->position).z + 4) = local_78;
  uStack_17c = *(uint *)&scale->x;
  dVar1 = scale->x;
  local_178 = *(uint *)((int)&scale->x + 4);
  uStack_174 = *(uint *)&scale->y;
  dVar2 = scale->y;
  local_170 = *(uint *)((int)&scale->y + 4);
  uStack_16c = *(uint *)&scale->z;
  dVar3 = scale->z;
  local_168 = *(uint *)((int)&scale->z + 4);
  pCVar5 = pCStack_14 + this_ptr->vertex_idx_1;
  dStack_164 = (pCVar5->position).x - pivot->x;
  dStack_15c = (pCVar5->position).y - pivot->y;
  dStack_154 = (pCVar5->position).z - pivot->z;
  pdVar6 = &dStack_164;
  pdVar7 = &dStack_74;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pdVar7 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar7 = (double *)((int)pdVar7 + 4);
  }
  dStack_134 = dStack_74 * dVar1;
  dStack_12c = dStack_6c * dVar2;
  dStack_124 = dStack_64 * dVar3;
  pdVar6 = &dStack_134;
  pdVar7 = &dStack_d4;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pdVar7 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar7 = (double *)((int)pdVar7 + 4);
  }
  dStack_44 = dStack_d4 + pivot->x;
  dStack_3c = dStack_cc + pivot->y;
  dStack_34 = dStack_c4 + pivot->z;
  pdVar6 = &dStack_44;
  puVar8 = local_14c;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    puVar8 = puVar8 + 1;
  }
  *(uint *)&(pCVar5->position).x = local_14c[0];
  *(uint *)((int)&(pCVar5->position).x + 4) = local_14c[1];
  *(uint *)&(pCVar5->position).y = local_14c[2];
  *(uint *)((int)&(pCVar5->position).y + 4) = local_14c[3];
  *(uint *)&(pCVar5->position).z = local_13c;
  *(uint *)((int)&(pCVar5->position).z + 4) = local_138;
  uStack_1ac = *(uint *)&scale->x;
  dVar1 = scale->x;
  local_1a8 = *(uint *)((int)&scale->x + 4);
  uStack_1a4 = *(uint *)&scale->y;
  dVar2 = scale->y;
  local_1a0 = *(uint *)((int)&scale->y + 4);
  uStack_19c = *(uint *)&scale->z;
  dVar3 = scale->z;
  local_198 = *(uint *)((int)&scale->z + 4);
  pCVar5 = pCStack_14 + this_ptr->vertex_idx_2;
  dStack_1f4 = (pCVar5->position).x - pivot->x;
  dStack_1ec = (pCVar5->position).y - pivot->y;
  dStack_1e4 = (pCVar5->position).z - pivot->z;
  pdVar6 = &dStack_1f4;
  pdVar7 = &dStack_2c;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pdVar7 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar7 = (double *)((int)pdVar7 + 4);
  }
  dStack_1dc = dStack_2c * dVar1;
  dStack_1d4 = dStack_24 * dVar2;
  dStack_1cc = dStack_1c * dVar3;
  pdVar6 = &dStack_1dc;
  pdVar7 = &dStack_11c;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pdVar7 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar7 = (double *)((int)pdVar7 + 4);
  }
  dStack_194 = dStack_11c + pivot->x;
  dStack_18c = dStack_114 + pivot->y;
  dStack_184 = dStack_10c + pivot->z;
  pdVar6 = &dStack_194;
  puVar8 = local_1c4;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *(uint *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    puVar8 = puVar8 + 1;
  }
  *(uint *)&(pCVar5->position).x = local_1c4[0];
  *(uint *)((int)&(pCVar5->position).x + 4) = local_1c4[1];
  *(uint *)&(pCVar5->position).y = local_1c4[2];
  *(uint *)((int)&(pCVar5->position).y + 4) = local_1c4[3];
  *(uint *)&(pCVar5->position).z = local_1b4;
  *(uint *)((int)&(pCVar5->position).z + 4) = local_1b0;
  return;
}
