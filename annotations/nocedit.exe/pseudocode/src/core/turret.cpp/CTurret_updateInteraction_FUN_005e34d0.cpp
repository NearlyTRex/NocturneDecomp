// Name: core_turret.cpp_CTurret_updateInteraction_FUN_005e34d0
// Address: 005e34d0
// Address Range: [[005e34d0, 005e3530]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_updateInteraction_FUN_005e34d0(CTurret *this_ptr,COrientation *user_orientation,SInteractionState *interaction_state )

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_updateInteraction_FUN_005e34d0(CTurret *this_ptr,COrientation *user_orientation,SInteractionState *interaction_state )

{
  UOrientationVector *pUVar1;
  
  if (interaction_state->stop_flag == 0) {
    pUVar1 = &(this_ptr->base).base.orient;
    if ((COrientation *)pUVar1 != user_orientation) {
      (pUVar1->vec).x = user_orientation->pitch;
      (this_ptr->base).base.orient.vec.y = user_orientation->bank;
      (this_ptr->base).base.orient.vec.z = user_orientation->heading;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    if (interaction_state->action_multiplier != 0.0) {
      (*(((this_ptr->base).base.vtable._uc)->_uc).isGrabbable)((CCharacter *)this_ptr);
    }
    return 1;
  }
  interaction_state->stop_flag = 0;
  return 0;
}
