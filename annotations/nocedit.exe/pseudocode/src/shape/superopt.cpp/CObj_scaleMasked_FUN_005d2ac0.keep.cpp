// Name: shape_superopt.cpp_CObj_scaleMasked_FUN_005d2ac0
// Address: 005d2ac0
// MANUAL RECONSTRUCTION
// Address Range: [[005d2ac0, 005d2c38]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_scaleMasked_FUN_005d2ac0(CObj *this_ptr,uint flag_mask,CVector3d *scale,CVector3d *pivot)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_scaleMasked_FUN_005d2ac0(CObj *this_ptr,uint flag_mask,CVector3d *scale,CVector3d *pivot)

{
  CVert *pCVar3;
  uint local_18;

  local_18 = 0;
  pCVar3 = this_ptr->vertex_data;
  if (this_ptr->vertex_count != 0) {
    do {
      if ((pCVar3->state_flags & flag_mask) == flag_mask) {
        (pCVar3->position).x = ((pCVar3->position).x - pivot->x) * scale->x + pivot->x;
        (pCVar3->position).y = ((pCVar3->position).y - pivot->y) * scale->y + pivot->y;
        (pCVar3->position).z = ((pCVar3->position).z - pivot->z) * scale->z + pivot->z;
      }
      pCVar3 = pCVar3 + 1;
      local_18 = local_18 + 1;
    } while (local_18 < (uint)this_ptr->vertex_count);
  }
  return;
}
