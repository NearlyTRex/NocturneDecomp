// Name: shape_superopt.cpp_CObj_free_FUN_005d2600
// Address: 005d2600
// Address Range: [[005d2600, 005d2642]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_free_FUN_005d2600(CObj *this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_free_FUN_005d2600(CObj *this_ptr)

{
  if (this_ptr->vertex_data != (CVert *)0x0) {
    crt_memory_c_free_FUN_00601cd0(this_ptr->vertex_data);
  }
  this_ptr->vertex_data = (CVert *)0x0;
  if (this_ptr->poly_array == (CPoly *)0x0) {
    this_ptr->poly_array = (CPoly *)0x0;
    return;
  }
  crt_memory_c_free_FUN_00601cd0(this_ptr->poly_array);
  this_ptr->poly_array = (CPoly *)0x0;
  return;
}
