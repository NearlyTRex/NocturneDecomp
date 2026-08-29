// Name: core_netgame.cpp_swapPlayerData_FUN_00543bb0
// Address: 00543bb0
// Address Range: [[00543bb0, 00543ca8] [006049c7, 006049e9] [03fc5b24, 03fc5b39]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_swapPlayerData_FUN_00543bb0(SNetPlayer *player,SNetPlayer *other)

#include "nocturne.h"

void __cdecl core_netgame_cpp_swapPlayerData_FUN_00543bb0(SNetPlayer *player,SNetPlayer *other)

{
  int iVar1;
  SNetPlayer *pSVar2;
  EConnectionType *pEVar3;
  byte bVar4;
  EConnectionType EStack_88;
  ENetworkMode EStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  EHeroType local_74;
  int local_70;
  int local_6c;
  ushort local_68;
  uint local_64;
  float local_60;
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
  
  bVar4 = 0;
  EStack_88 = *(EConnectionType *)player->name;
  EStack_84 = *(ENetworkMode *)(player->name + 4);
  uStack_80 = *(uint *)(player->name + 8);
  uStack_7c = *(uint *)(player->name + 0xc);
  uStack_78 = *(uint *)(player->name + 0x10);
  local_74 = player->hero_number;
  local_70 = player->aim_mode;
  core_netgame_cpp_assignInt2_FUN_00543e30(&local_6c,(int *)&player->addr);
  local_68 = (player->addr).port;
  local_64 = player->last_arrival_time;
  local_60 = player->ping_quality;
  local_5c = player->last_ping_sent;
  local_58 = player->last_ping_response;
  local_54 = player->player_id;
  local_50 = player->last_update_time;
  local_4c = player->local_sync_stage;
  local_48 = player->state_change_time;
  local_44 = player->ready_flag;
  local_40 = (float)player->sim_frame_index;
  local_3c = (player->player_input).action_state.walk;
  local_38 = (player->player_input).action_state.backup;
  local_34 = (player->player_input).action_state.run;
  local_30 = (player->player_input).action_state.fire;
  local_2c = (player->player_input).action_state.use_item;
  local_28 = (player->player_input).action_state.light;
  local_24 = (player->player_input).action_state.draw;
  local_20 = (player->player_input).action_state.jump;
  local_1c = (int)(player->player_input).strafe_speed;
  local_18 = (int)(player->player_input).turn_speed;
  local_14 = (int)(player->player_input).look_up_down_speed;
  pSVar2 = other;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)player->name = *(uint *)pSVar2->name;
    pSVar2 = (SNetPlayer *)((int)pSVar2 + (uint)bVar4 * -8 + 4);
    player = (SNetPlayer *)((int)player + (uint)bVar4 * -8 + 4);
  }
  pEVar3 = &EStack_88;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(EConnectionType *)other->name = *pEVar3;
    pEVar3 = pEVar3 + (uint)bVar4 * -2 + 1;
    other = (SNetPlayer *)((int)other + (uint)bVar4 * -8 + 4);
  }
  return;
}
