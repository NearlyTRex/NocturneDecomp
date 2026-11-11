// Name: core_fire.cpp_SLaserInfo_ctor_FUN_0049dae0
// Address: 0049dae0
// Address Range: [[0049dae0, 0049db1d]]
// Convention: __cdecl
// Signature: SLaserInfo * __cdecl core_fire_cpp_SLaserInfo_ctor_FUN_0049dae0(SLaserInfo *this_ptr)

#include "nocturne.h"

SLaserInfo * __cdecl core_fire_cpp_SLaserInfo_ctor_FUN_0049dae0(SLaserInfo *this_ptr)

{
  this_ptr->intensity = 1.0;
  this_ptr->laser_type = 0;
  (this_ptr->color).r = 0xff;
  (this_ptr->color).g = 0;
  (this_ptr->color).b = 0;
  this_ptr->is_hero_weapon = 0;
  this_ptr->is_damaging = 0;
  this_ptr->beam_width = 0x3CA3D70A;
  return this_ptr;
}
