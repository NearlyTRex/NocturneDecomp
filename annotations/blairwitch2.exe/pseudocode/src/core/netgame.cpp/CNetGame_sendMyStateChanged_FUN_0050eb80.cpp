// Name: core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_0050eb80
// Address: 0050eb80
// Address Range: [[0050eb80, 0050ecac]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_0050eb80(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_0050eb80(CNetGame *this_ptr)

{
  char cVar1;
  int iVar2;
  int iVar3;
  SNetPlayer *pSVar4;
  char *pcVar5;
  SNetPacketHeader local_3c;
  uint local_37;
  char local_33 [20];
  int local_1f;
  EHeroType local_1b;
  int local_17;
  
  if ((this_ptr->connection_type != CONNECTION_CLIENT) || (this_ptr->network_mode != NET_MODE_LOBBY)
     ) {
    g_CHAR_PTR_01d046a0 = "..\\core\\netgame.cpp";
    g_INT_01d046a4 = 0x8d0;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CNetGame::sendMyStateChanged - should only call this in client lobby mode");
  }
  iVar2 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  iVar3 = iVar2 / 0x12 - g_INT_01d34e34;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_UINT_01d34e38 = g_UINT_01d34e38 + iVar3;
  local_3c.size = 0x29;
  local_3c.type = PACKET_PLAYER_STATE;
  local_1f = this_ptr->players[this_ptr->local_player_index].ready_flag;
  local_1b = this_ptr->players[this_ptr->local_player_index].hero_number;
  local_17 = this_ptr->players[this_ptr->local_player_index].aim_mode;
  pcVar5 = local_33;
  pSVar4 = this_ptr->players + this_ptr->local_player_index;
  do {
    cVar1 = pSVar4->name[0];
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pSVar4->name[1];
    pSVar4 = (SNetPlayer *)(pSVar4->name + 2);
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  g_INT_01d34e34 = iVar2 / 0x12;
  local_37 = g_UINT_01d34e38;
  core_netgame_cpp_CNetGame_send_FUN_0050cd90(this_ptr,this_ptr->server_player_index,&local_3c);
  g_INT_0061b124 = 1;
  this_ptr->players[this_ptr->local_player_index].state_change_time = g_UINT_01d34e38;
  return;
}
