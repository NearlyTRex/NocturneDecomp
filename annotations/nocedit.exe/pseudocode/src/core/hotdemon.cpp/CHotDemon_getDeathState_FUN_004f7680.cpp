// Name: core_hotdemon.cpp_CHotDemon_getDeathState_FUN_004f7680
// Address: 004f7680
// Address Range: [[004f7680, 004f76b2]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_hotdemon_cpp_CHotDemon_getDeathState_FUN_004f7680(CHotDemon *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_hotdemon_cpp_CHotDemon_getDeathState_FUN_004f7680(CHotDemon *this_ptr)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr->base).base.model.motion_controller);
  switch(pSVar1->state_index) {
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
