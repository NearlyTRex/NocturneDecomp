// Name: core_turret.cpp_CTurret_updateInteraction_FUN_005e34d0
// Address: 005e34d0
// Address Range: [[005e34d0, 005e3530]]
// Convention: __cdecl
// Signature: int __cdecl core_turret_cpp_CTurret_updateInteraction_FUN_005e34d0(CTurret *this_ptr,UOrientationVector *user_orientation,SPlayerControl *player_control )

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_updateInteraction_FUN_005e34d0(CTurret *this_ptr,UOrientationVector *user_orientation,SPlayerControl *player_control )

{
  UOrientationVector *pUVar1;
  
  if (player_control->action_states[4] == 0) {
    pUVar1 = &(this_ptr->base).base.orient;
    if (pUVar1 != user_orientation) {
      (pUVar1->vec).x = (user_orientation->vec).x;
      (this_ptr->base).base.orient.vec.y = (user_orientation->vec).y;
      (this_ptr->base).base.orient.vec.z = (user_orientation->vec).z;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    if (player_control->action_states[3] != 0) {
      (*(((this_ptr->base).base.vtable._uw)->_uw).fire)(&this_ptr->base);
    }
    return 1;
  }
  player_control->action_states[4] = 0;
  return 0;
}
