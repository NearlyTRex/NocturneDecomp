// Name: core_game.cpp_joinNetworkGame_FUN_004e2fc0
// Address: 004e2fc0
// MANUAL RECONSTRUCTION
// Address Range: [[004e2fc0, 004e307e]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_joinNetworkGame_FUN_004e2fc0(void)

#include "nocturne.h"

void __cdecl core_game_cpp_joinNetworkGame_FUN_004e2fc0(void)

{
  int iVar2;
  uint32_t *server_ip;
  char local_74 [100];
  uint local_10;

  memcpy(local_74,g_IpAddress,sizeof(local_74));
  iVar2 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                    (g_CEditorToolsPtr,"Enter Server IP",local_74,100,1);
  if (iVar2 == 0) {
    return;
  }
  server_ip = (uint32_t *)support_trisock_cpp_parseIPAddress_FUN_005e1700(&local_10,local_74);
  iVar2 = core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_0053f900(g_CNetGamePtr,server_ip);
  if (iVar2 != 0) {
    g_CurrentSaveFile[0] = '\0';
    while( true ) {
      iVar2 = core_netgame_cpp_CNetGame_runLobby_FUN_00541390(g_CNetGamePtr);
      if (iVar2 == 0) break;
      core_mission_cpp_CDemonMission_run_FUN_00524420(g_CDemonMissionPtr);
    }
    core_netgame_cpp_CNetGame_disconnect_FUN_0053fd00(g_CNetGamePtr,1);
    return;
  }
  core_netgame_cpp_CNetGame_disconnect_FUN_0053fd00(g_CNetGamePtr,0);
  return;
}
