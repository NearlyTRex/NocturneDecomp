// Name: core_wateract.cpp_CWaterActor_onLaserHit_FUN_005eb910
// Address: 005eb910
// Address Range: [[005eb910, 005eb932]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_onLaserHit_FUN_005eb910(CWaterActor *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_onLaserHit_FUN_005eb910(CWaterActor *this_ptr,SLaserInfo *laser_info)

{
  core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840(&this_ptr->base,laser_info);
  laser_info->transparency = 0.3;
  laser_info->reflectivity = 0.8;
  return;
}
