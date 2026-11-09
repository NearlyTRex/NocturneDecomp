// Name: core_hotdemon.cpp_CHotDemon_getDeathState_FUN_004d5f30
// Address: 004d5f30
// Address Range: [[004d5f30, 004d5f62]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_hotdemon_cpp_CHotDemon_getDeathState_FUN_004d5f30(CHotDemon *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_hotdemon_cpp_CHotDemon_getDeathState_FUN_004d5f30(CHotDemon *this_ptr)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
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
