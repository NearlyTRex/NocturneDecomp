// Name: shape_superopt.cpp_CObj_findAndRemoveVertex_FUN_005d3250
// Address: 005d3250
// Address Range: [[005d3250, 005d3279]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_findAndRemoveVertex_FUN_005d3250(CObj *this_ptr,CVert *vertex_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_findAndRemoveVertex_FUN_005d3250(CObj *this_ptr,CVert *vertex_ptr)

{
  uint index;
  int iVar1;
  
  index = (*this_ptr->vtable->findVertexIndex)(this_ptr,vertex_ptr);
  if (index == 0xffffffff) {
    return 0;
  }
  iVar1 = (*this_ptr->vtable->removeVertex)(this_ptr,index);
  return iVar1;
}
