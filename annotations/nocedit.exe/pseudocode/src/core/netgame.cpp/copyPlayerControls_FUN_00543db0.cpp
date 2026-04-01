// Name: core_netgame.cpp_copyPlayerControls_FUN_00543db0
// Address: 00543db0
// Address Range: [[00543db0, 00543df8]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_copyPlayerControls_FUN_00543db0(SPlayerControl *dest,SPlayerControl *src)

#include "nocturne.h"

void __cdecl core_netgame_cpp_copyPlayerControls_FUN_00543db0(SPlayerControl *dest,SPlayerControl *src)

{
  (dest->action_bindings).walk_key = (src->action_bindings).walk_key;
  (dest->action_bindings).backup_key = (src->action_bindings).backup_key;
  (dest->action_bindings).run_key = (src->action_bindings).run_key;
  (dest->action_bindings).fire_key = (src->action_bindings).fire_key;
  (dest->action_bindings).use_item_key = (src->action_bindings).use_item_key;
  (dest->action_bindings).light_key = (src->action_bindings).light_key;
  (dest->action_bindings).draw_key = (src->action_bindings).draw_key;
  (dest->action_bindings).jump_key = (src->action_bindings).jump_key;
  dest->strafe_speed = src->strafe_speed;
  dest->turn_speed = src->turn_speed;
  dest->look_up_down_speed = src->look_up_down_speed;
  return;
}
