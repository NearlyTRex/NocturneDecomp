// Name: shape_superopt.cpp_CP3D_copy_FUN_005d8470
// Address: 005d8470
// Address Range: [[005d8470, 005d849a]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CP3D_copy_FUN_005d8470(CP3D *this_ptr,CP3D *other)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CP3D_copy_FUN_005d8470(CP3D *this_ptr,CP3D *other)

{
  *(uint *)&(this_ptr->impl).x = *(uint *)&(other->impl).x;
  *(uint *)((int)&(this_ptr->impl).x + 4) = *(uint *)((int)&(other->impl).x + 4);
  *(uint *)&(this_ptr->impl).y = *(uint *)&(other->impl).y;
  *(uint *)((int)&(this_ptr->impl).y + 4) = *(uint *)((int)&(other->impl).y + 4);
  *(uint *)&(this_ptr->impl).z = *(uint *)&(other->impl).z;
  *(uint *)((int)&(this_ptr->impl).z + 4) = *(uint *)((int)&(other->impl).z + 4);
  return;
}
