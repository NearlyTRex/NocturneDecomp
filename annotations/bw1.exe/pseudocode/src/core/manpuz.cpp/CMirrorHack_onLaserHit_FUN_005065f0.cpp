// Name: core_manpuz.cpp_CMirrorHack_onLaserHit_FUN_005065f0
// Address: 005065f0
// Address Range: [[005065f0, 0050661b]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_onLaserHit_FUN_005065f0(CMirrorHack *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMirrorHack_onLaserHit_FUN_005065f0(CMirrorHack *this_ptr,SLaserInfo *laser_info)

{
  core_actor_cpp_CDemonActor_onLaserHit_FUN_00409680(&this_ptr->base,laser_info);
  if (*(float *)(laser_info + 0x34) <= (float)_DAT_005e768d) {
    return;
  }
  *(uint *)(laser_info + 0x50) = 0x3f800000;
  return;
}
