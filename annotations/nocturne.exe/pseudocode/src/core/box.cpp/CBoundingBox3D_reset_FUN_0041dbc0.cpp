// Name: core_box.cpp_CBoundingBox3D_reset_FUN_0041dbc0
// Address: 0041dbc0
// Address Range: [[0041dbc0, 0041dbe6]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBoundingBox3D_reset_FUN_0041dbc0(CBoundingBox3D *this_ptr)

#include "nocturne.h"

void __cdecl core_box_cpp_CBoundingBox3D_reset_FUN_0041dbc0(CBoundingBox3D *this_ptr)

{
  float fVar1;
  
  (this_ptr->min).z = 1e+37;
  (this_ptr->max).z = -1e+37;
  fVar1 = (this_ptr->max).z;
  (this_ptr->min).y = (this_ptr->min).z;
  (this_ptr->max).y = fVar1;
  (this_ptr->min).x = (this_ptr->min).y;
  (this_ptr->max).x = fVar1;
  return;
}
