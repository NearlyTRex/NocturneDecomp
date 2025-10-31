// Name: core_game.cpp_CGame_displayBitmap_FUN_004e2890
// Address: 004e2890
// Address Range: [[004e2890, 004e2908]]
// Convention: unknown
// Signature: undefined core_game.cpp_CGame_displayBitmap_FUN_004e2890()
// Cross-references:
//   core_event.cpp_LargeEventHandler_FUN_004aacc0 (004aacc0) at 004ab47c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_game_cpp_0062d24b
//   TerminatedCString s_CGame_displayBitmap_trie_0062d25c
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* Signature: undefined1 core_game.cpp_CGame_displayBitmap(CGame* param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

void core_game_cpp_CGame_displayBitmap_FUN_004e2890(void)

{
  char cVar1;
  char *pcVar2;
  int in_stack_00000004;
  char *in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  if (*(char *)(in_stack_00000004 + 0x8b4) != '\0') {
    g_CurrentFilename = "..\\core\\game.cpp";
    g_CurrentLineNumber = 0xfc6;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CGame::displayBitmap - tried to queue %s, but %s already queued!",in_stack_00000008,in_stack_00000004 + 0x8b4);
  }
  pcVar2 = (char *)(in_stack_00000004 + 0x8b4);
  do {
    cVar1 = *in_stack_00000008;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  *(undefined4 *)(in_stack_00000004 + 0x9b4) = in_stack_00000010;
  *(undefined4 *)(in_stack_00000004 + 0x9b8) = in_stack_00000014;
  return;
}


// Assembly code:
// 004e2890: PUSH EBX
//   Label: core_game.cpp_CGame_displayBitmap_FUN_004e2890
// 004e2891: PUSH ESI
// 004e2892: PUSH EDI
// 004e2893: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004e2897: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004e289b: CMP byte ptr [EBX + 0x8b4],0x0
// 004e28a2: JNZ 0x004e28dc
//   XREF to: 004e28dc (CONDITIONAL_JUMP)
// 004e28a4: LEA EDI,[EBX + 0x8b4]
//   Label: LAB_004e28a4
// 004e28aa: PUSH EDI
// 004e28ab: MOV AL,byte ptr [ESI]
//   Label: LAB_004e28ab
// 004e28ad: MOV byte ptr [EDI],AL
// 004e28af: CMP AL,0x0
// 004e28b1: JZ 0x004e28c3
//   XREF to: 004e28c3 (CONDITIONAL_JUMP)
// 004e28b3: MOV AL,byte ptr [ESI + 0x1]
// 004e28b6: ADD ESI,0x2
// 004e28b9: MOV byte ptr [EDI + 0x1],AL
// 004e28bc: ADD EDI,0x2
// 004e28bf: CMP AL,0x0
// 004e28c1: JNZ 0x004e28ab
//   XREF to: 004e28ab (CONDITIONAL_JUMP)
// 004e28c3: POP EDI
//   Label: LAB_004e28c3
// 004e28c4: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004e28c8: MOV dword ptr [EBX + 0x9b4],ESI
// 004e28ce: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 004e28d2: MOV dword ptr [EBX + 0x9b8],ESI
// 004e28d8: POP EDI
// 004e28d9: POP ESI
// 004e28da: POP EBX
// 004e28db: RET
// 004e28dc: LEA EDI,[EBX + 0x8b4]
//   Label: LAB_004e28dc
// 004e28e2: PUSH EDI
// 004e28e3: PUSH ESI
// 004e28e4: MOV EDX,0x62d24b
//   XREF to: 0062d24b (PARAM)
// 004e28e9: MOV ECX,0xfc6
// 004e28ee: PUSH 0x62d25c
//   XREF to: 0062d25c (DATA)
// 004e28f3: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004e28f9: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004e28ff: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004e2904: ADD ESP,0xc
// 004e2907: JMP 0x004e28a4
//   XREF to: 004e28a4 (UNCONDITIONAL_JUMP)
