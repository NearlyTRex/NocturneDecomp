// Name: core_game.cpp_FUN_004e2fc0
// Address: 004e2fc0
// Address Range: [[004e2fc0, 004e307e]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004e2fc0()
// Globals:
//   TerminatedCString s_Enter_Server_IP_0062d3a7
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   TerminatedCString s_s_10_0_0_105_0067b868
//   undefined4 s_.0.105_0067b86c
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CNetGame* g_CNetGameInstance = 02f7c740
//   CEditorTools g_CEditorToolsPtr
//   char g_CurrentSaveFile
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f7c740
// Function calls:
//   core_mission.cpp_CDemonMission_run_FUN_00524420
//   core_netgame.cpp_CNetGame_FUN_0053fd00
//   core_netgame.cpp_FUN_00541390
//   core_netgame.cpp_initializeNetworkToJoin_FUN_0053f900
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   support_trisock.cpp_parseIPAddress_FUN_005e1700

#include "nocturne.h"

void core_game_cpp_FUN_004e2fc0(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  undefined4 *puVar3;
  uint uStack_70;
  
  pcVar2 = "10.0.0.105";
  puVar3 = (undefined4 *)&stack0xffffff8c;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pcVar2;
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


// Assembly code:
// 004e2fc0: PUSH ESI
//   Label: core_game.cpp_FUN_004e2fc0
// 004e2fc1: PUSH EDI
// 004e2fc2: PUSH EBP
// 004e2fc3: SUB ESP,0x68
// 004e2fc6: PUSH 0x1
// 004e2fc8: PUSH 0x64
// 004e2fca: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x74] (DATA)
// 004e2fce: PUSH EAX
// 004e2fcf: MOV ECX,0x19
// 004e2fd4: LEA EDI,[ESP + 0xc]
//   XREF to: Stack[-0x74] (DATA)
// 004e2fd8: PUSH 0x62d3a7
//   XREF to: 0062d3a7 (DATA)
// 004e2fdd: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004e2fe3: MOV ESI,0x67b868
//   XREF to: 0067b868 (DATA)
// 004e2fe8: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004e2fe9: MOVSD.REP ES:EDI,ESI
//   XREF to: 0067b868 (READ)
//   XREF to: 0067b86c (READ)
// 004e2feb: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 004e2ff0: ADD ESP,0x14
// 004e2ff3: TEST EAX,EAX
// 004e2ff5: JNZ 0x004e2ffe
//   XREF to: 004e2ffe (CONDITIONAL_JUMP)
// 004e2ff7: ADD ESP,0x68
// 004e2ffa: POP EBP
// 004e2ffb: POP EDI
// 004e2ffc: POP ESI
// 004e2ffd: RET
// 004e2ffe: MOV EAX,ESP
//   Label: LAB_004e2ffe
// 004e3000: PUSH EAX
// 004e3001: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x10] (DATA)
// 004e3005: PUSH EAX
// 004e3006: CALL support_trisock.cpp_parseIPAddress_FUN_005e1700
//   XREF to: 005e1700 (UNCONDITIONAL_CALL)
// 004e300b: ADD ESP,0x8
// 004e300e: PUSH EAX
// 004e300f: MOV ECX,dword ptr [0x00680a00]
//   XREF to: 00680a00 (READ)
//   XREF to: 02f7c740 (PARAM)
// 004e3015: PUSH ECX
//   XREF to: 02f7c740 (DATA)
// 004e3016: CALL core_netgame.cpp_initializeNetworkToJoin_FUN_0053f900
//   XREF to: 0053f900 (UNCONDITIONAL_CALL)
// 004e301b: ADD ESP,0x8
// 004e301e: TEST EAX,EAX
// 004e3020: JZ 0x004e304e
//   XREF to: 004e304e (CONDITIONAL_JUMP)
// 004e3022: XOR AH,AH
// 004e3024: MOV byte ptr [0x02d82c80],AH
//   XREF to: 02d82c80 (WRITE)
// 004e302a: MOV ESI,dword ptr [0x00680a00]
//   Label: LAB_004e302a
//   XREF to: 00680a00 (READ)
// 004e3030: PUSH ESI
//   XREF to: 02f7c740 (DATA)
// 004e3031: CALL core_netgame.cpp_FUN_00541390
//   XREF to: 00541390 (UNCONDITIONAL_CALL)
// 004e3036: ADD ESP,0x4
// 004e3039: TEST EAX,EAX
// 004e303b: JZ 0x004e3067
//   XREF to: 004e3067 (CONDITIONAL_JUMP)
// 004e303d: MOV EBP,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 004e3043: PUSH EBP
//   XREF to: 02f33740 (DATA)
// 004e3044: CALL core_mission.cpp_CDemonMission_run_FUN_00524420
//   XREF to: 00524420 (UNCONDITIONAL_CALL)
// 004e3049: ADD ESP,0x4
// 004e304c: JMP 0x004e302a
//   XREF to: 004e302a (UNCONDITIONAL_JUMP)
// 004e304e: PUSH EBX
//   Label: LAB_004e304e
// 004e304f: PUSH EAX
// 004e3050: MOV EBX,dword ptr [0x00680a00]
//   XREF to: 00680a00 (READ)
// 004e3056: PUSH EBX
//   XREF to: 02f7c740 (DATA)
// 004e3057: CALL core_netgame.cpp_CNetGame_FUN_0053fd00
//   XREF to: 0053fd00 (UNCONDITIONAL_CALL)
// 004e305c: ADD ESP,0x8
// 004e305f: POP EBX
// 004e3060: ADD ESP,0x68
// 004e3063: POP EBP
// 004e3064: POP EDI
// 004e3065: POP ESI
// 004e3066: RET
// 004e3067: PUSH 0x1
//   Label: LAB_004e3067
// 004e3069: MOV EDI,dword ptr [0x00680a00]
//   XREF to: 00680a00 (READ)
// 004e306f: PUSH EDI
//   XREF to: 02f7c740 (DATA)
// 004e3070: CALL core_netgame.cpp_CNetGame_FUN_0053fd00
//   XREF to: 0053fd00 (UNCONDITIONAL_CALL)
// 004e3075: ADD ESP,0x8
// 004e3078: ADD ESP,0x68
// 004e307b: POP EBP
// 004e307c: POP EDI
// 004e307d: POP ESI
// 004e307e: RET
