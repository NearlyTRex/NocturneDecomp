// Name: core_netgame.cpp_CNetGame_addPlayer_FUN_004eb440
// Address: 004eb440
// Address Range: [[004eb440, 004eb51f]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_addPlayer_FUN_004eb440(CNetGame *this_ptr,SNetworkAddr *addr,char *name,int hero_number,int aim_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_CNetGame_addPlayer_FUN_004eb440(CNetGame *this_ptr,SNetworkAddr *addr,char *name,int hero_number,int aim_mode)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  SNetPlayer *dest;
  SNetPlayer *pSVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (1 < this_ptr->player_count) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 1535;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CNetGame::addPlayer - too many players!");
  }
  iVar2 = this_ptr->player_count;
  dest = this_ptr->players + iVar2;
  this_ptr->player_count = iVar2 + 1;
  memset(dest,0,0x78);
  pSVar5 = dest;
  do {
    cVar1 = *name;
    pSVar5->name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = name[1];
    name = name + 2;
    pSVar5->name[1] = cVar1;
    pSVar5 = (SNetPlayer *)(pSVar5->name + 2);
  } while (cVar1 != '\0');
  (dest->addr).ip_address = addr->ip_address;
  *(uint *)((int)dest + (uint)bVar6 * -8 + 0x20) = *(uint *)&addr[-(uint)bVar6].port;
  dest->ping_quality = -1.0;
  dest->ready_flag = 0;
  dest->state_change_time = 0;
  dest->local_sync_stage = 0;
  dest->hero_number = hero_number;
  dest->aim_mode = aim_mode;
  uVar4 = _DAT_01cea3f8;
  dest->last_arrival_time = _DAT_01cea3f8;
  uVar4 = uVar4 - 0x1e0000;
  dest->last_ping_sent = uVar4;
  dest->last_ping_response = uVar4;
  iVar3 = _DAT_01cea404;
  dest->last_update_time = uVar4;
  dest->player_id = iVar3 + -1;
  return iVar2;
}
