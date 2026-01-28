// Name: shape_superopt.cpp_CObj_setStateFlagToAttrib_FUN_005d3650
// Address: 005d3650
// Address Range: [[005d3650, 005d36a1]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_setStateFlagToAttrib_FUN_005d3650 (CObj *this_ptr,uint set_mask,uint attrib_test)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_setStateFlagToAttrib_FUN_005d3650
          (CObj *this_ptr,uint set_mask,uint attrib_test)

{
  CVert *pCVar1;
  uint uVar2;
  
  pCVar1 = this_ptr->vertex_data;
  uVar2 = 0;
  if (this_ptr->vertex_count != 0) {
    do {
      if ((pCVar1->attrib_flags & attrib_test) == attrib_test) {
        pCVar1->state_flags = pCVar1->state_flags | set_mask;
      }
      else {
        pCVar1->state_flags = pCVar1->state_flags & ~set_mask;
      }
      uVar2 = uVar2 + 1;
      pCVar1 = pCVar1 + 1;
    } while (uVar2 < (uint)this_ptr->vertex_count);
  }
  (*this_ptr->vtable->updatePolyFlagsFromVerts)(this_ptr,set_mask);
  return;
}
