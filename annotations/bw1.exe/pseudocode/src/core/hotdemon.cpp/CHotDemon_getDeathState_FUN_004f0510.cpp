// Name: core_hotdemon.cpp_CHotDemon_getDeathState_FUN_004f0510
// Address: 004f0510
// Address Range: [[004f0510, 004f0542]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_hotdemon_cpp_CHotDemon_getDeathState_FUN_004f0510(CHotDemon *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_hotdemon_cpp_CHotDemon_getDeathState_FUN_004f0510(CHotDemon *this_ptr)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&this_ptr->field_0x158);
  switch(*(uint *)(pSVar1 + 0x24)) {
  case 4:
  case 10:
    return DEATH_STATE_DYING;
  case 5:
  case 0xb:
    return DEATH_STATE_DEAD;
  default:
    return DEATH_STATE_ALIVE;
  }
}
