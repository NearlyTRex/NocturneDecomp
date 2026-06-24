// Name: shape_superopt.cpp_CPoly_getBounds_FUN_005ce3e0
// Address: 005ce3e0
// MANUAL RECONSTRUCTION
// Address Range: [[005ce3e0, 005ce57d]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_getBounds_FUN_005ce3e0(CPoly *this_ptr,CVector3d *out_min,CVector3d *out_max)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_getBounds_FUN_005ce3e0(CPoly *this_ptr,CVector3d *out_min,CVector3d *out_max)

{
  CVert *pCVar3;
  CVert *pCVar4;
  CVert *pCVar1;
  int iVar3;
  CVert *pCVar2;
  
  pCVar3 = this_ptr->parent_obj->vertex_data;
  pCVar1 = pCVar3 + this_ptr->vertex_idx_0;
  pCVar2 = pCVar3 + this_ptr->vertex_idx_1;
  iVar3 = this_ptr->vertex_idx_2;
  *out_min = pCVar1->position;
  *out_max = pCVar1->position;
  pCVar4 = pCVar3 + iVar3;
  if ((pCVar2->position).x < out_min->x) {
    out_min->x = (pCVar2->position).x;
  }
  if ((pCVar2->position).y < out_min->y) {
    out_min->y = (pCVar2->position).y;
  }
  if ((pCVar2->position).z < out_min->z) {
    out_min->z = (pCVar2->position).z;
  }
  if (out_max->x < (pCVar2->position).x) {
    out_max->x = (pCVar2->position).x;
  }
  if (out_max->y < (pCVar2->position).y) {
    out_max->y = (pCVar2->position).y;
  }
  if (out_max->z < (pCVar2->position).z) {
    out_max->z = (pCVar2->position).z;
  }
  if ((pCVar4->position).x < out_min->x) {
    out_min->x = (pCVar4->position).x;
  }
  if ((pCVar4->position).y < out_min->y) {
    out_min->y = (pCVar4->position).y;
  }
  if ((pCVar4->position).z < out_min->z) {
    out_min->z = (pCVar4->position).z;
  }
  if (out_max->x < (pCVar4->position).x) {
    out_max->x = (pCVar4->position).x;
  }
  if (out_max->y < (pCVar4->position).y) {
    out_max->y = (pCVar4->position).y;
  }
  if ((pCVar4->position).z <= out_max->z) {
    return;
  }
  out_max->z = (pCVar4->position).z;
  return;
}
