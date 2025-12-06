// Name: shape_superopt.cpp_CObj_removePolygonsByFlag_FUN_005d30f0
// Address: 005d30f0
// Address Range: [[005d30f0, 005d3136]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_removePolygonsByFlag_FUN_005d30f0(CObj * this_ptr, uint flag_mask)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_removePolygonsByFlag_FUN_005d30f0(CObj *this_ptr,uint flag_mask)

{
  int iVar1;
  uint index;
  uint uVar2;
  
  index = 0;
  if (this_ptr->poly_count != 0) {
    do {
      uVar2 = index;
      if ((this_ptr->poly_array[index].flags & flag_mask) == flag_mask) {
        uVar2 = index - 1;
        iVar1 = (*this_ptr->vtable->removePolygon)(this_ptr,index);
        if (iVar1 == 0) {
          return 0;
        }
      }
      index = uVar2 + 1;
    } while (index < (uint)this_ptr->poly_count);
  }
  return 1;
}
