// Name: core_emitter.cpp_SLaserInfo_copy_FUN_004a9410
// Address: 004a9410
// Address Range: [[004a9410, 004a94b7]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_SLaserInfo_copy_FUN_004a9410(SLaserInfo *this_ptr,SLaserInfo *copy)

#include "nocturne.h"

void __cdecl core_emitter_cpp_SLaserInfo_copy_FUN_004a9410(SLaserInfo *this_ptr,SLaserInfo *copy)

{
  this_ptr->intensity = copy->intensity;
  this_ptr->beam_width = copy->beam_width;
  this_ptr->laser_type = copy->laser_type;
  (this_ptr->color).r = (copy->color).r;
  (this_ptr->color).g = (copy->color).g;
  (this_ptr->color).b = (copy->color).b;
  this_ptr->is_hero_weapon = copy->is_hero_weapon;
  this_ptr->is_damaging = copy->is_damaging;
  (this_ptr->local_origin).x = (copy->local_origin).x;
  (this_ptr->local_origin).y = (copy->local_origin).y;
  (this_ptr->local_origin).z = (copy->local_origin).z;
  (this_ptr->local_hit_position).x = (copy->local_hit_position).x;
  (this_ptr->local_hit_position).y = (copy->local_hit_position).y;
  (this_ptr->local_hit_position).z = (copy->local_hit_position).z;
  (this_ptr->local_normal).x = (copy->local_normal).x;
  (this_ptr->local_normal).y = (copy->local_normal).y;
  (this_ptr->local_normal).z = (copy->local_normal).z;
  this_ptr->incidence_angle = copy->incidence_angle;
  this_ptr->reflectivity = copy->reflectivity;
  this_ptr->stored_angle = copy->stored_angle;
  this_ptr->transparency = copy->transparency;
  return;
}
