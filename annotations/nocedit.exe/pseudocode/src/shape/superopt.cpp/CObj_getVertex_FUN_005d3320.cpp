// Name: shape_superopt.cpp_CObj_getVertex_FUN_005d3320
// Address: 005d3320
// Address Range: [[005d3320, 005d3340]]
// Convention: __cdecl
// Signature: CVert * __cdecl shape_superopt_cpp_CObj_getVertex_FUN_005d3320(CObj *this_ptr,uint index)

#include "nocturne.h"

CVert * __cdecl shape_superopt_cpp_CObj_getVertex_FUN_005d3320(CObj *this_ptr,uint index)

{
  if ((uint)this_ptr->vertex_count < index) {
    return (CVert *)0x0;
  }
  return this_ptr->vertex_data + index;
}
