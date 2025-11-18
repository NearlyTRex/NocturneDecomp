// Name: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0
// Address: 0050aba0
// Address Range: [[0050aba0, 0050ad37]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0()
// Cross-references:
//   core_manpuz.cpp_FUN_0050a610 (0050a610) at 0050a8b5 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_manpuz_cpp_006357dd
//   TerminatedCString s_CMansionPuzzleCircle_shi_006357f0
//   TerminatedCString s_manpuz_doorslide_wav_00635820
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_manpuz.cpp_FUN_00509b20
//   core_manpuz.cpp_FUN_0050aef0
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
//   sound_sndmain.cpp_startSfx_FUN_005a8e90

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft(undefined4
   param_1, undefined4 param_2) */

void core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar2 = core_manpuz_cpp_FUN_0050aef0();
  piVar1 = (int *)(in_stack_00000004 + 0x5f0 + in_stack_00000008 * 100);
  piVar3 = (int *)(in_stack_00000004 + 0x5f0 + iVar2 * 100);
  if ((((*piVar1 == 0) || (*piVar3 != 0)) || ((piVar1[1] & 0x7fffffffU) != 0)) ||
     ((piVar1[2] & 0x7fffffffU) != 0)) {
    g_CurrentFilename = "..\\core\\manpuz.cpp";
    g_CurrentLineNumber = 0x554;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMansionPuzzleCircle::shiftPanelLeft - fubared.",iVar2);
  }
  *piVar3 = *piVar1;
  piVar3[1] = piVar1[1];
  piVar3[2] = piVar1[2];
  if (piVar3 + 3 != piVar1 + 3) {
    piVar3[3] = piVar1[3];
    piVar3[4] = piVar1[4];
    piVar3[5] = piVar1[5];
  }
  if (piVar3 + 6 != piVar1 + 6) {
    piVar3[6] = piVar1[6];
    piVar3[7] = piVar1[7];
    piVar3[8] = piVar1[8];
  }
  piVar3[9] = piVar1[9];
  piVar3[10] = piVar1[10];
  piVar3[0xb] = piVar1[0xb];
  piVar3[0xc] = piVar1[0xc];
  piVar3[0xd] = piVar1[0xd];
  piVar3[0xe] = piVar1[0xe];
  piVar3[0xf] = piVar1[0xf];
  piVar3[0x10] = piVar1[0x10];
  piVar3[0x11] = piVar1[0x11];
  piVar3[0x12] = piVar1[0x12];
  piVar3[0x13] = piVar1[0x13];
  piVar3[0x14] = piVar1[0x14];
  piVar3[0x15] = piVar1[0x15];
  if (piVar3 + 0x16 != piVar1 + 0x16) {
    piVar3[0x16] = piVar1[0x16];
    piVar3[0x17] = piVar1[0x17];
    piVar3[0x18] = piVar1[0x18];
  }
  *piVar1 = 0;
  piVar3[1] = 0x3f800000;
  piVar3[2] = -0x40800000;
  core_manpuz_cpp_FUN_00509b20();
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940((CVector3f *)(piVar3 + 0x16));
  sound_sndmain_cpp_startSfx_FUN_005a8e90("manpuz-doorslide.wav");
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return;
}


// Assembly code:
// 0050aba0: PUSH EBX
//   Label: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0
// 0050aba1: PUSH ESI
// 0050aba2: PUSH EDI
// 0050aba3: PUSH EBP
// 0050aba4: SUB ESP,0x4
// 0050aba7: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0050abab: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0050abaf: PUSH EBX
// 0050abb0: PUSH EBP
// 0050abb1: CALL core_manpuz.cpp_FUN_0050aef0
//   XREF to: 0050aef0 (UNCONDITIONAL_CALL)
// 0050abb6: ADD ESP,0x8
// 0050abb9: MOV EDX,EAX
// 0050abbb: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0050abbe: LEA EAX,[EBX*0x4 + 0x0]
// 0050abc5: SUB EAX,EBX
// 0050abc7: SHL EAX,0x3
// 0050abca: ADD EAX,EBX
// 0050abcc: LEA ESI,[EBP + 0x5f0]
// 0050abd2: SHL EAX,0x2
// 0050abd5: LEA EBX,[ESI + EAX*0x1]
// 0050abd8: LEA EAX,[EDX*0x4 + 0x0]
// 0050abdf: SUB EAX,EDX
// 0050abe1: SHL EAX,0x3
// 0050abe4: ADD EAX,EDX
// 0050abe6: SHL EAX,0x2
// 0050abe9: MOV EDX,dword ptr [EBX]
// 0050abeb: ADD ESI,EAX
// 0050abed: TEST EDX,EDX
// 0050abef: JZ 0x0050abfa
//   XREF to: 0050abfa (CONDITIONAL_JUMP)
// 0050abf1: CMP dword ptr [ESI],0x0
// 0050abf4: JZ 0x0050ad19
//   XREF to: 0050ad19 (CONDITIONAL_JUMP)
// 0050abfa: MOV EDX,0x6357dd
//   Label: LAB_0050abfa
//   XREF to: 006357dd (PARAM)
// 0050abff: MOV ECX,0x554
// 0050ac04: PUSH 0x6357f0
//   XREF to: 006357f0 (DATA)
// 0050ac09: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0050ac0f: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0050ac15: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050ac1a: ADD ESP,0x4
// 0050ac1d: MOV EAX,ESI
//   Label: LAB_0050ac1d
// 0050ac1f: MOV ECX,dword ptr [EBX]
// 0050ac21: MOV EDX,EBX
// 0050ac23: MOV dword ptr [ESI],ECX
// 0050ac25: LEA EDI,[EBX + 0xc]
// 0050ac28: FLD float ptr [EBX + 0x4]
// 0050ac2b: LEA ECX,[ESI + 0xc]
// 0050ac2e: FSTP float ptr [ESI + 0x4]
// 0050ac31: FLD float ptr [EBX + 0x8]
// 0050ac34: FSTP float ptr [ESI + 0x8]
// 0050ac37: CMP ECX,EDI
// 0050ac39: JZ 0x0050ac4b
//   XREF to: 0050ac4b (CONDITIONAL_JUMP)
// 0050ac3b: FLD float ptr [EDI]
// 0050ac3d: FSTP float ptr [ECX]
// 0050ac3f: FLD float ptr [EDI + 0x4]
// 0050ac42: FSTP float ptr [ECX + 0x4]
// 0050ac45: FLD float ptr [EDI + 0x8]
// 0050ac48: FSTP float ptr [ECX + 0x8]
// 0050ac4b: LEA EDI,[EDX + 0x18]
//   Label: LAB_0050ac4b
// 0050ac4e: LEA ECX,[EAX + 0x18]
// 0050ac51: CMP ECX,EDI
// 0050ac53: JZ 0x0050ac65
//   XREF to: 0050ac65 (CONDITIONAL_JUMP)
// 0050ac55: FLD float ptr [EDI]
// 0050ac57: FSTP float ptr [ECX]
// 0050ac59: FLD float ptr [EDI + 0x4]
// 0050ac5c: FSTP float ptr [ECX + 0x4]
// 0050ac5f: FLD float ptr [EDI + 0x8]
// 0050ac62: FSTP float ptr [ECX + 0x8]
// 0050ac65: MOV ECX,dword ptr [EDX + 0x24]
//   Label: LAB_0050ac65
// 0050ac68: MOV dword ptr [EAX + 0x24],ECX
// 0050ac6b: MOV ECX,dword ptr [EDX + 0x28]
// 0050ac6e: MOV dword ptr [EAX + 0x28],ECX
// 0050ac71: MOV ECX,dword ptr [EDX + 0x2c]
// 0050ac74: MOV dword ptr [EAX + 0x2c],ECX
// 0050ac77: MOV ECX,dword ptr [EDX + 0x30]
// 0050ac7a: MOV dword ptr [EAX + 0x30],ECX
// 0050ac7d: MOV ECX,dword ptr [EDX + 0x34]
// 0050ac80: MOV dword ptr [EAX + 0x34],ECX
// 0050ac83: MOV ECX,dword ptr [EDX + 0x38]
// 0050ac86: MOV dword ptr [EAX + 0x38],ECX
// 0050ac89: MOV ECX,dword ptr [EDX + 0x3c]
// 0050ac8c: MOV dword ptr [EAX + 0x3c],ECX
// 0050ac8f: MOV ECX,dword ptr [EDX + 0x40]
// 0050ac92: MOV dword ptr [EAX + 0x40],ECX
// 0050ac95: MOV ECX,dword ptr [EDX + 0x44]
// 0050ac98: MOV dword ptr [EAX + 0x44],ECX
// 0050ac9b: MOV ECX,dword ptr [EDX + 0x48]
// 0050ac9e: MOV dword ptr [EAX + 0x48],ECX
// 0050aca1: MOV ECX,dword ptr [EDX + 0x4c]
// 0050aca4: MOV dword ptr [EAX + 0x4c],ECX
// 0050aca7: MOV ECX,dword ptr [EDX + 0x50]
// 0050acaa: MOV dword ptr [EAX + 0x50],ECX
// 0050acad: ADD EAX,0x58
// 0050acb0: MOV ECX,dword ptr [EDX + 0x54]
// 0050acb3: ADD EDX,0x58
// 0050acb6: MOV dword ptr [EAX + -0x4],ECX
// 0050acb9: CMP EAX,EDX
// 0050acbb: JZ 0x0050accd
//   XREF to: 0050accd (CONDITIONAL_JUMP)
// 0050acbd: MOV ECX,dword ptr [EDX]
// 0050acbf: MOV dword ptr [EAX],ECX
// 0050acc1: MOV ECX,dword ptr [EDX + 0x4]
// 0050acc4: MOV dword ptr [EAX + 0x4],ECX
// 0050acc7: MOV ECX,dword ptr [EDX + 0x8]
// 0050acca: MOV dword ptr [EAX + 0x8],ECX
// 0050accd: MOV dword ptr [EBX],0x0
//   Label: LAB_0050accd
// 0050acd3: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0050acd6: PUSH EBX
// 0050acd7: MOV dword ptr [ESI + 0x4],0x3f800000
// 0050acde: PUSH EBP
// 0050acdf: MOV dword ptr [ESI + 0x8],0xbf800000
// 0050ace6: CALL core_manpuz.cpp_FUN_00509b20
//   XREF to: 00509b20 (UNCONDITIONAL_CALL)
// 0050aceb: ADD ESP,0x8
// 0050acee: ADD ESI,0x58
// 0050acf1: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 0050acf6: PUSH ESI
// 0050acf7: CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
//   XREF to: 005a8940 (UNCONDITIONAL_CALL)
// 0050acfc: ADD ESP,0x4
// 0050acff: PUSH 0x635820
//   XREF to: 00635820 (DATA)
// 0050ad04: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 0050ad09: ADD ESP,0x4
// 0050ad0c: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 0050ad11: ADD ESP,0x4
// 0050ad14: POP EBP
// 0050ad15: POP EDI
// 0050ad16: POP ESI
// 0050ad17: POP EBX
// 0050ad18: RET
// 0050ad19: TEST dword ptr [EBX + 0x4],0x7fffffff
//   Label: LAB_0050ad19
// 0050ad20: JNZ 0x0050abfa
//   XREF to: 0050abfa (CONDITIONAL_JUMP)
// 0050ad26: TEST dword ptr [EBX + 0x8],0x7fffffff
// 0050ad2d: JNZ 0x0050abfa
//   XREF to: 0050abfa (CONDITIONAL_JUMP)
// 0050ad33: JMP 0x0050ac1d
//   XREF to: 0050ac1d (UNCONDITIONAL_JUMP)
