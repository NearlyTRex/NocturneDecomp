// Name: core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040
// Address: 0050b040
// Address Range: [[0050b040, 0050b0cf]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040()
// Cross-references:
//   core_manpuz.cpp_FUN_0050a610 (0050a610) at 0050a891 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_manpuz_cpp_006358ba
//   TerminatedCString s_CMansionPuzzleCircle_pan_006358cd
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_manpuz.cpp_FUN_0050aef0

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_CMansionPuzzleCircle_panelOccupied(undefined4
   param_1, undefined4 param_2) */

undefined4 core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000008 < 0) || (0xb < in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\manpuz.cpp";
    g_CurrentLineNumber = 0x5e6;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CMansionPuzzleCircle::panelOccupied - invalid index: %d",in_stack_00000008);
  }
  if (*(int *)(in_stack_00000004 + 0x5f0 + in_stack_00000008 * 100) == 0) {
    iVar1 = core_manpuz_cpp_FUN_0050aef0();
    in_stack_00000004 = iVar1 * 100 + in_stack_00000004;
    if ((*(int *)(in_stack_00000004 + 0x5f0) == 0) ||
       ((*(uint *)(in_stack_00000004 + 0x5f8) & 0x7fffffff) == 0)) {
      return 0;
    }
  }
  return 1;
}


// Assembly code:
// 0050b040: PUSH EBX
//   Label: core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040
// 0050b041: PUSH ESI
// 0050b042: PUSH EBP
// 0050b043: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0050b047: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0050b04b: TEST EBX,EBX
// 0050b04d: JL 0x0050b054
//   XREF to: 0050b054 (CONDITIONAL_JUMP)
// 0050b04f: CMP EBX,0xc
// 0050b052: JL 0x0050b078
//   XREF to: 0050b078 (CONDITIONAL_JUMP)
// 0050b054: PUSH EBX
//   Label: LAB_0050b054
// 0050b055: MOV EDX,0x6358ba
//   XREF to: 006358ba (PARAM)
// 0050b05a: MOV ECX,0x5e6
// 0050b05f: PUSH 0x6358cd
//   XREF to: 006358cd (DATA)
// 0050b064: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0050b06a: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0050b070: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050b075: ADD ESP,0x8
// 0050b078: LEA EAX,[EBX*0x4 + 0x0]
//   Label: LAB_0050b078
// 0050b07f: SUB EAX,EBX
// 0050b081: SHL EAX,0x3
// 0050b084: ADD EAX,EBX
// 0050b086: CMP dword ptr [ESI + EAX*0x4 + 0x5f0],0x0
// 0050b08e: JZ 0x0050b099
//   XREF to: 0050b099 (CONDITIONAL_JUMP)
// 0050b090: MOV EAX,0x1
//   Label: LAB_0050b090
// 0050b095: POP EBP
// 0050b096: POP ESI
// 0050b097: POP EBX
// 0050b098: RET
// 0050b099: PUSH EBX
//   Label: LAB_0050b099
// 0050b09a: PUSH ESI
// 0050b09b: CALL core_manpuz.cpp_FUN_0050aef0
//   XREF to: 0050aef0 (UNCONDITIONAL_CALL)
// 0050b0a0: MOV EDX,EAX
// 0050b0a2: SHL EAX,0x2
// 0050b0a5: SUB EAX,EDX
// 0050b0a7: SHL EAX,0x3
// 0050b0aa: ADD EAX,EDX
// 0050b0ac: SHL EAX,0x2
// 0050b0af: ADD EAX,ESI
// 0050b0b1: MOV EBP,dword ptr [EAX + 0x5f0]
// 0050b0b7: ADD ESP,0x8
// 0050b0ba: TEST EBP,EBP
// 0050b0bc: JZ 0x0050b0ca
//   XREF to: 0050b0ca (CONDITIONAL_JUMP)
// 0050b0be: TEST dword ptr [EAX + 0x5f8],0x7fffffff
// 0050b0c8: JNZ 0x0050b090
//   XREF to: 0050b090 (CONDITIONAL_JUMP)
// 0050b0ca: XOR EAX,EAX
//   Label: LAB_0050b0ca
// 0050b0cc: POP EBP
// 0050b0cd: POP ESI
// 0050b0ce: POP EBX
// 0050b0cf: RET
