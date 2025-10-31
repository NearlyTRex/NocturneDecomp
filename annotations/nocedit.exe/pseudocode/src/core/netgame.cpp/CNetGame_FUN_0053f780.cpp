// Name: core_netgame.cpp_CNetGame_FUN_0053f780
// Address: 0053f780
// Address Range: [[0053f780, 0053f821]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_FUN_0053f780()
// Cross-references:
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 005081cb [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_netlog_txt_0063d2bc
//   TerminatedCString s_USERNAME_0063d2c7
//   TerminatedCString s_COMPUTERNAME_0063d2d0
//   TerminatedCString s_MyComputer_0063d2dd
//   undefined4 s_yComputer_0063d2de
//   undefined4 s_Computer_0063d2df
//   undefined4 s_omputer_0063d2e0
//   int g_LastPingTime
//   uint g_CurrentGameTime
//   int g_ChatHistoryCount
//   undefined4 DAT_02f98ad0
// Function calls:
//   core_netgame.cpp_CNetGame_FUN_0053fd00
//   crt_env.c_getenv_FUN_006013f0
//   crt_io.c_deleteFile_FUN_005ff9d0
//   support_trisock.cpp_startupWinsock_FUN_005e1ec0
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

/* Signature: undefined1 core_netgame.cpp_CNetGame_FUN_0053f780(undefined4 param_1) */

void core_netgame_cpp_CNetGame_FUN_0053f780(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  CNetGame *in_stack_00000018;
  
  crt_io_c_deleteFile_FUN_005ff9d0("netlog.txt");
  g_CurrentGameTime = 1;
  iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  g_LastPingTime = iVar2 / 0x12;
  support_trisock_cpp_startupWinsock_FUN_005e1ec0();
  pcVar3 = crt_env_c_getenv_FUN_006013f0("USERNAME");
  if (pcVar3 == (char *)0x0) {
    pcVar3 = crt_env_c_getenv_FUN_006013f0("COMPUTERNAME");
  }
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "MyComputer";
  }
  pcVar4 = in_stack_00000018->network_data;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  g_ChatHistoryCount = 0;
  DAT_02f98ad0 = 0;
  core_netgame_cpp_CNetGame_FUN_0053fd00(in_stack_00000018);
  return;
}


// Assembly code:
// 0053f780: PUSH ESI
//   Label: core_netgame.cpp_CNetGame_FUN_0053f780
// 0053f781: PUSH EDI
// 0053f782: PUSH 0x63d2bc
//   XREF to: 0063d2bc (DATA)
// 0053f787: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 0053f78c: MOV EDX,0x1
// 0053f791: ADD ESP,0x4
// 0053f794: MOV dword ptr [0x02f7c8b8],EDX
//   XREF to: 02f7c8b8 (WRITE)
// 0053f79a: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0053f79f: MOV EDX,EAX
// 0053f7a1: MOV ESI,0x12
// 0053f7a6: SAR EDX,0x1f
// 0053f7a9: IDIV ESI
// 0053f7ab: MOV [0x02f7c8b4],EAX
//   XREF to: 02f7c8b4 (WRITE)
// 0053f7b0: CALL support_trisock.cpp_startupWinsock_FUN_005e1ec0
//   XREF to: 005e1ec0 (UNCONDITIONAL_CALL)
// 0053f7b5: PUSH 0x63d2c7
//   XREF to: 0063d2c7 (DATA)
// 0053f7ba: CALL crt_env.c_getenv_FUN_006013f0
//   XREF to: 006013f0 (UNCONDITIONAL_CALL)
// 0053f7bf: ADD ESP,0x4
// 0053f7c2: MOV ESI,EAX
// 0053f7c4: TEST EAX,EAX
// 0053f7c6: JZ 0x0053f811
//   XREF to: 0053f811 (CONDITIONAL_JUMP)
// 0053f7c8: TEST ESI,ESI
//   Label: LAB_0053f7c8
// 0053f7ca: JNZ 0x0053f7d1
//   XREF to: 0053f7d1 (CONDITIONAL_JUMP)
// 0053f7cc: MOV ESI,0x63d2dd
//   XREF to: 0063d2dd (DATA)
// 0053f7d1: MOV EDI,dword ptr [ESP + 0xc]
//   Label: LAB_0053f7d1
//   XREF to: Stack[0x4] (READ)
// 0053f7d5: ADD EDI,0x8
// 0053f7d8: XOR ECX,ECX
// 0053f7da: PUSH EDI
// 0053f7db: MOV AL,byte ptr [ESI]
//   Label: LAB_0053f7db
//   XREF to: 0063d2dd (READ)
//   XREF to: 0063d2df (READ)
// 0053f7dd: MOV byte ptr [EDI],AL
// 0053f7df: CMP AL,0x0
// 0053f7e1: JZ 0x0053f7f3
//   XREF to: 0053f7f3 (CONDITIONAL_JUMP)
// 0053f7e3: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0063d2de (READ)
//   XREF to: 0063d2e0 (READ)
// 0053f7e6: ADD ESI,0x2
// 0053f7e9: MOV byte ptr [EDI + 0x1],AL
// 0053f7ec: ADD EDI,0x2
// 0053f7ef: CMP AL,0x0
// 0053f7f1: JNZ 0x0053f7db
//   XREF to: 0053f7db (CONDITIONAL_JUMP)
// 0053f7f3: POP EDI
//   Label: LAB_0053f7f3
// 0053f7f4: PUSH ECX
// 0053f7f5: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0053f7f9: PUSH ESI
// 0053f7fa: MOV dword ptr [0x02f7c8cc],ECX
//   XREF to: 02f7c8cc (WRITE)
// 0053f800: MOV dword ptr [0x02f98ad0],ECX
//   XREF to: 02f98ad0 (WRITE)
// 0053f806: CALL core_netgame.cpp_CNetGame_FUN_0053fd00
//   XREF to: 0053fd00 (UNCONDITIONAL_CALL)
// 0053f80b: ADD ESP,0x8
// 0053f80e: POP EDI
// 0053f80f: POP ESI
// 0053f810: RET
// 0053f811: PUSH 0x63d2d0
//   Label: LAB_0053f811
//   XREF to: 0063d2d0 (DATA)
// 0053f816: CALL crt_env.c_getenv_FUN_006013f0
//   XREF to: 006013f0 (UNCONDITIONAL_CALL)
// 0053f81b: ADD ESP,0x4
// 0053f81e: MOV ESI,EAX
// 0053f820: JMP 0x0053f7c8
//   XREF to: 0053f7c8 (UNCONDITIONAL_JUMP)
