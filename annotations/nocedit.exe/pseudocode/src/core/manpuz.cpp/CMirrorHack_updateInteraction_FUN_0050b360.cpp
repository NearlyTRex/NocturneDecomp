// Name: core_manpuz.cpp_CMirrorHack_updateInteraction_FUN_0050b360
// Address: 0050b360
// Address Range: [[0050b360, 0050b3b2]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_0050b360(CMirrorHack *this_ptr,UOrientationVector *user_orientation,SPlayerControl *player_control)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_0050b360(CMirrorHack *this_ptr,UOrientationVector *user_orientation,SPlayerControl *player_control)

{
  UOrientationVector *pUVar1;
  
  if ((player_control->action_bindings).fire_key != 0) {
    (player_control->action_bindings).fire_key = 0;
    return 0;
  }
  if ((player_control->action_bindings).use_item_key == 0) {
    pUVar1 = &(this_ptr->base).orient;
    if (pUVar1 != user_orientation) {
      (pUVar1->vec).x = (user_orientation->vec).x;
      (this_ptr->base).orient.vec.y = (user_orientation->vec).y;
      (this_ptr->base).orient.vec.z = (user_orientation->vec).z;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
    return 1;
  }
  (player_control->action_bindings).use_item_key = 0;
  return 0;
}
