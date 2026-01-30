// Name: core_game.cpp_FUN_004e2fc0
// Address: 004e2fc0
// Address Range: [[004e2fc0, 004e307e]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004e2fc0(void)

#include "nocturne.h"

void __cdecl core_game_cpp_FUN_004e2fc0(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char local_74 [100];
  uint local_10;
  
  pcVar2 = "10.0.0.105";
  pcVar3 = local_74;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pcVar3 = *(uint *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                    (g_CEditorToolsPtr,"Enter Server IP",local_74,100,1);
  if (iVar1 == 0) {
    return;
  }
  support_trisock_cpp_parseIPAddress_FUN_005e1700(&local_10,local_74);
  iVar1 = core_netgame_cpp_initializeNetworkToJoin_FUN_0053f900();
  if (iVar1 != 0) {
    g_CurrentSaveFile = '\0';
    while( true ) {
      iVar1 = core_netgame_cpp_FUN_00541390();
      if (iVar1 == 0) break;
      core_mission_cpp_CDemonMission_run_FUN_00524420(g_CDemonMissionPtr);
    }
    core_netgame_cpp_CNetGame_FUN_0053fd00(g_CNetGamePtr);
    return;
  }
  core_netgame_cpp_CNetGame_FUN_0053fd00(g_CNetGamePtr);
  return;
}
