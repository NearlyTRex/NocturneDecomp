// Name: core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_004ece70
// Address: 004ece70
// Address Range: [[004ece70, 004ecf4b]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_004ece70(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_004ece70(CNetGame *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CNetGame *pCVar4;
  
  if (this_ptr->connection_type != CONNECTION_HOST) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 2188;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CNetGame::gameSettingsChanged - should only call this in server mode");
  }
  g_NetNextPlayerId = g_NetNextPlayerId + 1;
  iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
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
        pCVar4->players[0].player_id = g_NetNextPlayerId;
      }
      else {
        pCVar4->players[0].last_update_time = (g_CurrentGameTime + iVar2) - 0x1e0000;
      }
      iVar3 = iVar3 + 1;
      pCVar4 = (CNetGame *)&pCVar4->players[0].player_input.action_state.fire;
    } while (iVar3 < this_ptr->player_count);
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar2;
  return;
}
