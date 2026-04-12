// Name: shape_superopt.cpp_CObj_appendTo_FUN_005d2720
// Address: 005d2720
// MANUAL RECONSTRUCTION
// Address Range: [[005d2720, 005d2871]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_appendTo_FUN_005d2720(CObj *this_ptr,CObj *dest_obj)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_appendTo_FUN_005d2720(CObj *this_ptr,CObj *dest_obj)

{
  int iVar3;
  int iVar5;
  uint local_10;
  int iVar2;
  CPoly *dst_poly;
  uint src_idx;

  local_10 = this_ptr->poly_count;
  iVar2 = this_ptr->vertex_count;
  if ((dest_obj->vertex_count != 0) &&
     (iVar5 = (*this_ptr->vtable->addVertices)(this_ptr,dest_obj->vertex_count), iVar5 == 0)) {
    shape_superopt_cpp_logToFile_FUN_005c7910("Unable to add vertices to object");
    return 0;
  }
  if ((dest_obj->poly_count != 0) &&
     (iVar3 = (*this_ptr->vtable->addPolygons)(this_ptr,dest_obj->poly_count), iVar3 == 0)) {
    shape_superopt_cpp_logToFile_FUN_005c7910("Unable to add polygons to object");
    return 0;
  }
  memcpy(this_ptr->vertex_data + iVar2,dest_obj->vertex_data,dest_obj->vertex_count * sizeof(CVert));
  if (local_10 < (uint)this_ptr->poly_count) {
    src_idx = 0;
    do {
      dst_poly = &this_ptr->poly_array[local_10];
      (*dst_poly->vtable->copyFrom)(dst_poly,&dest_obj->poly_array[src_idx],this_ptr);
      dst_poly->vertex_idx_0 = dst_poly->vertex_idx_0 + iVar2;
      dst_poly->vertex_idx_1 = dst_poly->vertex_idx_1 + iVar2;
      dst_poly->vertex_idx_2 = dst_poly->vertex_idx_2 + iVar2;
      src_idx = src_idx + 1;
      local_10 = local_10 + 1;
    } while (local_10 < (uint)this_ptr->poly_count);
  }
  return 1;
}
