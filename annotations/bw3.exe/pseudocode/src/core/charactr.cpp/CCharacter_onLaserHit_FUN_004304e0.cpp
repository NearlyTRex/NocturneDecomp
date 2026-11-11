// Name: core_charactr.cpp_CCharacter_onLaserHit_FUN_004304e0
// Address: 004304e0
// Address Range: [[004304e0, 0043051d]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_onLaserHit_FUN_004304e0(CCharacter *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_onLaserHit_FUN_004304e0(CCharacter *this_ptr,SLaserInfo *laser_info)

{
  float fVar1;
  
  core_actor_cpp_CDemonActor_onLaserHit_FUN_004096c0(&this_ptr->base,laser_info);
  if (this_ptr->is_spectral == 0) {
    return;
  }
  laser_info->transparency = 0.0;
  fVar1 = (float)_DAT_005b83a6;
  laser_info->reflectivity = 0.9;
  laser_info->stored_angle = laser_info->incidence_angle * fVar1;
  return;
}
