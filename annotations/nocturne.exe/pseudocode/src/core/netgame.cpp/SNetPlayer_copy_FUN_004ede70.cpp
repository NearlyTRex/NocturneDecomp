// Name: core_netgame.cpp_SNetPlayer_copy_FUN_004ede70
// Address: 004ede70
// Address Range: [[004ede70, 004edf2d]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_SNetPlayer_copy_FUN_004ede70(SNetPlayer *this_ptr,SNetPlayer *other)

#include "nocturne.h"

void __cdecl core_netgame_cpp_SNetPlayer_copy_FUN_004ede70(SNetPlayer *this_ptr,SNetPlayer *other)

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
  (this_ptr->player_input).action_state.walk = (other->player_input).action_state.walk;
  (this_ptr->player_input).action_state.backup = (other->player_input).action_state.backup;
  (this_ptr->player_input).action_state.run = (other->player_input).action_state.run;
  (this_ptr->player_input).action_state.fire = (other->player_input).action_state.fire;
  (this_ptr->player_input).action_state.use_item = (other->player_input).action_state.use_item;
  (this_ptr->player_input).action_state.light = (other->player_input).action_state.light;
  (this_ptr->player_input).action_state.draw = (other->player_input).action_state.draw;
  (this_ptr->player_input).action_state.jump = (other->player_input).action_state.jump;
  (this_ptr->player_input).strafe_speed = (other->player_input).strafe_speed;
  (this_ptr->player_input).turn_speed = (other->player_input).turn_speed;
  (this_ptr->player_input).look_up_down_speed = (other->player_input).look_up_down_speed;
  return;
}
