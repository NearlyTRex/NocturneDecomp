// Name: core_manpuz.cpp_CMirrorHack_updateInteraction_FUN_0050b360
// Address: 0050b360
// MANUAL RECONSTRUCTION
// Address Range: [[0050b360, 0050b3b2]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_0050b360(CMirrorHack *this_ptr,UOrientationVector *user_orientation,SPlayerInput *player_control)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_0050b360(CMirrorHack *this_ptr,UOrientationVector *user_orientation,SPlayerInput *player_control)

{
  UOrientationVector *pUVar1;
  
  if ((player_control->action_state).fire != 0) {
    (player_control->action_state).fire = 0;
    return 0;
  }
  if ((player_control->action_state).use_item == 0) {
    pUVar1 = &(this_ptr->base).orient;
    if (pUVar1 != user_orientation) {
      *pUVar1 = *user_orientation;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
    return 1;
  }
  (player_control->action_state).use_item = 0;
  return 0;
}
