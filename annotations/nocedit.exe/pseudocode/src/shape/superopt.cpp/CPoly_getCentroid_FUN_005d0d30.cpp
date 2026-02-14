// Name: shape_superopt.cpp_CPoly_getCentroid_FUN_005d0d30
// Address: 005d0d30
// Address Range: [[005d0d30, 005d0e1e]]
// Convention: __stack_esi
// Signature: CVector3d * __stack_esi shape_superopt_cpp_CPoly_getCentroid_FUN_005d0d30(CPoly *this_ptr,CVector3d *out_centroid)

#include "nocturne.h"

CVector3d * __stack_esi shape_superopt_cpp_CPoly_getCentroid_FUN_005d0d30(CPoly *this_ptr,CVector3d *out_centroid)

{
  CVert *pCVar1;
  CVert *pCVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  CVector3d *pCVar6;
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
  double local_20;
  double local_18;
  CVert *local_10;
  
  pCVar2 = this_ptr->parent_obj->vertex_data;
  local_10 = pCVar2 + this_ptr->vertex_idx_2;
  pCVar1 = pCVar2 + this_ptr->vertex_idx_1;
  iVar3 = this_ptr->vertex_idx_0;
  local_40 = pCVar2[iVar3].position.x + (pCVar1->position).x;
  local_38 = pCVar2[iVar3].position.y + (pCVar1->position).y;
  local_30 = pCVar2[iVar3].position.z + (pCVar1->position).z;
  pdVar4 = &local_40;
  pdVar5 = &local_58;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pdVar5 = *(uint *)pdVar4;
    pdVar4 = (double *)((int)pdVar4 + 4);
    pdVar5 = (double *)((int)pdVar5 + 4);
  }
  local_88 = local_58 + (local_10->position).x;
  local_80 = local_50 + (local_10->position).y;
  local_78 = local_48 + (local_10->position).z;
  pdVar4 = &local_88;
  pdVar5 = &local_28;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pdVar5 = *(uint *)pdVar4;
    pdVar4 = (double *)((int)pdVar4 + 4);
    pdVar5 = (double *)((int)pdVar5 + 4);
  }
  local_70 = local_28 * 0.33333333333333298;
  local_68 = local_20 * 0.33333333333333298;
  local_60 = local_18 * 0.33333333333333298;
  pdVar4 = &local_70;
  pCVar6 = out_centroid;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)&pCVar6->x = *(uint *)pdVar4;
    pdVar4 = (double *)((int)pdVar4 + 4);
    pCVar6 = (CVector3d *)((int)&pCVar6->x + 4);
  }
  return out_centroid;
}
