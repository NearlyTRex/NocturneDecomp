// Name: core_actor.cpp_CDemonActor_onLaserHit_FUN_00409840
// Address: 00409840
// Address Range: [[00409840, 00409871]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840(CDemonActor *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840(CDemonActor *this_ptr,SLaserInfo *laser_info)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x495);
  laser_info->reflectivity = 0.0;
  laser_info->transparency = 0.0;
  laser_info->stored_angle = laser_info->incidence_angle;
  return;
}
