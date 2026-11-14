// Name: core_hand.cpp_CHand_processDamage_FUN_005aa1f0
// Address: 005aa1f0
// Address Range: [[005aa1f0, 005aa229]]
// Convention: __cdecl
// Signature: void __cdecl core_hand_cpp_CHand_processDamage_FUN_005aa1f0(CHand *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_hand_cpp_CHand_processDamage_FUN_005aa1f0(CHand *this_ptr,SDamageInfo *damage_info)

{
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.model.base,0,1);
  this_ptr->sleep_timer = this_ptr->sleep_time;
  core_muzzle_cpp_FUN_0059d8e0(&(this_ptr->base).state_machine,"Sleeping");
  return;
}
