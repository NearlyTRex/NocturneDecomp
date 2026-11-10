// Name: core_actor.cpp_CDemonActor_onLaserHit_FUN_00409830
// Address: 00409830
// Address Range: [[00409830, 0040984f]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_onLaserHit_FUN_00409830(CDemonActor *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_onLaserHit_FUN_00409830(CDemonActor *this_ptr,SLaserInfo *laser_info)

{
  *(uint *)(laser_info + 0x48) = 0;
  *(uint *)(laser_info + 0x50) = 0;
  *(uint *)(laser_info + 0x4c) = *(uint *)(laser_info + 0x44);
  return;
}
