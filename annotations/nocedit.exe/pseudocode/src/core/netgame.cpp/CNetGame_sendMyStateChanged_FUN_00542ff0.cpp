// Name: core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0
// Address: 00542ff0
// Address Range: [[00542ff0, 00543144]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0(CNetGame *this_ptr)

{
  char cVar1;
  int iVar2;
  int iVar3;
  SNetPlayer *pSVar4;
  char *pcVar5;
  char local_33 [20];
  uint local_1f;
  uint local_1b;
  uint local_17;
  
  if ((this_ptr->connection_type != 2) || (this_ptr->network_mode != 1)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x8d0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendMyStateChanged - should only call this in client lobby mode");
  }
  iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar3 = iVar2 / 0x12 - g_LastPingTime;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar3;
  local_1f = *(uint *)(this_ptr->players[this_ptr->local_player_index].unk1 + 0xc);
  local_1b = *(uint *)(this_ptr->players[this_ptr->local_player_index].name + 0x14);
  local_17 = *(uint *)(this_ptr->players[this_ptr->local_player_index].name + 0x18);
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
  g_LastPingTime = iVar2 / 0x12;
  core_netgame_cpp_CNetGame_send_FUN_005411c0(this_ptr,*(int *)this_ptr->padding);
  DAT_00680a04 = 1;
  *(uint *)(this_ptr->players[this_ptr->local_player_index].unk1 + 8) = g_CurrentGameTime;
  return;
}
