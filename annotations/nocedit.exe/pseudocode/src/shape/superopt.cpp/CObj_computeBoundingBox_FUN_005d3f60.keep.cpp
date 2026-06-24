// Name: shape_superopt.cpp_CObj_computeBoundingBox_FUN_005d3f60
// Address: 005d3f60
// MANUAL RECONSTRUCTION
// Address Range: [[005d3f60, 005d4066]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_computeBoundingBox_FUN_005d3f60(CObj *this_ptr,CVector3d *out_min,CVector3d *out_max)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_computeBoundingBox_FUN_005d3f60(CObj *this_ptr,CVector3d *out_min,CVector3d *out_max)

{
  CVert *pCVar1;
  CVert *pCVar2;
  uint uVar3;
  
  pCVar1 = this_ptr->vertex_data;
  uVar3 = 1;
  *out_min = pCVar1->position;
  *out_max = pCVar1->position;
  if (1 < (uint)this_ptr->vertex_count) {
    do {
      pCVar2 = pCVar1 + 1;
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
      uVar3 = uVar3 + 1;
      pCVar1 = pCVar2;
    } while (uVar3 < (uint)this_ptr->vertex_count);
  }
  return;
}
