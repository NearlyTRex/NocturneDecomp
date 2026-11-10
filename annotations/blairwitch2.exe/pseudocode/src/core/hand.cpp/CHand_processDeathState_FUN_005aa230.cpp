// Name: core_hand.cpp_CHand_processDeathState_FUN_005aa230
// Address: 005aa230
// Address Range: [[005aa230, 005aa250]]
// Convention: __cdecl
// Signature: void __cdecl core_hand_cpp_CHand_processDeathState_FUN_005aa230(CHand *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_hand_cpp_CHand_processDeathState_FUN_005aa230(CHand *this_ptr,float delta_time)

{
  *(uint *)&this_ptr->field_0x342c = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,0,1);
  return;
}
