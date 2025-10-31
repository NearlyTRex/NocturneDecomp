// Name: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40
// Address: 0050ad40
// Address Range: [[0050ad40, 0050adee]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40()
// Cross-references:
//   core_manpuz.cpp_FUN_0050a610 (0050a610) at 0050a8a3 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_manpuz_cpp_00635835
//   TerminatedCString s_CMansionPuzzleCircle_shi_00635848
//   TerminatedCString s_manpuz_doorslide_wav_00635879
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_manpuz.cpp_FUN_0050aee0
//   sound_sndmain.cpp_FUN_005a8940
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_startSfx_FUN_005a8e90

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight(undefined4
   param_1, undefined4 param_2) */

void core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40(void)

{
  int *piVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  
  piVar1 = (int *)(in_stack_00000004 + 0x5f0 + in_stack_00000008 * 100);
  iVar2 = core_manpuz_cpp_FUN_0050aee0();
  if ((((*piVar1 == 0) || (*(int *)(in_stack_00000004 + 0x5f0 + iVar2 * 100) != 0)) ||
      ((piVar1[1] & 0x7fffffffU) != 0)) || ((piVar1[2] & 0x7fffffffU) != 0)) {
    g_CurrentFilename = "..\\core\\manpuz.cpp";
    g_CurrentLineNumber = 0x57d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMansionPuzzleCircle::shiftPanelRight - fubared.");
  }
  piVar1[2] = 0x3f800000;
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_FUN_005a8940();
  sound_sndmain_cpp_startSfx_FUN_005a8e90();
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return;
}


// Assembly code:
// 0050ad40: PUSH EBX
//   Label: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40
// 0050ad41: PUSH ESI
// 0050ad42: PUSH EBP
// 0050ad43: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0050ad47: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0050ad4b: LEA EAX,[ECX*0x4 + 0x0]
// 0050ad52: SUB EAX,ECX
// 0050ad54: SHL EAX,0x3
// 0050ad57: LEA ESI,[EDX + 0x5f0]
// 0050ad5d: ADD EAX,ECX
// 0050ad5f: PUSH ECX
// 0050ad60: SHL EAX,0x2
// 0050ad63: PUSH EDX
// 0050ad64: LEA EBX,[ESI + EAX*0x1]
// 0050ad67: CALL core_manpuz.cpp_FUN_0050aee0
//   XREF to: 0050aee0 (UNCONDITIONAL_CALL)
// 0050ad6c: MOV EDX,EAX
// 0050ad6e: SHL EAX,0x2
// 0050ad71: SUB EAX,EDX
// 0050ad73: SHL EAX,0x3
// 0050ad76: ADD EAX,EDX
// 0050ad78: ADD ESP,0x8
// 0050ad7b: SHL EAX,0x2
// 0050ad7e: MOV EDX,dword ptr [EBX]
// 0050ad80: ADD ESI,EAX
// 0050ad82: TEST EDX,EDX
// 0050ad84: JZ 0x0050adcb
//   XREF to: 0050adcb (CONDITIONAL_JUMP)
// 0050ad86: CMP dword ptr [ESI],0x0
// 0050ad89: JNZ 0x0050adcb
//   XREF to: 0050adcb (CONDITIONAL_JUMP)
// 0050ad8b: TEST dword ptr [EBX + 0x4],0x7fffffff
// 0050ad92: JNZ 0x0050adcb
//   XREF to: 0050adcb (CONDITIONAL_JUMP)
// 0050ad94: TEST dword ptr [EBX + 0x8],0x7fffffff
// 0050ad9b: JNZ 0x0050adcb
//   XREF to: 0050adcb (CONDITIONAL_JUMP)
// 0050ad9d: MOV dword ptr [EBX + 0x8],0x3f800000
//   Label: LAB_0050ad9d
// 0050ada4: ADD EBX,0x58
// 0050ada7: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 0050adac: PUSH EBX
// 0050adad: CALL sound_sndmain.cpp_FUN_005a8940
//   XREF to: 005a8940 (UNCONDITIONAL_CALL)
// 0050adb2: ADD ESP,0x4
// 0050adb5: PUSH 0x635879
//   XREF to: 00635879 (DATA)
// 0050adba: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 0050adbf: ADD ESP,0x4
// 0050adc2: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 0050adc7: POP EBP
// 0050adc8: POP ESI
// 0050adc9: POP EBX
// 0050adca: RET
// 0050adcb: MOV EBP,0x635835
//   Label: LAB_0050adcb
//   XREF to: 00635835 (DATA)
// 0050add0: MOV EAX,0x57d
// 0050add5: PUSH 0x635848
//   XREF to: 00635848 (DATA)
// 0050adda: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0050ade0: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0050ade5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050adea: ADD ESP,0x4
// 0050aded: JMP 0x0050ad9d
//   XREF to: 0050ad9d (UNCONDITIONAL_JUMP)
