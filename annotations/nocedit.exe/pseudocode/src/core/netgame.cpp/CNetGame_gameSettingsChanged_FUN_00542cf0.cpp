// Name: core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0
// Address: 00542cf0
// Address Range: [[00542cf0, 00542dcb]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0()
// Cross-references:
//   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 (005406a0) at 00540de9 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00541390 (00541390) at 005416b3 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_netgame_cpp_0063dc53
//   TerminatedCString s_CNetGame_gameSettingsCha_0063dc67
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_LastPingTime
//   uint g_CurrentGameTime
//   undefined4 DAT_02f7c8c4
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

/* Signature: undefined1 core_netgame.cpp_CNetGame_gameSettingsChanged(CNetGame* param_1) */

void core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_stack_00000004;
  
  if (*in_stack_00000004 != 1) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x88c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::gameSettingsChanged - should only call this in server mode");
  }
  DAT_02f7c8c4 = DAT_02f7c8c4 + 1;
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar1 = iVar1 / 0x12;
  iVar2 = iVar1 - g_LastPingTime;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  iVar3 = 0;
  piVar4 = in_stack_00000004;
  g_LastPingTime = iVar1;
  if (0 < in_stack_00000004[7]) {
    do {
      if (iVar3 == in_stack_00000004[0x45]) {
        piVar4[0x15] = DAT_02f7c8c4;
      }
      else {
        piVar4[0x16] = (g_CurrentGameTime + iVar2) - 0x1e0000;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x1e;
    } while (iVar3 < in_stack_00000004[7]);
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar2;
  return;
}


// Assembly code:
// 00542cf0: PUSH EBX
//   Label: core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0
// 00542cf1: PUSH ESI
// 00542cf2: PUSH EDI
// 00542cf3: PUSH EBP
// 00542cf4: MOV ESI,dword ptr [0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 00542cfa: MOV EDI,dword ptr [0x02f7c8c4]
//   XREF to: 02f7c8c4 (READ)
// 00542d00: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00542d04: CMP dword ptr [EBX],0x1
// 00542d07: JNZ 0x00542d95
//   XREF to: 00542d95 (CONDITIONAL_JUMP)
// 00542d0d: MOV EDI,dword ptr [0x02f7c8c4]
//   Label: LAB_00542d0d
//   XREF to: 02f7c8c4 (READ)
// 00542d13: INC EDI
// 00542d14: MOV dword ptr [0x02f7c8c4],EDI
//   XREF to: 02f7c8c4 (WRITE)
// 00542d1a: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 00542d1f: MOV EDX,EAX
// 00542d21: MOV ECX,0x12
// 00542d26: SAR EDX,0x1f
// 00542d29: IDIV ECX
// 00542d2b: MOV EDI,dword ptr [0x02f7c8c4]
//   XREF to: 02f7c8c4 (READ)
// 00542d31: MOV ECX,dword ptr [0x02f7c8b4]
//   XREF to: 02f7c8b4 (READ)
// 00542d37: MOV EDX,EAX
// 00542d39: SUB EAX,ECX
// 00542d3b: MOV dword ptr [0x02f7c8b4],EDX
//   XREF to: 02f7c8b4 (WRITE)
// 00542d41: TEST EAX,EAX
// 00542d43: JL 0x00542dbd
//   XREF to: 00542dbd (CONDITIONAL_JUMP)
// 00542d49: MOV ESI,dword ptr [0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 00542d4f: CMP EAX,0x20000
// 00542d54: JLE 0x00542d5b
//   XREF to: 00542d5b (CONDITIONAL_JUMP)
// 00542d56: MOV EAX,0x20000
// 00542d5b: MOV EBP,dword ptr [EBX + 0x1c]
//   Label: LAB_00542d5b
// 00542d5e: ADD ESI,EAX
// 00542d60: XOR EAX,EAX
// 00542d62: TEST EBP,EBP
// 00542d64: JLE 0x00542d84
//   XREF to: 00542d84 (CONDITIONAL_JUMP)
// 00542d66: MOV EDX,EBX
// 00542d68: CMP EAX,dword ptr [EBX + 0x114]
//   Label: LAB_00542d68
// 00542d6e: JZ 0x00542dc7
//   XREF to: 00542dc7 (CONDITIONAL_JUMP)
// 00542d70: LEA ECX,[ESI + 0xffe20000]
// 00542d76: MOV dword ptr [EDX + 0x58],ECX
// 00542d79: INC EAX
//   Label: LAB_00542d79
// 00542d7a: MOV ECX,dword ptr [EBX + 0x1c]
// 00542d7d: ADD EDX,0x78
// 00542d80: CMP EAX,ECX
// 00542d82: JL 0x00542d68
//   XREF to: 00542d68 (CONDITIONAL_JUMP)
// 00542d84: MOV dword ptr [0x02f7c8c4],EDI
//   Label: LAB_00542d84
//   XREF to: 02f7c8c4 (WRITE)
// 00542d8a: MOV dword ptr [0x02f7c8b8],ESI
//   XREF to: 02f7c8b8 (WRITE)
// 00542d90: POP EBP
// 00542d91: POP EDI
// 00542d92: POP ESI
// 00542d93: POP EBX
// 00542d94: RET
// 00542d95: MOV ECX,0x63dc53
//   Label: LAB_00542d95
//   XREF to: 0063dc53 (PARAM)
// 00542d9a: MOV EBP,0x88c
// 00542d9f: PUSH 0x63dc67
//   XREF to: 0063dc67 (DATA)
// 00542da4: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00542daa: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 00542db0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00542db5: ADD ESP,0x4
// 00542db8: JMP 0x00542d0d
//   XREF to: 00542d0d (UNCONDITIONAL_JUMP)
// 00542dbd: MOV ESI,dword ptr [0x02f7c8b8]
//   Label: LAB_00542dbd
//   XREF to: 02f7c8b8 (READ)
// 00542dc3: XOR EAX,EAX
// 00542dc5: JMP 0x00542d5b
//   XREF to: 00542d5b (UNCONDITIONAL_JUMP)
// 00542dc7: MOV dword ptr [EDX + 0x54],EDI
//   Label: LAB_00542dc7
// 00542dca: JMP 0x00542d79
//   XREF to: 00542d79 (UNCONDITIONAL_JUMP)
