// Name: core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00543970
// Address: 00543970
// Address Range: [[00543970, 00543aa8]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00543970()
// Cross-references:
//   core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0 (005435a0) at 00543649 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_netgame_cpp_0063e008
//   TerminatedCString s_CNetGame_sendSimFrameAck_0063e01c
//   TerminatedCString s_core_netgame_cpp_0063e05d
//   TerminatedCString s_CNetGame_sendSimFrameAck_0063e071
//   TerminatedCString s_core_netgame_cpp_0063e0b4
//   TerminatedCString s_CNetGame_sendSimFrameAck_0063e0c8
//   TerminatedCString s_core_netgame_cpp_0063e0fe
//   TerminatedCString s_CNetGame_sendSimFrameAck_0063e112
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   uint g_CurrentGameTime
//   undefined4 DAT_02f7c8c8
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_netgame.cpp_CNetGame_send_FUN_005411c0

#include "nocturne.h"

/* Signature: undefined1 core_netgame.cpp_CNetGame_sendSimFrameAck(CNetGame* param_1) */

void core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00543970(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  int *in_stack_00000004;
  int aiStack_3b [10];
  
  bVar4 = 0;
  if (*in_stack_00000004 != 2) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0xa29;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendSimFrameAck - should only be called in client mode");
  }
  if (in_stack_00000004[1] != 3) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0xa2a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendSimFrameAck - should only be called in the game loop");
  }
  if (in_stack_00000004[0x44] < 0) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0xa2b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendSimFrameAck - server not in player list");
  }
  if (in_stack_00000004[0x45] < 0) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0xa2c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendSimFrameAck - I'm not in player list");
  }
  piVar2 = in_stack_00000004 + in_stack_00000004[0x45] * 0x1e + 0x1b;
  piVar3 = aiStack_3b;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  core_netgame_cpp_CNetGame_send_FUN_005411c0();
  DAT_02f7c8c8 = g_CurrentGameTime;
  return;
}


// Assembly code:
// 00543970: PUSH EBX
//   Label: core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00543970
// 00543971: PUSH ESI
// 00543972: PUSH EDI
// 00543973: PUSH EBP
// 00543974: SUB ESP,0x38
// 00543977: MOV EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 0054397b: CMP dword ptr [EBX],0x2
// 0054397e: JNZ 0x00543a32
//   XREF to: 00543a32 (CONDITIONAL_JUMP)
// 00543984: CMP dword ptr [EBX + 0x4],0x3
//   Label: LAB_00543984
// 00543988: JZ 0x005439ac
//   XREF to: 005439ac (CONDITIONAL_JUMP)
// 0054398a: MOV EBP,0x63e05d
//   XREF to: 0063e05d (DATA)
// 0054398f: MOV EAX,0xa2a
// 00543994: PUSH 0x63e071
//   XREF to: 0063e071 (DATA)
// 00543999: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0054399f: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005439a4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005439a9: ADD ESP,0x4
// 005439ac: CMP dword ptr [EBX + 0x110],0x0
//   Label: LAB_005439ac
// 005439b3: JL 0x00543a5a
//   XREF to: 00543a5a (CONDITIONAL_JUMP)
// 005439b9: CMP dword ptr [EBX + 0x114],0x0
//   Label: LAB_005439b9
// 005439c0: JL 0x00543a82
//   XREF to: 00543a82 (CONDITIONAL_JUMP)
// 005439c6: MOV EDX,0x35
//   Label: LAB_005439c6
// 005439cb: MOV AH,0x10
// 005439cd: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x48] (DATA)
// 005439d0: MOV byte ptr [ESP + 0x4],AH
//   XREF to: Stack[-0x44] (WRITE)
// 005439d4: MOV EAX,dword ptr [EBX + 0x114]
// 005439da: SHL EAX,0x3
// 005439dd: MOV EDX,EAX
// 005439df: SHL EAX,0x4
// 005439e2: SUB EAX,EDX
// 005439e4: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x68]
// 005439e8: MOV dword ptr [ESP + 0x5],EAX
//   XREF to: Stack[-0x43] (WRITE)
// 005439ec: MOV EAX,dword ptr [EBX + 0x114]
// 005439f2: SHL EAX,0x3
// 005439f5: MOV EDX,EAX
// 005439f7: SHL EAX,0x4
// 005439fa: SUB EAX,EDX
// 005439fc: LEA ESI,[EBX + EAX*0x1]
// 005439ff: MOV ECX,0xb
// 00543a04: LEA EDI,[ESP + 0x9]
//   XREF to: Stack[-0x3f] (DATA)
// 00543a08: LEA ESI,[ESI + 0x6c]
// 00543a0b: MOV EAX,ESP
// 00543a0d: MOVSD.REP ES:EDI,ESI
// 00543a0f: PUSH EAX
// 00543a10: MOV ECX,dword ptr [EBX + 0x110]
// 00543a16: PUSH ECX
// 00543a17: PUSH EBX
// 00543a18: CALL core_netgame.cpp_CNetGame_send_FUN_005411c0
//   XREF to: 005411c0 (UNCONDITIONAL_CALL)
// 00543a1d: MOV EAX,[0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 00543a22: ADD ESP,0xc
// 00543a25: MOV [0x02f7c8c8],EAX
//   XREF to: 02f7c8c8 (WRITE)
// 00543a2a: ADD ESP,0x38
// 00543a2d: POP EBP
// 00543a2e: POP EDI
// 00543a2f: POP ESI
// 00543a30: POP EBX
// 00543a31: RET
// 00543a32: MOV ECX,0x63e008
//   Label: LAB_00543a32
//   XREF to: 0063e008 (PARAM)
// 00543a37: MOV ESI,0xa29
// 00543a3c: PUSH 0x63e01c
//   XREF to: 0063e01c (DATA)
// 00543a41: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00543a47: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00543a4d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00543a52: ADD ESP,0x4
// 00543a55: JMP 0x00543984
//   XREF to: 00543984 (UNCONDITIONAL_JUMP)
// 00543a5a: MOV ECX,0x63e0b4
//   Label: LAB_00543a5a
//   XREF to: 0063e0b4 (PARAM)
// 00543a5f: MOV ESI,0xa2b
// 00543a64: PUSH 0x63e0c8
//   XREF to: 0063e0c8 (DATA)
// 00543a69: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00543a6f: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00543a75: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00543a7a: ADD ESP,0x4
// 00543a7d: JMP 0x005439b9
//   XREF to: 005439b9 (UNCONDITIONAL_JUMP)
// 00543a82: MOV EBP,0x63e0fe
//   Label: LAB_00543a82
//   XREF to: 0063e0fe (DATA)
// 00543a87: MOV EAX,0xa2c
// 00543a8c: PUSH 0x63e112
//   XREF to: 0063e112 (DATA)
// 00543a91: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00543a97: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00543a9c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00543aa1: ADD ESP,0x4
// 00543aa4: JMP 0x005439c6
//   XREF to: 005439c6 (UNCONDITIONAL_JUMP)
