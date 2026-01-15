// Name: shape_superopt.cpp_CObj_findVertexIndex_FUN_005d32e0
// Address: 005d32e0
// Address Range: [[005d32e0, 005d3313]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_findVertexIndex_FUN_005d32e0(CObj * this_ptr, CVert * vertex_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_findVertexIndex_FUN_005d32e0(CObj *this_ptr,CVert *vertex_ptr)

{
  int iVar1;
  int in_stack_00000010;
  
  iVar1 = (*this_ptr->vtable->containsVertex)(this_ptr,vertex_ptr);
  if (iVar1 != 0) {
    return (in_stack_00000010 - (int)this_ptr->vertex_data) / 0x38;
  }
  return -1;
}
