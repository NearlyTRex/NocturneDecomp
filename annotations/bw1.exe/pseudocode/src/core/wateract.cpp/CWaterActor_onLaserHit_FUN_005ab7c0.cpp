// Name: core_wateract.cpp_CWaterActor_onLaserHit_FUN_005ab7c0
// Address: 005ab7c0
// Address Range: [[005ab7c0, 005ab7e2]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_onLaserHit_FUN_005ab7c0(CWaterActor *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_onLaserHit_FUN_005ab7c0(CWaterActor *this_ptr,SLaserInfo *laser_info)

{
  core_actor_cpp_CDemonActor_onLaserHit_FUN_00409680(&this_ptr->base,laser_info);
  *(uint *)(laser_info + 0x50) = 0x3e99999a;
  *(uint *)(laser_info + 0x48) = 0x3f4ccccd;
  return;
}
