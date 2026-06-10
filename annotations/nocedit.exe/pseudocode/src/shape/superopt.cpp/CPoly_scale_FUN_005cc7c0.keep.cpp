// Name: shape_superopt.cpp_CPoly_scale_FUN_005cc7c0
// Address: 005cc7c0
// MANUAL RECONSTRUCTION
// Address Range: [[005cc7c0, 005ccc2e]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_scale_FUN_005cc7c0(CPoly *this_ptr,CVector3d *scale,CVector3d *pivot)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_scale_FUN_005cc7c0(CPoly *this_ptr,CVector3d *scale,CVector3d *pivot)

{
  CVert *pCVar5;
  CVert *pCVar8;
  CVert *local_18;

  local_18 = this_ptr->parent_obj->vertex_data;
  pCVar5 = local_18 + this_ptr->vertex_idx_0;
  (pCVar5->position).x = ((pCVar5->position).x - pivot->x) * scale->x + pivot->x;
  (pCVar5->position).y = ((pCVar5->position).y - pivot->y) * scale->y + pivot->y;
  (pCVar5->position).z = ((pCVar5->position).z - pivot->z) * scale->z + pivot->z;
  pCVar8 = local_18 + this_ptr->vertex_idx_1;
  (pCVar8->position).x = ((pCVar8->position).x - pivot->x) * scale->x + pivot->x;
  (pCVar8->position).y = ((pCVar8->position).y - pivot->y) * scale->y + pivot->y;
  (pCVar8->position).z = ((pCVar8->position).z - pivot->z) * scale->z + pivot->z;
  pCVar8 = local_18 + this_ptr->vertex_idx_2;
  (pCVar8->position).x = ((pCVar8->position).x - pivot->x) * scale->x + pivot->x;
  (pCVar8->position).y = ((pCVar8->position).y - pivot->y) * scale->y + pivot->y;
  (pCVar8->position).z = ((pCVar8->position).z - pivot->z) * scale->z + pivot->z;
  return;
}
