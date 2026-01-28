// Name: shape_superopt.cpp_CObj_computeBoundingBox_FUN_005d3f60
// Address: 005d3f60
// Address Range: [[005d3f60, 005d4066]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_computeBoundingBox_FUN_005d3f60 (CObj *this_ptr,CVector3d *out_min,CVector3d *out_max)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_computeBoundingBox_FUN_005d3f60
          (CObj *this_ptr,CVector3d *out_min,CVector3d *out_max)

{
  CVert *pCVar1;
  CVert *pCVar2;
  uint uVar3;
  
  pCVar1 = this_ptr->vertex_data;
  uVar3 = 1;
  *(uint *)&out_min->x = *(uint *)&(pCVar1->position).x;
  *(uint *)((int)&out_min->x + 4) = *(uint *)((int)&(pCVar1->position).x + 4);
  *(uint *)&out_min->y = *(uint *)&(pCVar1->position).y;
  *(uint *)((int)&out_min->y + 4) = *(uint *)((int)&(pCVar1->position).y + 4);
  *(uint *)&out_min->z = *(uint *)&(pCVar1->position).z;
  *(uint *)((int)&out_min->z + 4) = *(uint *)((int)&(pCVar1->position).z + 4);
  *(uint *)&out_max->x = *(uint *)&(pCVar1->position).x;
  *(uint *)((int)&out_max->x + 4) = *(uint *)((int)&(pCVar1->position).x + 4);
  *(uint *)&out_max->y = *(uint *)&(pCVar1->position).y;
  *(uint *)((int)&out_max->y + 4) = *(uint *)((int)&(pCVar1->position).y + 4);
  *(uint *)&out_max->z = *(uint *)&(pCVar1->position).z;
  *(uint *)((int)&out_max->z + 4) = *(uint *)((int)&(pCVar1->position).z + 4);
  if (1 < (uint)this_ptr->vertex_count) {
    do {
      pCVar2 = pCVar1 + 1;
      if ((pCVar2->position).x < out_min->x) {
        *(uint *)&out_min->x = *(uint *)&(pCVar2->position).x;
        *(uint *)((int)&out_min->x + 4) = *(uint *)((int)&pCVar1[1].position.x + 4);
      }
      if (pCVar1[1].position.y < out_min->y) {
        *(uint *)&out_min->y = *(uint *)&pCVar1[1].position.y;
        *(uint *)((int)&out_min->y + 4) = *(uint *)((int)&pCVar1[1].position.y + 4);
      }
      if (pCVar1[1].position.z < out_min->z) {
        *(uint *)&out_min->z = *(uint *)&pCVar1[1].position.z;
        *(uint *)((int)&out_min->z + 4) = *(uint *)((int)&pCVar1[1].position.z + 4);
      }
      if (out_max->x < (pCVar2->position).x) {
        *(uint *)&out_max->x = *(uint *)&(pCVar2->position).x;
        *(uint *)((int)&out_max->x + 4) = *(uint *)((int)&pCVar1[1].position.x + 4);
      }
      if (out_max->y < pCVar1[1].position.y) {
        *(uint *)&out_max->y = *(uint *)&pCVar1[1].position.y;
        *(uint *)((int)&out_max->y + 4) = *(uint *)((int)&pCVar1[1].position.y + 4);
      }
      if (out_max->z < pCVar1[1].position.z) {
        *(uint *)&out_max->z = *(uint *)&pCVar1[1].position.z;
        *(uint *)((int)&out_max->z + 4) = *(uint *)((int)&pCVar1[1].position.z + 4);
      }
      uVar3 = uVar3 + 1;
      pCVar1 = pCVar2;
    } while (uVar3 < (uint)this_ptr->vertex_count);
  }
  return;
}
