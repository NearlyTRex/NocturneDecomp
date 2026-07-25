// Name: core_game.cpp_joinNetworkGame_FUN_004a5e40
// Address: 004a5e40
// Address Range: [[004a5e40, 004a5efe]]
// Convention: unknown
// Signature: void core_game_cpp_joinNetworkGame_FUN_004a5e40(void)

#include "nocturne.h"

void core_game_cpp_joinNetworkGame_FUN_004a5e40(void)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint *puVar4;
  uint auStack_74 [25];
  byte auStack_10 [4];
  
  pcVar3 = "10.0.0.105";
  puVar4 = auStack_74;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(uint *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar4 = puVar4 + 1;
  }
  iVar2 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00471600
                    (0x01BCD074,"Enter Server IP",auStack_74,100,1);
  if (iVar2 == 0) {
    return;
  }
  uVar1 = support_trisock_cpp_parseIPAddress_FUN_00548af0(auStack_10,auStack_74);
  iVar2 = core_netgame_cpp_CNetGame_initializeNetworkToJoin_FUN_004e9a90(0x01CEA280,uVar1);
  if (iVar2 != 0) {
    DAT_01c78598 = 0;
    while( true ) {
      iVar2 = core_netgame_cpp_CNetGame_runLobby_FUN_004eb520(0x01CEA280);
      if (iVar2 == 0) break;
      core_mission_cpp_CDemonMission_run_FUN_004d9440(0x01CC9450);
    }
    core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(0x01CEA280,1);
    return;
  }
  core_netgame_cpp_CNetGame_disconnect_FUN_004e9e90(0x01CEA280,0);
  return;
}
