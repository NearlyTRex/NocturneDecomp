// Name: core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00574270
// Address: 00574270
// Address Range: [[00574270, 005742a6]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00574270(CDemonSet *this_ptr,float f1,float f2,float f3,float f4)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00574270(CDemonSet *this_ptr,float f1,float f2,float f3,float f4)

{
  this_ptr->ray_type = 3;
  this_ptr->laser_type = (int)f1;
  (this_ptr->laser_color).r = f2;
  (this_ptr->laser_color).g = f3;
  (this_ptr->laser_color).b = f4;
  return;
}
