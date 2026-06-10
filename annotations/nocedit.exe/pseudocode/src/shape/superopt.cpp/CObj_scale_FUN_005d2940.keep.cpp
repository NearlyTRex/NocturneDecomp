// Name: shape_superopt.cpp_CObj_scale_FUN_005d2940
// Address: 005d2940
// MANUAL RECONSTRUCTION
// Address Range: [[005d2940, 005d2ab6]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_scale_FUN_005d2940(CObj *this_ptr,CVector3d *scale,CVector3d *pivot)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_scale_FUN_005d2940(CObj *this_ptr,CVector3d *scale,CVector3d *pivot)

{
  CVert *pCVar5;
  uint local_18;

  local_18 = 0;
  pCVar5 = this_ptr->vertex_data;
  if (this_ptr->vertex_count != 0) {
    do {
      (pCVar5->position).x = ((pCVar5->position).x - pivot->x) * scale->x + pivot->x;
      (pCVar5->position).y = ((pCVar5->position).y - pivot->y) * scale->y + pivot->y;
      (pCVar5->position).z = ((pCVar5->position).z - pivot->z) * scale->z + pivot->z;
      local_18 = local_18 + 1;
      pCVar5 = pCVar5 + 1;
    } while (local_18 < (uint)this_ptr->vertex_count);
  }
  return;
}
