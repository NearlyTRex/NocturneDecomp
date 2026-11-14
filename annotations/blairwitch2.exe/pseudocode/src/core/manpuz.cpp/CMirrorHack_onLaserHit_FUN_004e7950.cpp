// Name: core_manpuz.cpp_CMirrorHack_onLaserHit_FUN_004e7950
// Address: 004e7950
// Address Range: [[004e7950, 004e797b]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_onLaserHit_FUN_004e7950(CMirrorHack *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMirrorHack_onLaserHit_FUN_004e7950(CMirrorHack *this_ptr,SLaserInfo *laser_info)

{
  core_actor_cpp_CDemonActor_onLaserHit_FUN_00409830(&this_ptr->base,laser_info);
  if ((laser_info->local_hit_position).z <= (float)_DAT_005dc73d) {
    return;
  }
  laser_info->transparency = 1.0;
  return;
}
