// Name: shape_superopt.cpp_CObj_findAndRemovePolygonsUsingVertex_FUN_005d30c0
// Address: 005d30c0
// Address Range: [[005d30c0, 005d30e9]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_findAndRemovePolygonsUsingVertex_FUN_005d30c0(CObj *this_ptr,CVert *vert_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_findAndRemovePolygonsUsingVertex_FUN_005d30c0(CObj *this_ptr,CVert *vert_ptr)

{
  int iVar1;
  
  iVar1 = (*this_ptr->vtable->findVertexIndex)(this_ptr,vert_ptr);
  if (iVar1 == -1) {
    return 0;
  }
  iVar1 = (*this_ptr->vtable->removePolygonsAtVertex)(this_ptr,iVar1);
  return iVar1;
}
