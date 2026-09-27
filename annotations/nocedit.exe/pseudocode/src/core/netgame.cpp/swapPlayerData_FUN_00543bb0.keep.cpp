// Name: core_netgame.cpp_swapPlayerData_FUN_00543bb0
// Address: 00543bb0
// MANUAL RECONSTRUCTION
// Address Range: [[00543bb0, 00543ca8] [006049c7, 006049e9] [03fc5b24, 03fc5b39]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_swapPlayerData_FUN_00543bb0(SNetPlayer *player,SNetPlayer *other)

#include "nocturne.h"

void __cdecl core_netgame_cpp_swapPlayerData_FUN_00543bb0(SNetPlayer *player,SNetPlayer *other)

{
  SNetPlayer temp;

  memcpy(temp.name,player->name,sizeof(temp.name));
  temp.hero_number = player->hero_number;
  temp.aim_mode = player->aim_mode;
  core_netgame_cpp_assignInt2_FUN_00543e30((int *)&temp.addr.ip_address,
                                           (int *)&(player->addr).ip_address);
  temp.addr.port = (player->addr).port;
  memcpy(&temp.last_arrival_time,&player->last_arrival_time,
         sizeof(SNetPlayer) - offsetof(SNetPlayer,last_arrival_time));
  *player = *other;
  *other = temp;
  return;
}
