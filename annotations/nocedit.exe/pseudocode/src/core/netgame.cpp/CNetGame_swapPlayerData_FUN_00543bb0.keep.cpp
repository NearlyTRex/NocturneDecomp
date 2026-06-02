// Name: core_netgame.cpp_CNetGame_swapPlayerData_FUN_00543bb0
// Address: 00543bb0
// MANUAL RECONSTRUCTION
// Address Range: [[00543bb0, 00543ca8] [006049c7, 006049e9] [03fc5b24, 03fc5b39]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_swapPlayerData_FUN_00543bb0(CNetGame *this_ptr,SNetPlayer *other)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_swapPlayerData_FUN_00543bb0(CNetGame *this_ptr,SNetPlayer *other)

{
  EConnectionType EStack_88;
  int local_6c;
  ENetworkMode EStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint local_74;
  uint local_70;
  ushort local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  EHeroType local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  float local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  EStack_88 = this_ptr->connection_type;
  EStack_84 = this_ptr->network_mode;
  uStack_80 = *(uint *)this_ptr->player_name;
  uStack_7c = *(uint *)(this_ptr->player_name + 4);
  uStack_78 = *(uint *)(this_ptr->player_name + 8);
  local_74 = *(uint *)(this_ptr->player_name + 0xc);
  local_70 = *(uint *)(this_ptr->player_name + 0x10);
  core_netgame_cpp_assignInt2_FUN_00543e30(&local_6c,&this_ptr->player_count);
  local_68 = *(ushort *)this_ptr->players[0].name;
  local_64 = *(uint *)(this_ptr->players[0].name + 4);
  local_60 = *(uint *)(this_ptr->players[0].name + 8);
  local_5c = *(uint *)(this_ptr->players[0].name + 0xc);
  local_58 = *(uint *)(this_ptr->players[0].name + 0x10);
  local_54 = this_ptr->players[0].hero_number;
  local_50 = this_ptr->players[0].aim_mode;
  local_4c = this_ptr->players[0].addr.ip_address;
  local_48 = (uint)this_ptr->players[0].addr.port | ((uint)this_ptr->players[0].addr.other << 16);
  local_44 = this_ptr->players[0].last_arrival_time;
  local_40 = this_ptr->players[0].ping_quality;
  local_3c = this_ptr->players[0].last_ping_sent;
  local_38 = this_ptr->players[0].last_ping_response;
  local_34 = this_ptr->players[0].player_id;
  local_30 = this_ptr->players[0].last_update_time;
  local_2c = this_ptr->players[0].local_sync_stage;
  local_28 = this_ptr->players[0].state_change_time;
  local_24 = this_ptr->players[0].ready_flag;
  local_20 = this_ptr->players[0].sim_frame_index;
  local_1c = this_ptr->players[0].player_input.action_state.walk;
  local_18 = this_ptr->players[0].player_input.action_state.backup;
  local_14 = this_ptr->players[0].player_input.action_state.run;
  memcpy(&this_ptr->connection_type, other, 0x78);
  memcpy(other, &EStack_88, 0x78);
  return;
}
