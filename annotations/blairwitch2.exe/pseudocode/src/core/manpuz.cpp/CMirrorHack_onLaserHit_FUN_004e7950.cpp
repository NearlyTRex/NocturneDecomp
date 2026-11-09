// Name: core_manpuz.cpp_CMirrorHack_onLaserHit_FUN_004e7950
// Address: 004e7950
// Address Range: [[004e7950, 004e797b]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_onLaserHit_FUN_004e7950(CMirrorHack *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMirrorHack_onLaserHit_FUN_004e7950(CMirrorHack *this_ptr,SLaserInfo *laser_info)

{
  core_actor_cpp_FUN_00409830(this_ptr,laser_info);
  if (*(float *)(laser_info + 0x34) <= (float)_DAT_005dc73d) {
    return;
  }
  *(uint *)(laser_info + 0x50) = 0x3f800000;
  return;
}
