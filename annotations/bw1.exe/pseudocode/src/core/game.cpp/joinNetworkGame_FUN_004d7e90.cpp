// Name: core_game.cpp_joinNetworkGame_FUN_004d7e90
// Address: 004d7e90
// Address Range: [[004d7e90, 004d7f4e]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_joinNetworkGame_FUN_004d7e90(void)

#include "nocturne.h"

void __cdecl core_game_cpp_joinNetworkGame_FUN_004d7e90(void)

{
  uint *server_ip;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uStack_10;
  
  puVar2 = (uint *)0x61db70;
  puVar3 = (uint *)&stack0xffffff8c;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00496150
                    (g_CEditorToolsPtr,"Enter Server IP",&stack0xffffff8c,100,1);
  if (iVar1 == 0) {
    return;
  }
  server_ip = support_trisock_cpp_parseIPAddress_FUN_0059c4d0(&uStack_10,&stack0xffffff8c);
  iVar1 = core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_0052c6b0(g_CNetGamePtr,server_ip);
  if (iVar1 != 0) {
    DAT_01cd05c0 = 0;
    while( true ) {
      iVar1 = core_netgame_cpp_CNetGame_runLobby_FUN_0052e120(g_CNetGamePtr);
      if (iVar1 == 0) break;
      core_mission_cpp_CDemonMission_run_FUN_0051bad0(0x01D2C900);
    }
    core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(g_CNetGamePtr,1);
    return;
  }
  core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(g_CNetGamePtr,0);
  return;
}
