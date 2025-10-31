// Name: core_netgame.cpp_CNetGame_send_FUN_005411c0
// Address: 005411c0
// Address Range: [[005411c0, 00541223]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_send_FUN_005411c0()
// Cross-references:
//   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 (005406a0) at 00540cc0 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150 (00543150) at 00543541 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0 (00542dd0) at 00542f73 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0 (00542ff0) at 00543109 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00543970 (00543970) at 00543a18 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0 (005401e0) at 0054041a [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_updatePing_FUN_00541c80 (00541c80) at 00541e0b [UNCONDITIONAL_CALL]
//   core_netgame.cpp_initializeNetworkToJoin_FUN_0053f900 (0053f900) at 0053faac [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_netgame_cpp_0063d90d
//   TerminatedCString s_CNetGame_send_invalid_pl_0063d921
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_netgame.cpp_CNetGame_FUN_00541230

#include "nocturne.h"

/* Signature: undefined1 core_netgame.cpp_CNetGame_send(CNetGame* param_1, undefined4 param_2,
   undefined4 param_3) */

void core_netgame_cpp_CNetGame_send_FUN_005411c0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000008 < 0) || (*(int *)(in_stack_00000004 + 0x1c) <= in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x5c5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::send - invalid player index");
  }
  core_netgame_cpp_CNetGame_FUN_00541230();
  return;
}


// Assembly code:
// 005411c0: PUSH EBX
//   Label: core_netgame.cpp_CNetGame_send_FUN_005411c0
// 005411c1: PUSH ESI
// 005411c2: PUSH EBP
// 005411c3: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005411c7: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005411cb: TEST EBX,EBX
// 005411cd: JL 0x005411fd
//   XREF to: 005411fd (CONDITIONAL_JUMP)
// 005411cf: CMP EBX,dword ptr [ESI + 0x1c]
// 005411d2: JGE 0x005411fd
//   XREF to: 005411fd (CONDITIONAL_JUMP)
// 005411d4: LEA EAX,[EBX*0x8 + 0x0]
//   Label: LAB_005411d4
// 005411db: MOV EDX,EAX
// 005411dd: SHL EAX,0x4
// 005411e0: SUB EAX,EDX
// 005411e2: LEA EDX,[ESI + 0x20]
// 005411e5: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005411e9: ADD EAX,EDX
// 005411eb: PUSH EBP
// 005411ec: ADD EAX,0x1c
// 005411ef: PUSH EAX
// 005411f0: PUSH ESI
// 005411f1: CALL core_netgame.cpp_CNetGame_FUN_00541230
//   XREF to: 00541230 (UNCONDITIONAL_CALL)
// 005411f6: ADD ESP,0xc
// 005411f9: POP EBP
// 005411fa: POP ESI
// 005411fb: POP EBX
// 005411fc: RET
// 005411fd: PUSH EDI
//   Label: LAB_005411fd
// 005411fe: MOV ECX,0x63d90d
//   XREF to: 0063d90d (PARAM)
// 00541203: MOV EDI,0x5c5
// 00541208: PUSH 0x63d921
//   XREF to: 0063d921 (DATA)
// 0054120d: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00541213: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00541219: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054121e: ADD ESP,0x4
// 00541221: POP EDI
// 00541222: JMP 0x005411d4
//   XREF to: 005411d4 (UNCONDITIONAL_JUMP)
