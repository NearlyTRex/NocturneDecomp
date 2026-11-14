// Name: core_actor.cpp_CDemonActor_onLaserHit_FUN_00409680
// Address: 00409680
// Address Range: [[00409680, 0040969f]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_onLaserHit_FUN_00409680(CDemonActor *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_onLaserHit_FUN_00409680(CDemonActor *this_ptr,SLaserInfo *laser_info)

{
  laser_info->reflectivity = 0.0;
  laser_info->transparency = 0.0;
  laser_info->stored_angle = laser_info->incidence_angle;
  return;
}
