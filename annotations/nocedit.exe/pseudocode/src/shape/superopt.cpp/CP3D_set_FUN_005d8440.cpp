// Name: shape_superopt.cpp_CP3D_set_FUN_005d8440
// Address: 005d8440
// Address Range: [[005d8440, 005d846d]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CP3D_set_FUN_005d8440(CP3D *this_ptr,double x,double y,double z)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CP3D_set_FUN_005d8440(CP3D *this_ptr,double x,double y,double z)

{
  (this_ptr->impl).x = x;
  (this_ptr->impl).y = y;
  (this_ptr->impl).z = z;
  return;
}
