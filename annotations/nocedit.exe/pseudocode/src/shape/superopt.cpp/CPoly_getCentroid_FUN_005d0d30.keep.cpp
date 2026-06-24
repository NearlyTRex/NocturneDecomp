// Name: shape_superopt.cpp_CPoly_getCentroid_FUN_005d0d30
// Address: 005d0d30
// MANUAL RECONSTRUCTION
// Address Range: [[005d0d30, 005d0e1e]]
// Convention: __stack_esi
// Signature: CVector3d * __stack_esi shape_superopt_cpp_CPoly_getCentroid_FUN_005d0d30(CPoly *this_ptr,CVector3d *out_centroid)

#include "nocturne.h"

CVector3d * __stack_esi shape_superopt_cpp_CPoly_getCentroid_FUN_005d0d30(CPoly *this_ptr,CVector3d *out_centroid)

{
  int iVar1;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_40;
  double local_38;
  double local_30;
  CVert *local_10;
  CVert *pCVar2;
  CVert *pCVar1;
  
  pCVar2 = this_ptr->parent_obj->vertex_data;
  local_10 = pCVar2 + this_ptr->vertex_idx_2;
  pCVar1 = pCVar2 + this_ptr->vertex_idx_1;
  iVar1 = this_ptr->vertex_idx_0;
  local_40 = pCVar2[iVar1].position.x + (pCVar1->position).x;
  local_38 = pCVar2[iVar1].position.y + (pCVar1->position).y;
  local_30 = pCVar2[iVar1].position.z + (pCVar1->position).z;
  local_88 = local_40 + (local_10->position).x;
  local_80 = local_38 + (local_10->position).y;
  local_78 = local_30 + (local_10->position).z;
  local_70 = local_88 * 0.33333333333333298;
  local_68 = local_80 * 0.33333333333333298;
  local_60 = local_78 * 0.33333333333333298;
  out_centroid->x = local_70;
  out_centroid->y = local_68;
  out_centroid->z = local_60;
  return out_centroid;
}
