// Name: core_wateract.cpp_CWaterActor_onLaserHit_FUN_00587b60
// Address: 00587b60
// Address Range: [[00587b60, 00587b82]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_onLaserHit_FUN_00587b60(CWaterActor *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_onLaserHit_FUN_00587b60(CWaterActor *this_ptr,SLaserInfo *laser_info)

{
  core_actor_cpp_CDemonActor_onLaserHit_FUN_00409830(&this_ptr->base,laser_info);
  *(uint *)(laser_info + 0x50) = 0x3e99999a;
  *(uint *)(laser_info + 0x48) = 0x3f4ccccd;
  return;
}
