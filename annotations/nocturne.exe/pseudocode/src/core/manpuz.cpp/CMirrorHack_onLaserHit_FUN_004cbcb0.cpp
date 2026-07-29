// Name: core_manpuz.cpp_CMirrorHack_onLaserHit_FUN_004cbcb0
// Address: 004cbcb0
// Address Range: [[004cbcb0, 004cbcdb]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_onLaserHit_FUN_004cbcb0(CMirrorHack *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMirrorHack_onLaserHit_FUN_004cbcb0(CMirrorHack *this_ptr,SLaserInfo *laser_info)

{
  core_actor_cpp_FUN_0040ab10(this_ptr,laser_info);
  if ((laser_info->local_hit_position).z <= (float)-0.01) {
    return;
  }
  laser_info->transparency = 1.0;
  return;
}
