// Name: shape_superopt.cpp_CObj_translateMasked_FUN_005d28d0
// Address: 005d28d0
// Address Range: [[005d28d0, 005d2937]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_translateMasked_FUN_005d28d0(CObj * this_ptr, uint flag_mask, CVector3d * offset)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_translateMasked_FUN_005d28d0
          (CObj *this_ptr,uint flag_mask,CVector3d *offset)

{
  int iVar1;
  CVert *pCVar2;
  uint uVar3;
  
  iVar1 = (*this_ptr->vtable->isValid)(this_ptr);
  if (iVar1 != 0) {
    pCVar2 = this_ptr->vertex_data;
    uVar3 = 0;
    if (this_ptr->vertex_count != 0) {
      do {
        while ((pCVar2->state_flags & flag_mask) == flag_mask) {
          (pCVar2->position).x = offset->x + (pCVar2->position).x;
          (pCVar2->position).y = offset->y + (pCVar2->position).y;
          (pCVar2->position).z = offset->z + (pCVar2->position).z;
          uVar3 = uVar3 + 1;
          pCVar2 = pCVar2 + 1;
          if ((uint)this_ptr->vertex_count <= uVar3) {
            return;
          }
        }
        uVar3 = uVar3 + 1;
        pCVar2 = pCVar2 + 1;
      } while (uVar3 < (uint)this_ptr->vertex_count);
    }
  }
  return;
}
