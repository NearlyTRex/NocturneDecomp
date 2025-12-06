// Name: core_game.cpp_FUN_004e2fc0
// Address: 004e2fc0
// Address Range: [[004e2fc0, 004e307e]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004e2fc0()

#include "nocturne.h"

void core_game_cpp_FUN_004e2fc0(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  uint *puVar3;
  uint uStack_70;
  
  pcVar2 = "10.0.0.105";
  puVar3 = (uint *)&stack0xffffff8c;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(uint *)pcVar2;
    pcVar2 = pcVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                    (g_CEditorToolsPtr,"Enter Server IP",&stack0xffffff8c,100,1);
  if (iVar1 == 0) {
    return;
  }
  uStack_70 = support_trisock_cpp_parseIPAddress_FUN_005e1700
                        ((uint *)&stack0xfffffff4,(char *)&uStack_70);
  uStack_70 = core_netgame_cpp_initializeNetworkToJoin_FUN_0053f900();
  if (uStack_70 != 0) {
    g_CurrentSaveFile = '\0';
    while( true ) {
      uStack_70 = 0x4e3036;
      iVar1 = core_netgame_cpp_FUN_00541390();
      if (iVar1 == 0) break;
      core_mission_cpp_CDemonMission_run_FUN_00524420(g_CDemonMissionPtr);
    }
    uStack_70 = 0x4e3075;
    core_netgame_cpp_CNetGame_FUN_0053fd00(g_CNetGameInstance);
    return;
  }
  core_netgame_cpp_CNetGame_FUN_0053fd00(g_CNetGameInstance);
  return;
}
