// Name: shape_superopt.cpp_CObj_removeVerticesByFlag_FUN_005d3280
// Address: 005d3280
// Address Range: [[005d3280, 005d32d9]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_removeVerticesByFlag_FUN_005d3280(CObj *this_ptr,uint flag_mask)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_removeVerticesByFlag_FUN_005d3280(CObj *this_ptr,uint flag_mask)

{
  int iVar1;
  uint index;
  
  index = 0;
  if (this_ptr->vertex_count != 0) {
    do {
      if ((this_ptr->vertex_data[index].state_flags & flag_mask) == flag_mask) {
        iVar1 = (*this_ptr->vtable->removePolygonsAtVertex)(this_ptr,index);
        if (iVar1 == 0) {
          return;
        }
        iVar1 = (*this_ptr->vtable->removeVertex)(this_ptr,index);
        if (iVar1 == 0) {
          return;
        }
        index = index - 1;
      }
      index = index + 1;
    } while (index < (uint)this_ptr->vertex_count);
  }
  (*this_ptr->vtable->removeUnusedVertices)(this_ptr);
  return;
}
