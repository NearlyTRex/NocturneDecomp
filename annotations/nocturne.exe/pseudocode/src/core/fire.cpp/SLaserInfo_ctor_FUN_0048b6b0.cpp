// Name: core_fire.cpp_SLaserInfo_ctor_FUN_0048b6b0
// Address: 0048b6b0
// Address Range: [[0048b6b0, 0048b6ed]]
// Convention: __cdecl
// Signature: SLaserInfo * __cdecl core_fire_cpp_SLaserInfo_ctor_FUN_0048b6b0(SLaserInfo *this_ptr)

#include "nocturne.h"

SLaserInfo * __cdecl core_fire_cpp_SLaserInfo_ctor_FUN_0048b6b0(SLaserInfo *this_ptr)

{
  this_ptr->intensity = 1.0;
  this_ptr->laser_type = 0;
  (this_ptr->color).r = 0xff;
  (this_ptr->color).g = 0;
  (this_ptr->color).b = 0;
  this_ptr->is_hero_weapon = 0;
  this_ptr->is_damaging = 0;
  this_ptr->beam_width = 0.02f;
  return this_ptr;
}
