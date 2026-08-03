// Name: core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_004ed170
// Address: 004ed170
// Address Range: [[004ed170, 004ed2c4]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_004ed170(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_004ed170(CNetGame *this_ptr)

{
  char cVar1;
  int iVar2;
  SNetPlayer *pSVar3;
  char *pcVar4;
  SNetPacketHeader local_3c;
  uint local_37;
  char local_33 [20];
  int local_1f;
  EHeroType local_1b;
  int local_17;
  
  if ((this_ptr->connection_type != CONNECTION_CLIENT) || (this_ptr->network_mode != NET_MODE_LOBBY)
     ) {
    g_CHAR_PTR_01cc4800 = "..\\core\\netgame.cpp";
    g_INT_01cc4804 = 0x8d0;
    core_main_c_FUN_004c8440("CNetGame::sendMyStateChanged - should only call this in client lobby mode");
  }
  iVar2 = wincore_winrun_cpp_getTime_FUN_00558a30();
  _DAT_01cea3f4 = iVar2 / 0x12 - _DAT_01cea3f4;
  if (_DAT_01cea3f4 < 0) {
    _DAT_01cea3f4 = 0;
  }
  else if (0x20000 < _DAT_01cea3f4) {
    _DAT_01cea3f4 = 0x20000;
  }
  _DAT_01cea3f8 = _DAT_01cea3f8 + _DAT_01cea3f4;
  local_3c.size = 0x29;
  local_3c.type = PACKET_PLAYER_STATE;
  local_1f = this_ptr->players[this_ptr->local_player_index].ready_flag;
  local_1b = this_ptr->players[this_ptr->local_player_index].hero_number;
  local_17 = this_ptr->players[this_ptr->local_player_index].aim_mode;
  pcVar4 = local_33;
  pSVar3 = this_ptr->players + this_ptr->local_player_index;
  do {
    cVar1 = pSVar3->name[0];
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pSVar3->name[1];
    pSVar3 = (SNetPlayer *)(pSVar3->name + 2);
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  _DAT_01cea3f4 = iVar2 / 0x12;
  local_37 = _DAT_01cea3f8;
  core_netgame_cpp_CNetGame_send_FUN_004eb350(this_ptr,this_ptr->server_player_index,&local_3c);
  g_INT_005bdee4 = 1;
  this_ptr->players[this_ptr->local_player_index].state_change_time = _DAT_01cea3f8;
  return;
}
