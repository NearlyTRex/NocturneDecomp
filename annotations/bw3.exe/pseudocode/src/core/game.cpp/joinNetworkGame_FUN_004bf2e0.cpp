// Name: core_game.cpp_joinNetworkGame_FUN_004bf2e0
// Address: 004bf2e0
// Address Range: [[004bf2e0, 004bf39e]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_joinNetworkGame_FUN_004bf2e0(void)

#include "nocturne.h"

void __cdecl core_game_cpp_joinNetworkGame_FUN_004bf2e0(void)

{
  uint *server_ip;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uStack_10;
  
  puVar2 = (uint *)0x5febf0;
  puVar3 = (uint *)&stack0xffffff8c;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_0047ecf0
                    (g_CEditorToolsPtr,"Enter Server IP",&stack0xffffff8c,100,1);
  if (iVar1 == 0) {
    return;
  }
  server_ip = support_trisock_cpp_parseIPAddress_FUN_0056f4c0(&uStack_10,&stack0xffffff8c);
  iVar1 = core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_00503fb0(g_CNetGamePtr,server_ip);
  if (iVar1 != 0) {
    DAT_01d225c8 = 0;
    while( true ) {
      iVar1 = core_netgame_cpp_CNetGame_runLobby_FUN_00505a30(g_CNetGamePtr);
      if (iVar1 == 0) break;
      core_mission_cpp_CDemonMission_run_FUN_004f72a0(0x01D81080);
    }
    core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(g_CNetGamePtr,1);
    return;
  }
  core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(g_CNetGamePtr,0);
  return;
}
