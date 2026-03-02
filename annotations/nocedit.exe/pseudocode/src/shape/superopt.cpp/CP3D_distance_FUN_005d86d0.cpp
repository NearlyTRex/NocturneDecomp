// Name: shape_superopt.cpp_CP3D_distance_FUN_005d86d0
// Address: 005d86d0
// Address Range: [[005d86d0, 005d8706]]
// Convention: __cdecl
// Signature: double __cdecl shape_superopt_cpp_CP3D_distance_FUN_005d86d0(CP3D *this_ptr,CP3D *other)

#include "nocturne.h"

double __cdecl shape_superopt_cpp_CP3D_distance_FUN_005d86d0(CP3D *this_ptr,CP3D *other)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (other->impl).x - (this_ptr->impl).x;
  dVar3 = (other->impl).y - (this_ptr->impl).y;
  dVar2 = (other->impl).z - (this_ptr->impl).z;
  return SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1);
}
