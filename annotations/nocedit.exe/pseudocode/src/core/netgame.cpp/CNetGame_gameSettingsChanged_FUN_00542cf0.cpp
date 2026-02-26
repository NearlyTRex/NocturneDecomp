// Name: core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0
// Address: 00542cf0
// Address Range: [[00542cf0, 00542dcb]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0(CNetGame *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CNetGame *pCVar4;
  
  if (this_ptr->connection_type != CONNECTION_HOST) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x88c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::gameSettingsChanged - should only call this in server mode");
  }
  INT_02f7c8c4 = INT_02f7c8c4 + 1;
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar1 = iVar1 / 0x12;
  iVar2 = iVar1 - g_LastPingTime;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  iVar3 = 0;
  pCVar4 = this_ptr;
  g_LastPingTime = iVar1;
  if (0 < this_ptr->player_count) {
    do {
      if (iVar3 == this_ptr->local_player_index) {
        pCVar4->players[0].player_id = INT_02f7c8c4;
      }
      else {
        pCVar4->players[0].last_update_time = (g_CurrentGameTime + iVar2) - 0x1e0000;
      }
      iVar3 = iVar3 + 1;
      pCVar4 = (CNetGame *)(pCVar4->players[0].controls.action_states + 3);
    } while (iVar3 < this_ptr->player_count);
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar2;
  return;
}
