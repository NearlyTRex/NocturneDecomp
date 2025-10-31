// Name: core_game.cpp_FUN_004e2f10
// Address: 004e2f10
// Address Range: [[004e2f10, 004e2fbe]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004e2f10()
// Globals:
//   TerminatedCString s_Can_t_init_network_to_ho_0062d363
//   TerminatedCString s_msn_0062d384
//   TerminatedCString s_world_0062d38a
//   TerminatedCString s_Select_mission_to_play_0062d390
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CNetGame* g_CNetGameInstance = 02f7c740
//   CEditorTools g_CEditorToolsPtr
//   char g_CurrentSaveFile
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f7c740
//   undefined4 DAT_02f7c858
// Function calls:
//   core_mission.cpp_CDemonMission_run_FUN_00524420
//   core_netgame.cpp_CNetGame_FUN_0053fd00
//   core_netgame.cpp_FUN_00541390
//   core_netgame.cpp_initializeNetworkToHost_FUN_0053f860
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270

#include "nocturne.h"

void core_game_cpp_FUN_004e2f10(void)

{
  int iVar1;
  
  iVar1 = core_netgame_cpp_initializeNetworkToHost_FUN_0053f860();
  if (iVar1 != 0) {
    iVar1 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,"Select mission to play","world",
                       "*.msn",(bool)((char)g_CNetGameInstance + '\x18'));
    if (iVar1 != 0) {
      g_CurrentSaveFile = '\0';
      while( true ) {
        iVar1 = core_netgame_cpp_FUN_00541390();
        if (iVar1 == 0) break;
        core_mission_cpp_CDemonMission_run_FUN_00524420(g_CDemonMissionPtr);
      }
    }
    core_netgame_cpp_CNetGame_FUN_0053fd00(g_CNetGameInstance);
    return;
  }
  core_netgame_cpp_CNetGame_FUN_0053fd00(g_CNetGameInstance);
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Can't init network to host game.");
  return;
}


// Assembly code:
// 004e2f10: PUSH ESI
//   Label: core_game.cpp_FUN_004e2f10
// 004e2f11: PUSH EDI
// 004e2f12: PUSH EBP
// 004e2f13: MOV EDX,dword ptr [0x00680a00]
//   XREF to: 00680a00 (READ)
//   XREF to: 02f7c740 (PARAM)
// 004e2f19: PUSH EDX
//   XREF to: 02f7c740 (DATA)
// 004e2f1a: CALL core_netgame.cpp_initializeNetworkToHost_FUN_0053f860
//   XREF to: 0053f860 (UNCONDITIONAL_CALL)
// 004e2f1f: ADD ESP,0x4
// 004e2f22: TEST EAX,EAX
// 004e2f24: JZ 0x004e2f81
//   XREF to: 004e2f81 (CONDITIONAL_JUMP)
// 004e2f26: MOV EAX,[0x00680a00]
//   XREF to: 00680a00 (READ)
// 004e2f2b: PUSH 0x0
// 004e2f2d: ADD EAX,0x118
// 004e2f32: PUSH EAX
//   XREF to: 02f7c858 (DATA)
// 004e2f33: PUSH 0x62d384
//   XREF to: 0062d384 (DATA)
// 004e2f38: PUSH 0x62d38a
//   XREF to: 0062d38a (DATA)
// 004e2f3d: PUSH 0x62d390
//   XREF to: 0062d390 (DATA)
// 004e2f42: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004e2f48: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004e2f49: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 004e2f4e: ADD ESP,0x18
// 004e2f51: TEST EAX,EAX
// 004e2f53: JZ 0x004e2fab
//   XREF to: 004e2fab (CONDITIONAL_JUMP)
// 004e2f55: XOR AH,AH
// 004e2f57: MOV byte ptr [0x02d82c80],AH
//   XREF to: 02d82c80 (WRITE)
// 004e2f5d: MOV EDI,dword ptr [0x00680a00]
//   Label: LAB_004e2f5d
//   XREF to: 00680a00 (READ)
// 004e2f63: PUSH EDI
//   XREF to: 02f7c740 (DATA)
// 004e2f64: CALL core_netgame.cpp_FUN_00541390
//   XREF to: 00541390 (UNCONDITIONAL_CALL)
// 004e2f69: ADD ESP,0x4
// 004e2f6c: TEST EAX,EAX
// 004e2f6e: JZ 0x004e2fab
//   XREF to: 004e2fab (CONDITIONAL_JUMP)
// 004e2f70: MOV EBP,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 004e2f76: PUSH EBP
//   XREF to: 02f33740 (DATA)
// 004e2f77: CALL core_mission.cpp_CDemonMission_run_FUN_00524420
//   XREF to: 00524420 (UNCONDITIONAL_CALL)
// 004e2f7c: ADD ESP,0x4
// 004e2f7f: JMP 0x004e2f5d
//   XREF to: 004e2f5d (UNCONDITIONAL_JUMP)
// 004e2f81: PUSH EBX
//   Label: LAB_004e2f81
// 004e2f82: PUSH EAX
// 004e2f83: MOV ECX,dword ptr [0x00680a00]
//   XREF to: 00680a00 (READ)
// 004e2f89: PUSH ECX
//   XREF to: 02f7c740 (DATA)
// 004e2f8a: CALL core_netgame.cpp_CNetGame_FUN_0053fd00
//   XREF to: 0053fd00 (UNCONDITIONAL_CALL)
// 004e2f8f: ADD ESP,0x8
// 004e2f92: PUSH 0x62d363
//   XREF to: 0062d363 (DATA)
// 004e2f97: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004e2f9d: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004e2f9e: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004e2fa3: ADD ESP,0x8
// 004e2fa6: POP EBX
// 004e2fa7: POP EBP
// 004e2fa8: POP EDI
// 004e2fa9: POP ESI
// 004e2faa: RET
// 004e2fab: PUSH 0x1
//   Label: LAB_004e2fab
// 004e2fad: MOV EAX,[0x00680a00]
//   XREF to: 00680a00 (READ)
// 004e2fb2: PUSH EAX
//   XREF to: 02f7c740 (DATA)
// 004e2fb3: CALL core_netgame.cpp_CNetGame_FUN_0053fd00
//   XREF to: 0053fd00 (UNCONDITIONAL_CALL)
// 004e2fb8: ADD ESP,0x8
// 004e2fbb: POP EBP
// 004e2fbc: POP EDI
// 004e2fbd: POP ESI
// 004e2fbe: RET
