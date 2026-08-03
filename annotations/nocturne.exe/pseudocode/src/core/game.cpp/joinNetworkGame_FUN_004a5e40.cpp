// Name: core_game.cpp_joinNetworkGame_FUN_004a5e40
// Address: 004a5e40
// Address Range: [[004a5e40, 004a5efe]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_joinNetworkGame_FUN_004a5e40(void)

#include "nocturne.h"

void __cdecl core_game_cpp_joinNetworkGame_FUN_004a5e40(void)

{
  uint *server_ip;
  int iVar1;
  char *pcVar2;
  uint *puVar3;
  uint uStack_10;
  
  pcVar2 = "10.0.0.105";
  puVar3 = (uint *)&stack0xffffff8c;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(uint *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00471600
                    (g_CEditorTools_PTR_005b6d50,"Enter Server IP",&stack0xffffff8c,100,1);
  if (iVar1 == 0) {
    return;
  }
  server_ip = support_trisock_cpp_parseIPAddress_FUN_00548af0(&uStack_10,&stack0xffffff8c);
  iVar1 = core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_004e9a90
                    (g_CNetGame_PTR_005bdee0,server_ip);
  if (iVar1 != 0) {
    DAT_01c78598 = 0;
    while( true ) {
      iVar1 = core_netgame_cpp_CNetGame_runLobby_FUN_004eb520(g_CNetGame_PTR_005bdee0);
      if (iVar1 == 0) break;
      core_mission_cpp_CDemonMission_run_FUN_004d9440(g_CDemonMission_PTR_005baf90);
    }
    core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(g_CNetGame_PTR_005bdee0,1);
    return;
  }
  core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(g_CNetGame_PTR_005bdee0,0);
  return;
}
