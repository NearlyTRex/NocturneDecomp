// Name: core_wateract.cpp_CWaterActor_onLaserHit_FUN_00587b60
// Address: 00587b60
// Address Range: [[00587b60, 00587b82]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_onLaserHit_FUN_00587b60(CWaterActor *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_onLaserHit_FUN_00587b60(CWaterActor *this_ptr,SLaserInfo *laser_info)

{
  core_actor_cpp_CDemonActor_onLaserHit_FUN_00409830(&this_ptr->base,laser_info);
  laser_info->transparency = 0.3;
  laser_info->reflectivity = 0.8;
  return;
}
