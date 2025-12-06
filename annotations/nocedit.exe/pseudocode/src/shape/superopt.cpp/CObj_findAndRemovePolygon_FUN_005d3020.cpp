// Name: shape_superopt.cpp_CObj_findAndRemovePolygon_FUN_005d3020
// Address: 005d3020
// Address Range: [[005d3020, 005d3049]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_findAndRemovePolygon_FUN_005d3020(CObj * this_ptr, CPoly * poly_ptr)

#include "nocturne.h"

int __cdecl
shape_superopt_cpp_CObj_findAndRemovePolygon_FUN_005d3020(CObj *this_ptr,CPoly *poly_ptr)

{
  uint index;
  int iVar1;
  
  index = (*this_ptr->vtable->findPolygonIndex)(this_ptr,poly_ptr);
  if (index == 0xffffffff) {
    return 0;
  }
  iVar1 = (*this_ptr->vtable->removePolygon)(this_ptr,index);
  return iVar1;
}
