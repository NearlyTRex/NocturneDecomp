// Name: shape_superopt.cpp_CObj_findVertexIndex_FUN_005d32e0
// Address: 005d32e0
// MANUAL RECONSTRUCTION
// Address Range: [[005d32e0, 005d3313]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_findVertexIndex_FUN_005d32e0(CObj *this_ptr,CVert *vertex_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_findVertexIndex_FUN_005d32e0(CObj *this_ptr,CVert *vertex_ptr)

{
  int iVar1;
  
  iVar1 = (*this_ptr->vtable->containsVertex)(this_ptr,vertex_ptr);
  if (iVar1 != 0) {
    return ((intptr_t)vertex_ptr - (intptr_t)this_ptr->vertex_data) / (int)sizeof(CVert);
  }
  return -1;
}
