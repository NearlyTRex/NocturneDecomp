// Name: shape_superopt.cpp_CObj_allocateVertices_FUN_005d2500
// Address: 005d2500
// MANUAL RECONSTRUCTION
// Address Range: [[005d2500, 005d2577]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_allocateVertices_FUN_005d2500(CObj *this_ptr,int vertex_count)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_allocateVertices_FUN_005d2500(CObj *this_ptr,int vertex_count)

{
  CVert *pCVar1;
  
  this_ptr->vertex_count = vertex_count;
  pCVar1 = (CVert *)malloc(vertex_count * sizeof(CVert));
  this_ptr->vertex_data = pCVar1;
  if (pCVar1 == (CVert *)0x0) {
    if (this_ptr->poly_array != (CPoly *)0x0) {
      free(this_ptr->poly_array);
    }
    this_ptr->poly_array = (CPoly *)0x0;
    shape_superopt_cpp_logToFile_FUN_005c7910("Unable to allocate RAM for object vertices");
    this_ptr->is_valid = 0;
    return 0;
  }
  memset(this_ptr->vertex_data,0,this_ptr->vertex_count * sizeof(*this_ptr->vertex_data));
  return 1;
}
