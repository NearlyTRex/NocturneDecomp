// Name: core_manpuz.cpp_CMirrorHack_updateInteraction_FUN_0050b360
// Address: 0050b360
// Address Range: [[0050b360, 0050b3b2]]
// Convention: __cdecl
// Signature: int core_manpuz.cpp_CMirrorHack_updateInteraction_FUN_0050b360(CMirrorHack * this_ptr, COrientation * user_orientation, SInteractionState * interaction_state)

#include "nocturne.h"

int __cdecl
core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_0050b360
          (CMirrorHack *this_ptr,COrientation *user_orientation,SInteractionState *interaction_state
          )

{
  COrientation *pCVar1;
  
  if (interaction_state->action_multiplier != 0.0) {
    interaction_state->action_multiplier = 0.0;
    return 0;
  }
  if (interaction_state->stop_flag == 0) {
    pCVar1 = &(this_ptr->base_actor).orient;
    if (pCVar1 != user_orientation) {
      pCVar1->pitch = user_orientation->pitch;
      (this_ptr->base_actor).orient.bank = user_orientation->bank;
      (this_ptr->base_actor).orient.heading = user_orientation->heading;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base_actor);
    return 1;
  }
  interaction_state->stop_flag = 0;
  return 0;
}
