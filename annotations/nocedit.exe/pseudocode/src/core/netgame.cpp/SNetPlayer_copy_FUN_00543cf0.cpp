// Name: core_netgame.cpp_SNetPlayer_copy_FUN_00543cf0
// Address: 00543cf0
// Address Range: [[00543cf0, 00543dad] [006049ea, 00604a0c]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_SNetPlayer_copy_FUN_00543cf0(SNetPlayer *this_ptr,SNetPlayer *other)

#include "nocturne.h"

void __cdecl core_netgame_cpp_SNetPlayer_copy_FUN_00543cf0(SNetPlayer *this_ptr,SNetPlayer *other)

{
  *(uint *)this_ptr->name = *(uint *)other->name;
  *(uint *)(this_ptr->name + 4) = *(uint *)(other->name + 4);
  *(uint *)(this_ptr->name + 8) = *(uint *)(other->name + 8);
  *(uint *)(this_ptr->name + 0xc) = *(uint *)(other->name + 0xc);
  *(uint *)(this_ptr->name + 0x10) = *(uint *)(other->name + 0x10);
  this_ptr->hero_number = other->hero_number;
  this_ptr->aim_mode = other->aim_mode;
  (this_ptr->addr).ip_address = (other->addr).ip_address;
  (this_ptr->addr).port = (other->addr).port;
  this_ptr->last_arrival_time = other->last_arrival_time;
  this_ptr->ping_quality = other->ping_quality;
  this_ptr->last_ping_sent = other->last_ping_sent;
  this_ptr->last_ping_response = other->last_ping_response;
  this_ptr->player_id = other->player_id;
  this_ptr->last_update_time = other->last_update_time;
  this_ptr->local_sync_stage = other->local_sync_stage;
  this_ptr->state_change_time = other->state_change_time;
  this_ptr->ready_flag = other->ready_flag;
  this_ptr->sim_frame_index = other->sim_frame_index;
  (this_ptr->controls).action_bindings.walk_key = (other->controls).action_bindings.walk_key;
  (this_ptr->controls).action_bindings.backup_key = (other->controls).action_bindings.backup_key;
  (this_ptr->controls).action_bindings.run_key = (other->controls).action_bindings.run_key;
  (this_ptr->controls).action_bindings.fire_key = (other->controls).action_bindings.fire_key;
  (this_ptr->controls).action_bindings.use_item_key = (other->controls).action_bindings.use_item_key
  ;
  (this_ptr->controls).action_bindings.light_key = (other->controls).action_bindings.light_key;
  (this_ptr->controls).action_bindings.draw_key = (other->controls).action_bindings.draw_key;
  (this_ptr->controls).action_bindings.jump_key = (other->controls).action_bindings.jump_key;
  (this_ptr->controls).strafe_speed = (other->controls).strafe_speed;
  (this_ptr->controls).turn_speed = (other->controls).turn_speed;
  (this_ptr->controls).look_up_down_speed = (other->controls).look_up_down_speed;
  return;
}
