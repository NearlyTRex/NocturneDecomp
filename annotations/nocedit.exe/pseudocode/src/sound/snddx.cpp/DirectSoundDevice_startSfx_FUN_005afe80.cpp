// Name: sound_snddx.cpp_DirectSoundDevice_startSfx_FUN_005afe80
// Address: 005afe80
// Address Range: [[005afe80, 005b0028]]
// Convention: unknown
// Signature: undefined sound_snddx.cpp_DirectSoundDevice_startSfx_FUN_005afe80()
// Globals:
//   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
//   TerminatedCString s_sound_snddx_cpp_00652121
//   TerminatedCString s_DirectSoundDevice_startS_00652134
//   TerminatedCString s_sound_snddx_cpp_00652165
//   TerminatedCString s_DirectSoundDevice_startS_00652178
//   TerminatedCString s_sound_snddx_cpp_006521a2
//   TerminatedCString s_DirectSoundDevice_startS_006521b5
//   TerminatedCString s_Play_hardware_sfx_second_0065220f
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_03f6aa44
//   undefined4 DAT_03f6aac0
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   sound_snddx.cpp_FUN_005ade70
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0

#include "nocturne.h"

/* Signature: undefined1 sound_snddx.cpp_DirectSoundDevice_startSfx(undefined4 param_1, undefined4
   param_2) */

int sound_snddx_cpp_DirectSoundDevice_startSfx_FUN_005afe80(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  BADSPACEBASE *in_ESP;
  int *in_stack_00000004;
  int in_stack_00000008;
  int *piStack_1b4;
  int *piStack_1b0;
  
  iVar2 = *(int *)(in_stack_00000008 + 0x70);
  if ((((iVar2 < 1) || (0x1e < iVar2)) || ((&DAT_03f6aa44)[iVar2] == 0)) ||
     ((&DAT_03f6aac0)[iVar2] == 0)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 1000;
    piStack_1b0 = (int *)0x5afec2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::startSfx - invalid handle: %d");
  }
  piStack_1b0 = in_stack_00000004;
  piStack_1b4 = (int *)0x5afedc;
  iVar1 = (**(code **)(*in_stack_00000004 + 0x40))();
  if (iVar1 != 0) {
    if (*(int *)(in_stack_00000008 + 0x78) == 0) {
      g_CurrentFilename = "..\\sound\\snddx.cpp";
      g_CurrentLineNumber = 0x3f2;
      core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::startSfx - no sample??");
    }
    if ((1 < *(int *)(*(int *)(in_stack_00000008 + 0x78) + 0x124)) ||
       (0 < *(int *)(*(int *)(in_stack_00000008 + 0x78) + 0x13c))) {
      g_CurrentFilename = "..\\sound\\snddx.cpp";
      g_CurrentLineNumber = 0x3f4;
      core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::startSfx - exotic jump sequences not allowed for hardware mixed sounds");
    }
    piStack_1b4 = (int *)(&DAT_03f6aa44)[iVar2];
    piStack_1b0 = (int *)0x0;
    iVar2 = (**(code **)(*piStack_1b4 + 0x30))();
    if (iVar2 != 0) {
      uVar3 = sound_snddx_cpp_FUN_005ade70();
      crt_stdio_c_sprintf_FUN_005fdbd0
                ((char *)&piStack_1b4,"DirectSux: Unable to %s.  (%s)",
                 "Play hardware sfx secondary buffer",uVar3);
      sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
      return 0;
    }
    iVar1 = 1;
  }
  return iVar1;
}


// Assembly code:
// 005afe80: PUSH EBX
//   Label: sound_snddx.cpp_DirectSoundDevice_startSfx_FUN_005afe80
// 005afe81: PUSH ESI
// 005afe82: PUSH EDI
// 005afe83: PUSH EBP
// 005afe84: SUB ESP,0x194
// 005afe8a: MOV ESI,dword ptr [ESP + 0x1ac]
//   XREF to: Stack[0x8] (READ)
// 005afe91: MOV EBX,dword ptr [ESI + 0x70]
// 005afe94: TEST EBX,EBX
// 005afe96: JLE 0x005afea1
//   XREF to: 005afea1 (CONDITIONAL_JUMP)
// 005afe98: CMP EBX,0x1f
// 005afe9b: JL 0x005aff91
//   XREF to: 005aff91 (CONDITIONAL_JUMP)
// 005afea1: PUSH EBX
//   Label: LAB_005afea1
// 005afea2: MOV EDI,0x652121
//   XREF to: 00652121 (DATA)
// 005afea7: MOV EBP,0x3e8
// 005afeac: PUSH 0x652134
//   XREF to: 00652134 (DATA)
// 005afeb1: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005afeb7: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 005afebd: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005afec2: ADD ESP,0x8
// 005afec5: PUSH -0x1
//   Label: LAB_005afec5
// 005afec7: MOV EAX,dword ptr [ESP + 0x1ac]
//   XREF to: Stack[0x4] (READ)
// 005afece: PUSH ESI
// 005afecf: MOV EDX,dword ptr [ESP + 0x1b0]
//   XREF to: Stack[0x4] (READ)
// 005afed6: MOV EAX,dword ptr [EAX]
// 005afed8: PUSH EDX
// 005afed9: CALL dword ptr [EAX + 0x40]
// 005afedc: ADD ESP,0xc
// 005afedf: TEST EAX,EAX
// 005afee1: JZ 0x005aff86
//   XREF to: 005aff86 (CONDITIONAL_JUMP)
// 005afee7: XOR ECX,ECX
// 005afee9: MOV EDI,dword ptr [ESI + 0x78]
// 005afeec: MOV dword ptr [ESP + 0x190],ECX
// 005afef3: TEST EDI,EDI
// 005afef5: JZ 0x005affb7
//   XREF to: 005affb7 (CONDITIONAL_JUMP)
// 005afefb: MOV EAX,dword ptr [ESI + 0x78]
//   Label: LAB_005afefb
// 005afefe: CMP dword ptr [EAX + 0x124],0x1
// 005aff05: JLE 0x005affde
//   XREF to: 005affde (CONDITIONAL_JUMP)
// 005aff0b: MOV EDI,0x6521a2
//   Label: LAB_005aff0b
//   XREF to: 006521a2 (DATA)
// 005aff10: MOV EBP,0x3f4
// 005aff15: PUSH 0x6521b5
//   XREF to: 006521b5 (DATA)
// 005aff1a: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005aff20: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 005aff26: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005aff2b: ADD ESP,0x4
// 005aff2e: MOV EAX,dword ptr [ESI + 0x78]
//   Label: LAB_005aff2e
// 005aff31: CMP dword ptr [EAX + 0x124],0x1
// 005aff38: JNZ 0x005aff4b
//   XREF to: 005aff4b (CONDITIONAL_JUMP)
// 005aff3a: CMP dword ptr [EAX + 0x13c],0x0
// 005aff41: JL 0x005aff4b
//   XREF to: 005aff4b (CONDITIONAL_JUMP)
// 005aff43: OR byte ptr [ESP + 0x190],0x1
// 005aff4b: MOV EAX,dword ptr [ESI + 0x78]
//   Label: LAB_005aff4b
// 005aff4e: MOV ESI,dword ptr [EAX + 0x160]
// 005aff54: CMP ESI,dword ptr [EAX + 0x110]
// 005aff5a: JZ 0x005aff64
//   XREF to: 005aff64 (CONDITIONAL_JUMP)
// 005aff5c: OR byte ptr [ESP + 0x190],0x1
// 005aff64: MOV EBP,dword ptr [ESP + 0x190]
//   Label: LAB_005aff64
// 005aff6b: PUSH EBP
// 005aff6c: PUSH 0x0
// 005aff6e: MOV EAX,dword ptr [EBX*0x4 + 0x3f6aa44]
//   XREF to: 03f6aa44 (DATA)
// 005aff75: PUSH 0x0
// 005aff77: MOV EBX,dword ptr [EAX]
// 005aff79: PUSH EAX
// 005aff7a: CALL dword ptr [EBX + 0x30]
// 005aff7d: TEST EAX,EAX
// 005aff7f: JNZ 0x005afff0
//   XREF to: 005afff0 (CONDITIONAL_JUMP)
// 005aff81: MOV EAX,0x1
// 005aff86: ADD ESP,0x194
//   Label: LAB_005aff86
// 005aff8c: POP EBP
// 005aff8d: POP EDI
// 005aff8e: POP ESI
// 005aff8f: POP EBX
// 005aff90: RET
// 005aff91: LEA EAX,[EBX*0x4 + 0x0]
//   Label: LAB_005aff91
// 005aff98: CMP dword ptr [EAX + 0x3f6aa44],0x0
//   XREF to: 03f6aa44 (DATA)
// 005aff9f: JZ 0x005afea1
//   XREF to: 005afea1 (CONDITIONAL_JUMP)
// 005affa5: CMP dword ptr [EAX + 0x3f6aac0],0x0
//   XREF to: 03f6aac0 (DATA)
// 005affac: JZ 0x005afea1
//   XREF to: 005afea1 (CONDITIONAL_JUMP)
// 005affb2: JMP 0x005afec5
//   XREF to: 005afec5 (UNCONDITIONAL_JUMP)
// 005affb7: MOV EBP,0x652165
//   Label: LAB_005affb7
//   XREF to: 00652165 (DATA)
// 005affbc: MOV EAX,0x3f2
// 005affc1: PUSH 0x652178
//   XREF to: 00652178 (DATA)
// 005affc6: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005affcc: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005affd1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005affd6: ADD ESP,0x4
// 005affd9: JMP 0x005afefb
//   XREF to: 005afefb (UNCONDITIONAL_JUMP)
// 005affde: CMP dword ptr [EAX + 0x13c],0x0
//   Label: LAB_005affde
// 005affe5: JG 0x005aff0b
//   XREF to: 005aff0b (CONDITIONAL_JUMP)
// 005affeb: JMP 0x005aff2e
//   XREF to: 005aff2e (UNCONDITIONAL_JUMP)
// 005afff0: PUSH EAX
//   Label: LAB_005afff0
// 005afff1: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005afff6: ADD ESP,0x4
// 005afff9: PUSH EAX
// 005afffa: PUSH 0x65220f
//   XREF to: 0065220f (DATA)
// 005affff: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005b0004: LEA EAX,[ESP + 0xc]
// 005b0008: PUSH EAX
// 005b0009: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005b000e: ADD ESP,0x10
// 005b0011: MOV EAX,ESP
// 005b0013: PUSH EAX
// 005b0014: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005b0019: ADD ESP,0x4
// 005b001c: XOR EAX,EAX
// 005b001e: ADD ESP,0x194
// 005b0024: POP EBP
// 005b0025: POP EDI
// 005b0026: POP ESI
// 005b0027: POP EBX
// 005b0028: RET
