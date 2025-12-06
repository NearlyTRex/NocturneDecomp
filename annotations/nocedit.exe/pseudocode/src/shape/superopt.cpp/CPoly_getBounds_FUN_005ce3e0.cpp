// Name: shape_superopt.cpp_CPoly_getBounds_FUN_005ce3e0
// Address: 005ce3e0
// Address Range: [[005ce3e0, 005ce57d]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_getBounds_FUN_005ce3e0(CPoly * this_ptr, CVector3d * out_min, CVector3d * out_max)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CPoly_getBounds_FUN_005ce3e0
          (CPoly *this_ptr,CVector3d *out_min,CVector3d *out_max)

{
  CVert *pCVar1;
  CVert *pCVar2;
  int iVar3;
  CVert *pCVar4;
  
  pCVar4 = this_ptr->parent_obj->vertex_data;
  pCVar1 = pCVar4 + this_ptr->vertex_idx_0;
  pCVar2 = pCVar4 + this_ptr->vertex_idx_1;
  iVar3 = this_ptr->vertex_idx_2;
  out_min->x = (pCVar1->position).x;
  *(uint *)&out_min->y = *(uint *)&(pCVar1->position).y;
  *(uint *)((int)&out_min->y + 4) = *(uint *)((int)&(pCVar1->position).y + 4);
  *(uint *)&out_min->z = *(uint *)&(pCVar1->position).z;
  *(uint *)((int)&out_min->z + 4) = *(uint *)((int)&(pCVar1->position).z + 4);
  *(uint *)&out_max->x = *(uint *)&(pCVar1->position).x;
  *(uint *)((int)&out_max->x + 4) = *(uint *)((int)&(pCVar1->position).x + 4);
  out_max->y = (pCVar1->position).y;
  out_max->z = (pCVar1->position).z;
  pCVar4 = pCVar4 + iVar3;
  if ((pCVar2->position).x < out_min->x) {
    *(uint *)&out_min->x = *(uint *)&(pCVar2->position).x;
    *(uint *)((int)&out_min->x + 4) = *(uint *)((int)&(pCVar2->position).x + 4);
  }
  if ((pCVar2->position).y < out_min->y) {
    *(uint *)&out_min->y = *(uint *)&(pCVar2->position).y;
    *(uint *)((int)&out_min->y + 4) = *(uint *)((int)&(pCVar2->position).y + 4);
  }
  if ((pCVar2->position).z < out_min->z) {
    *(uint *)&out_min->z = *(uint *)&(pCVar2->position).z;
    *(uint *)((int)&out_min->z + 4) = *(uint *)((int)&(pCVar2->position).z + 4);
  }
  if (out_max->x < (pCVar2->position).x) {
    *(uint *)&out_max->x = *(uint *)&(pCVar2->position).x;
    *(uint *)((int)&out_max->x + 4) = *(uint *)((int)&(pCVar2->position).x + 4);
  }
  if (out_max->y < (pCVar2->position).y) {
    *(uint *)&out_max->y = *(uint *)&(pCVar2->position).y;
    *(uint *)((int)&out_max->y + 4) = *(uint *)((int)&(pCVar2->position).y + 4);
  }
  if (out_max->z < (pCVar2->position).z) {
    *(uint *)&out_max->z = *(uint *)&(pCVar2->position).z;
    *(uint *)((int)&out_max->z + 4) = *(uint *)((int)&(pCVar2->position).z + 4);
  }
  if ((pCVar4->position).x < out_min->x) {
    *(uint *)&out_min->x = *(uint *)&(pCVar4->position).x;
    *(uint *)((int)&out_min->x + 4) = *(uint *)((int)&(pCVar4->position).x + 4);
  }
  if ((pCVar4->position).y < out_min->y) {
    *(uint *)&out_min->y = *(uint *)&(pCVar4->position).y;
    *(uint *)((int)&out_min->y + 4) = *(uint *)((int)&(pCVar4->position).y + 4);
  }
  if ((pCVar4->position).z < out_min->z) {
    *(uint *)&out_min->z = *(uint *)&(pCVar4->position).z;
    *(uint *)((int)&out_min->z + 4) = *(uint *)((int)&(pCVar4->position).z + 4);
  }
  if (out_max->x < (pCVar4->position).x) {
    *(uint *)&out_max->x = *(uint *)&(pCVar4->position).x;
    *(uint *)((int)&out_max->x + 4) = *(uint *)((int)&(pCVar4->position).x + 4);
  }
  if (out_max->y < (pCVar4->position).y) {
    *(uint *)&out_max->y = *(uint *)&(pCVar4->position).y;
    *(uint *)((int)&out_max->y + 4) = *(uint *)((int)&(pCVar4->position).y + 4);
  }
  if ((pCVar4->position).z <= out_max->z) {
    return;
  }
  *(uint *)&out_max->z = *(uint *)&(pCVar4->position).z;
  *(uint *)((int)&out_max->z + 4) = *(uint *)((int)&(pCVar4->position).z + 4);
  return;
}
