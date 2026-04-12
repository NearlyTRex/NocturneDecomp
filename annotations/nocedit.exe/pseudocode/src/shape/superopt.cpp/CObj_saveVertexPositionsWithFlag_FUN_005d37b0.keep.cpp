// Name: shape_superopt.cpp_CObj_saveVertexPositionsWithFlag_FUN_005d37b0
// Address: 005d37b0
// MANUAL RECONSTRUCTION
// Address Range: [[005d37b0, 005d385c]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_saveVertexPositionsWithFlag_FUN_005d37b0(CObj *this_ptr,uint flag_mask)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_saveVertexPositionsWithFlag_FUN_005d37b0(CObj *this_ptr,uint flag_mask)

{
  uint uVar3;
  CVert *vert;

  if ((this_ptr->flags & flag_mask) == flag_mask) {
    (*this_ptr->vtable->saveVertexPositions)(this_ptr);
    return;
  }
  uVar3 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      (*this_ptr->poly_array[uVar3].vtable->saveVertexPositionsWithFlag)
                (&this_ptr->poly_array[uVar3],flag_mask);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)this_ptr->poly_count);
  }
  uVar3 = 0;
  if (this_ptr->vertex_count != 0) {
    do {
      vert = this_ptr->vertex_data + uVar3;
      while ((vert->state_flags & flag_mask) == flag_mask) {
        vert->orig_position = vert->position;
        uVar3 = uVar3 + 1;
        if ((uint)this_ptr->vertex_count <= uVar3) {
          return;
        }
        vert = this_ptr->vertex_data + uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)this_ptr->vertex_count);
  }
  return;
}
