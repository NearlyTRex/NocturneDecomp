// Name: core_hand.cpp_CHand_processDeathState_FUN_005aa230
// Address: 005aa230
// Address Range: [[005aa230, 005aa250]]
// Convention: __cdecl
// Signature: void __cdecl core_hand_cpp_CHand_processDeathState_FUN_005aa230(CHand *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_hand_cpp_CHand_processDeathState_FUN_005aa230(CHand *this_ptr,float delta_time)

{
  (this_ptr->base).base.base.follow_leader = (CCharacter *)0x0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.model.base,0,1);
  return;
}
