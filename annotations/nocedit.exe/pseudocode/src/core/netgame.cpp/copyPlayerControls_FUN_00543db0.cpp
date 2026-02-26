// Name: core_netgame.cpp_copyPlayerControls_FUN_00543db0
// Address: 00543db0
// Address Range: [[00543db0, 00543df8]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_copyPlayerControls_FUN_00543db0(SPlayerControl *dest,SPlayerControl *src)

#include "nocturne.h"

void __cdecl core_netgame_cpp_copyPlayerControls_FUN_00543db0(SPlayerControl *dest,SPlayerControl *src)

{
  dest->action_states[0] = src->action_states[0];
  dest->action_states[1] = src->action_states[1];
  dest->action_states[2] = src->action_states[2];
  dest->action_states[3] = src->action_states[3];
  dest->action_states[4] = src->action_states[4];
  dest->action_states[5] = src->action_states[5];
  dest->action_states[6] = src->action_states[6];
  dest->action_states[7] = src->action_states[7];
  dest->strafe_speed = src->strafe_speed;
  dest->turn_speed = src->turn_speed;
  dest->look_up_down_speed = src->look_up_down_speed;
  return;
}
