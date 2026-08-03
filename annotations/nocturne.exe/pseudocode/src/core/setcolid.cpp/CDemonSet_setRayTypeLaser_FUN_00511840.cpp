// Name: core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00511840
// Address: 00511840
// Address Range: [[00511840, 00511876]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00511840(CDemonSet *this_ptr,int laser_type,int color_r,int color_g,int color_b)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00511840(CDemonSet *this_ptr,int laser_type,int color_r,int color_g,int color_b)

{
  (this_ptr->ray_query).ray_type = 3;
  (this_ptr->ray_query).laser_type = laser_type;
  (this_ptr->ray_query).laser_color.r = color_r;
  (this_ptr->ray_query).laser_color.g = color_g;
  (this_ptr->ray_query).laser_color.b = color_b;
  return;
}
