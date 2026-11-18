// Name: core_set.cpp_CDemonSet_setSunlight_FUN_00555930
// Address: 00555930
// Address Range: [[00555930, 0055596b]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setSunlight_FUN_00555930(CDemonSet *this_ptr,float dir_x,float dir_y,float dir_z,float intensity)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setSunlight_FUN_00555930(CDemonSet *this_ptr,float dir_x,float dir_y,float dir_z,float intensity)

{
  if (&this_ptr->directional_light_dir == (CVector3f *)&dir_x) {
    this_ptr->directional_light_intensity = intensity;
    return;
  }
  (this_ptr->directional_light_dir).x = dir_x;
  (this_ptr->directional_light_dir).y = dir_y;
  (this_ptr->directional_light_dir).z = dir_z;
  this_ptr->directional_light_intensity = intensity;
  return;
}
