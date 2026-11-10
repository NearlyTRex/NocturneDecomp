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
  if (*(int *)&this_ptr->field_0x27a8 == 0) {
    return;
  }
  *(uint *)(laser_info + 0x50) = 0;
  fVar1 = (float)_DAT_005b83a6;
  *(uint *)(laser_info + 0x48) = 0x3f666666;
  *(float *)(laser_info + 0x4c) = *(float *)(laser_info + 0x44) * fVar1;
  return;
}
