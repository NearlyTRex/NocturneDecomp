// Name: core_manpuz.cpp_CMirrorHack_updateInteraction_FUN_004cbd50
// Address: 004cbd50
// Address Range: [[004cbd50, 004cbda2]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_004cbd50(CMirrorHack *this_ptr,UOrientationVector *user_orientation,SPlayerInput *player_control)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_004cbd50(CMirrorHack *this_ptr,UOrientationVector *user_orientation,SPlayerInput *player_control)

{
  UOrientationVector *pUVar1;
  
  if ((player_control->action_state).fire != 0) {
    (player_control->action_state).fire = 0;
    return 0;
  }
  if ((player_control->action_state).use_item == 0) {
    pUVar1 = &(this_ptr->base).orient;
    if (pUVar1 != user_orientation) {
      (pUVar1->vec).x = (user_orientation->vec).x;
      (this_ptr->base).orient.vec.y = (user_orientation->vec).y;
      (this_ptr->base).orient.vec.z = (user_orientation->vec).z;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(&this_ptr->base);
    return 1;
  }
  (player_control->action_state).use_item = 0;
  return 0;
}
