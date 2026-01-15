// Name: shape_superopt.cpp_CObj_init_FUN_005d22d0
// Address: 005d22d0
// Address Range: [[005d22d0, 005d231b]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_init_FUN_005d22d0(CObj * this_ptr, int poly_count, int vertex_count)

#include "nocturne.h"

int __cdecl
shape_superopt_cpp_CObj_init_FUN_005d22d0(CObj *this_ptr,int poly_count,int vertex_count)

{
  int iVar1;
  int in_stack_00000018;
  
  (*this_ptr->vtable->free)(this_ptr);
  if (vertex_count != 0) {
    iVar1 = (*this_ptr->vtable->allocatePolygons)(this_ptr,vertex_count);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (in_stack_00000018 != 0) {
    iVar1 = (*this_ptr->vtable->allocateVertices)(this_ptr,in_stack_00000018);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
