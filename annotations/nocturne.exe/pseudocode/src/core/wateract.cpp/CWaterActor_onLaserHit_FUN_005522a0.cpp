// Name: core_wateract.cpp_CWaterActor_onLaserHit_FUN_005522a0
// Address: 005522a0
// Address Range: [[005522a0, 005522c2]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_onLaserHit_FUN_005522a0(CWaterActor *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_onLaserHit_FUN_005522a0(CWaterActor *this_ptr,SLaserInfo *laser_info)

{
  core_actor_cpp_CDemonActor_onLaserHit_FUN_0040ab10(this_ptr,laser_info);
  laser_info->transparency = 0.3;
  laser_info->reflectivity = 0.8;
  return;
}
