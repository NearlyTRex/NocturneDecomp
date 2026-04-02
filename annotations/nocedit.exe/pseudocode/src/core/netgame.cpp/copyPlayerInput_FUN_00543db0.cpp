// Name: core_netgame.cpp_copyPlayerInput_FUN_00543db0
// Address: 00543db0
// Address Range: [[00543db0, 00543df8]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_copyPlayerInput_FUN_00543db0(SPlayerInput *dest,SPlayerInput *src)

#include "nocturne.h"

void __cdecl core_netgame_cpp_copyPlayerInput_FUN_00543db0(SPlayerInput *dest,SPlayerInput *src)

{
  (dest->action_state).walk = (src->action_state).walk;
  (dest->action_state).backup = (src->action_state).backup;
  (dest->action_state).run = (src->action_state).run;
  (dest->action_state).fire = (src->action_state).fire;
  (dest->action_state).use_item = (src->action_state).use_item;
  (dest->action_state).light = (src->action_state).light;
  (dest->action_state).draw = (src->action_state).draw;
  (dest->action_state).jump = (src->action_state).jump;
  dest->strafe_speed = src->strafe_speed;
  dest->turn_speed = src->turn_speed;
  dest->look_up_down_speed = src->look_up_down_speed;
  return;
}
