// Name: shape_superopt.cpp_CObj_setStateFlagFromAttrib_FUN_005d3590
// Address: 005d3590
// Address Range: [[005d3590, 005d35d3]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_setStateFlagFromAttrib_FUN_005d3590(CObj * this_ptr, uint flag_to_set, uint attrib_mask)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_setStateFlagFromAttrib_FUN_005d3590
          (CObj *this_ptr,uint flag_to_set,uint attrib_mask)

{
  CVert *pCVar1;
  uint uVar2;
  
  pCVar1 = this_ptr->vertex_data;
  uVar2 = 0;
  if (this_ptr->vertex_count != 0) {
    do {
      if ((pCVar1->attrib_flags & attrib_mask) == attrib_mask) {
        pCVar1->state_flags = pCVar1->state_flags | flag_to_set;
      }
      uVar2 = uVar2 + 1;
      pCVar1 = pCVar1 + 1;
    } while (uVar2 < (uint)this_ptr->vertex_count);
  }
  (*this_ptr->vtable->updatePolyFlagsFromVerts)(this_ptr,flag_to_set);
  return;
}
