// Name: core_turret.cpp_CTurret_updateInteraction_FUN_005e34d0
// Address: 005e34d0
// Address Range: [[005e34d0, 005e3530]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_updateInteraction_FUN_005e34d0 (CTurret *this_ptr,COrientation *user_orientation,SInteractionState *interaction_state)

#include "nocturne.h"

int __cdecl
core_turret_cpp_CTurret_updateInteraction_FUN_005e34d0
          (CTurret *this_ptr,COrientation *user_orientation,SInteractionState *interaction_state)

{
  COrientation *pCVar1;
  
  if (interaction_state->stop_flag == 0) {
    pCVar1 = &(this_ptr->base).base.orient;
    if (pCVar1 != user_orientation) {
      pCVar1->pitch = user_orientation->pitch;
      (this_ptr->base).base.orient.bank = user_orientation->bank;
      (this_ptr->base).base.orient.heading = user_orientation->heading;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    if (interaction_state->action_multiplier != 0.0) {
      (*(((this_ptr->base).base.vtable._uc)->_uc).cfunc4)();
    }
    return 1;
  }
  interaction_state->stop_flag = 0;
  return 0;
}
