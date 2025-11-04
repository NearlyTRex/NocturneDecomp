// Name: core_mimic.cpp_CMimic_beginMorph_FUN_00520a80
// Address: 00520a80
// Address Range: [[00520a80, 00520b93]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_CMimic_beginMorph_FUN_00520a80()
// Cross-references:
//   core_mimic.cpp_FUN_0051fcc0 (0051fcc0) at 0052007f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_mimic_cpp_0063883f
//   TerminatedCString s_CMimic_beginMorph_can_t__00638851
//   TerminatedCString s_s_morphing_into_type_s_0063889a
//   CConsole* g_CConsolePtr = 0083b1a4
//   CConsole g_ConsolePtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mimic.cpp_CMimic_processMorph_FUN_00520ba0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mimic.cpp_CMimic_beginMorph(undefined4 param_1) */

void core_mimic_cpp_CMimic_beginMorph_FUN_00520a80(void)

{
  int iVar1;
  CConsole *this_ptr;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x4ca54) == 0) {
    g_CurrentFilename = "..\\core\\mimic.cpp";
    g_CurrentLineNumber = 0x499;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMimic::beginMorph() - can't do this unless morphActor has been created!");
  }
  *(undefined4 *)(*(int *)(in_stack_00000004 + 0x4ca54) + 0x108) =
       *(undefined4 *)(in_stack_00000004 + 0x108);
  *(undefined4 *)(*(int *)(in_stack_00000004 + 0x4ca54) + 0x10c) =
       *(undefined4 *)(in_stack_00000004 + 0x10c);
  *(undefined4 *)(*(int *)(in_stack_00000004 + 0x4ca54) + 0x110) =
       *(undefined4 *)(in_stack_00000004 + 0x110);
  *(undefined4 *)(*(int *)(in_stack_00000004 + 0x4ca54) + 0xbeac) = 1;
  iVar1 = *(int *)(in_stack_00000004 + 0x4ca54);
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(in_stack_00000004 + 0x20);
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(in_stack_00000004 + 0x24);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(in_stack_00000004 + 0x28);
  *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(in_stack_00000004 + 0x2c);
  iVar1 = *(int *)(in_stack_00000004 + 0x4ca54);
  if ((undefined4 *)(iVar1 + 0x30) != (undefined4 *)(in_stack_00000004 + 0x30)) {
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(in_stack_00000004 + 0x30);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(in_stack_00000004 + 0x34);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(in_stack_00000004 + 0x38);
  }
  *(undefined4 *)(in_stack_00000004 + 0x4ca50) = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)(in_stack_00000004 + 0x158),0,1);
  core_mimic_cpp_CMimic_processMorph_FUN_00520ba0();
  this_ptr = g_CConsolePtr;
  *(undefined4 *)(in_stack_00000004 + 0xfc) = 1;
  engine_console_cpp_CConsole_printf_FUN_00441890
            (this_ptr,"%s morphing into type %s\n",in_stack_00000004);
  return;
}


// Assembly code:
// 00520a80: PUSH EBX
//   Label: core_mimic.cpp_CMimic_beginMorph_FUN_00520a80
// 00520a81: PUSH EDI
// 00520a82: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00520a86: CMP dword ptr [EBX + 0x4ca54],0x0
// 00520a8d: JZ 0x00520b6a
//   XREF to: 00520b6a (CONDITIONAL_JUMP)
// 00520a93: MOV EAX,dword ptr [EBX + 0x4ca54]
//   Label: LAB_00520a93
// 00520a99: MOV EDX,dword ptr [EBX + 0x108]
// 00520a9f: MOV dword ptr [EAX + 0x108],EDX
// 00520aa5: MOV EDX,dword ptr [EBX + 0x4ca54]
// 00520aab: MOV EAX,dword ptr [EBX + 0x10c]
// 00520ab1: MOV dword ptr [EDX + 0x10c],EAX
// 00520ab7: MOV EDX,dword ptr [EBX + 0x4ca54]
// 00520abd: MOV EAX,dword ptr [EBX + 0x110]
// 00520ac3: MOV dword ptr [EDX + 0x110],EAX
// 00520ac9: MOV EAX,dword ptr [EBX + 0x4ca54]
// 00520acf: MOV dword ptr [EAX + 0xbeac],0x1
// 00520ad9: LEA EAX,[EBX + 0x20]
// 00520adc: MOV EDX,dword ptr [EBX + 0x4ca54]
// 00520ae2: MOV ECX,dword ptr [EAX]
// 00520ae4: MOV dword ptr [EDX + 0x20],ECX
// 00520ae7: MOV ECX,dword ptr [EAX + 0x4]
// 00520aea: MOV dword ptr [EDX + 0x24],ECX
// 00520aed: MOV ECX,dword ptr [EAX + 0x8]
// 00520af0: MOV dword ptr [EDX + 0x28],ECX
// 00520af3: MOV EAX,dword ptr [EAX + 0xc]
// 00520af6: MOV dword ptr [EDX + 0x2c],EAX
// 00520af9: MOV EAX,dword ptr [EBX + 0x4ca54]
// 00520aff: LEA EDX,[EBX + 0x30]
// 00520b02: ADD EAX,0x30
// 00520b05: CMP EAX,EDX
// 00520b07: JZ 0x00520b19
//   XREF to: 00520b19 (CONDITIONAL_JUMP)
// 00520b09: MOV ECX,dword ptr [EDX]
// 00520b0b: MOV dword ptr [EAX],ECX
// 00520b0d: MOV ECX,dword ptr [EDX + 0x4]
// 00520b10: MOV dword ptr [EAX + 0x4],ECX
// 00520b13: MOV ECX,dword ptr [EDX + 0x8]
// 00520b16: MOV dword ptr [EAX + 0x8],ECX
// 00520b19: PUSH 0x1
//   Label: LAB_00520b19
// 00520b1b: PUSH 0x0
// 00520b1d: LEA EAX,[EBX + 0x158]
// 00520b23: PUSH EAX
// 00520b24: MOV dword ptr [EBX + 0x4ca50],0x0
// 00520b2e: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00520b33: ADD ESP,0xc
// 00520b36: PUSH 0x0
// 00520b38: PUSH EBX
// 00520b39: CALL core_mimic.cpp_CMimic_processMorph_FUN_00520ba0
//   XREF to: 00520ba0 (UNCONDITIONAL_CALL)
// 00520b3e: ADD ESP,0x8
// 00520b41: LEA EAX,[EBX + 0x4bdfc]
// 00520b47: PUSH EAX
// 00520b48: PUSH EBX
// 00520b49: PUSH 0x63889a
//   XREF to: 0063889a (DATA)
// 00520b4e: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 00520b54: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 00520b55: MOV dword ptr [EBX + 0xfc],0x1
// 00520b5f: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 00520b64: ADD ESP,0x10
// 00520b67: POP EDI
// 00520b68: POP EBX
// 00520b69: RET
// 00520b6a: PUSH ESI
//   Label: LAB_00520b6a
// 00520b6b: MOV ECX,0x63883f
//   XREF to: 0063883f (PARAM)
// 00520b70: MOV ESI,0x499
// 00520b75: PUSH 0x638851
//   XREF to: 00638851 (DATA)
// 00520b7a: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00520b80: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00520b86: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00520b8b: ADD ESP,0x4
// 00520b8e: POP ESI
// 00520b8f: JMP 0x00520a93
//   XREF to: 00520a93 (UNCONDITIONAL_JUMP)
