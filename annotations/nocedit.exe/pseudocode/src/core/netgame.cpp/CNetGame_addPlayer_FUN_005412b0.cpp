// Name: core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0
// Address: 005412b0
// Address Range: [[005412b0, 0054138f] [0060c4b2, 0060c4cd]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0(CNetGame *this_ptr,SNetworkAddr *addr,char *name,int hero_number,int aim_mode)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0(CNetGame *this_ptr,SNetworkAddr *addr,char *name,int hero_number,int aim_mode)

{
  char cVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  SNetPlayer *dest;
  SNetPlayer *pSVar6;
  
  if (1 < this_ptr->player_count) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 1535;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::addPlayer - too many players!");
  }
  iVar2 = this_ptr->player_count;
  dest = this_ptr->players + iVar2;
  this_ptr->player_count = iVar2 + 1;
  memset(dest,0,0x78);
  pSVar6 = dest;
  do {
    cVar1 = *name;
    pSVar6->name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = name[1];
    name = name + 2;
    pSVar6->name[1] = cVar1;
    pSVar6 = (SNetPlayer *)(pSVar6->name + 2);
  } while (cVar1 != '\0');
  (dest->addr).ip_address = addr->ip_address;
  uVar3 = addr->other;
  (dest->addr).port = addr->port;
  (dest->addr).other = uVar3;
  dest->ping_quality = -1.0;
  dest->ready_flag = 0;
  dest->state_change_time = 0;
  dest->local_sync_stage = 0;
  dest->hero_number = hero_number;
  dest->aim_mode = aim_mode;
  uVar5 = g_CurrentGameTime;
  dest->last_arrival_time = g_CurrentGameTime;
  uVar5 = uVar5 - 0x1e0000;
  dest->last_ping_sent = uVar5;
  dest->last_ping_response = uVar5;
  iVar4 = INT_02f7c8c4;
  dest->last_update_time = uVar5;
  dest->player_id = iVar4 + -1;
  return iVar2;
}
