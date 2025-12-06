// Name: shape_superopt.cpp_CObj_translate_FUN_005d2880
// Address: 005d2880
// Address Range: [[005d2880, 005d28c9]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_translate_FUN_005d2880(CObj * this_ptr, CVector3d * offset)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_translate_FUN_005d2880(CObj *this_ptr,CVector3d *offset)

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
        (pCVar2->position).x = offset->x + (pCVar2->position).x;
        (pCVar2->position).y = offset->y + (pCVar2->position).y;
        uVar3 = uVar3 + 1;
        (pCVar2->position).z = offset->z + (pCVar2->position).z;
        pCVar2 = pCVar2 + 1;
      } while (uVar3 < (uint)this_ptr->vertex_count);
    }
  }
  return;
}
