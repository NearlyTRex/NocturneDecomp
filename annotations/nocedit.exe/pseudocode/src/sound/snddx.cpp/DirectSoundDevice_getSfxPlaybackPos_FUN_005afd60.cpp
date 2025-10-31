// Name: sound_snddx.cpp_DirectSoundDevice_getSfxPlaybackPos_FUN_005afd60
// Address: 005afd60
// Address Range: [[005afd60, 005afe79]]
// Convention: unknown
// Signature: undefined sound_snddx.cpp_DirectSoundDevice_getSfxPlaybackPos_FUN_005afd60()
// Globals:
//   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
//   TerminatedCString s_sound_snddx_cpp_006520a3
//   TerminatedCString s_DirectSoundDevice_getSfx_006520b6
//   TerminatedCString s_Get_playback_cursor_of_h_006520ec
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_03f6aa44
//   undefined4 DAT_03f6aac0
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   sound_snddx.cpp_FUN_005ade70
//   sound_sndmain.cpp_FUN_005a8550
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0

#include "nocturne.h"

/* Signature: undefined1 sound_snddx.cpp_DirectSoundDevice_getSfxPlaybackPos(undefined1 param_1,
   undefined4 param_2) */

double sound_snddx_cpp_DirectSoundDevice_getSfxPlaybackPos_FUN_005afd60(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  undefined8 uVar4;
  uint uStack_20;
  undefined1 local_14 [4];
  
  iVar1 = *(int *)(in_stack_00000008 + 0x70);
  if ((((iVar1 < 1) || (0x1e < iVar1)) || ((&DAT_03f6aa44)[iVar1] == 0)) ||
     ((&DAT_03f6aac0)[iVar1] == 0)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 0x3d6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::getSfxPlaybackPos - invalid handle");
  }
  uVar4 = CONCAT44(local_14,(int *)(&DAT_03f6aa44)[iVar1]);
  iVar1 = (**(code **)(*(int *)(&DAT_03f6aa44)[iVar1] + 0x10))();
  if (iVar1 != 0) {
    uVar3 = sound_snddx_cpp_FUN_005ade70();
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xfffffe44,"DirectSux: Unable to %s.  (%s)",
               "Get playback cursor of hardware sfx secondary buffer",uVar3,uVar4);
    sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
    return -1.0;
  }
  uVar2 = sound_sndmain_cpp_FUN_005a8550();
  return (double)(uStack_20 / uVar2);
}


// Assembly code:
// 005afd60: PUSH EBX
//   Label: sound_snddx.cpp_DirectSoundDevice_getSfxPlaybackPos_FUN_005afd60
// 005afd61: PUSH ESI
// 005afd62: PUSH EDI
// 005afd63: PUSH EBP
// 005afd64: MOV EBP,ESP
// 005afd66: SUB ESP,0x1a8
// 005afd6c: AND ESP,0xfffffff8
// 005afd6f: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005afd72: MOV EBX,dword ptr [EBX + 0x70]
// 005afd75: TEST EBX,EBX
// 005afd77: JLE 0x005afd82
//   XREF to: 005afd82 (CONDITIONAL_JUMP)
// 005afd79: CMP EBX,0x1f
// 005afd7c: JL 0x005afe0a
//   XREF to: 005afe0a (CONDITIONAL_JUMP)
// 005afd82: MOV ESI,0x6520a3
//   Label: LAB_005afd82
//   XREF to: 006520a3 (DATA)
// 005afd87: MOV EDI,0x3d6
// 005afd8c: PUSH 0x6520b6
//   XREF to: 006520b6 (DATA)
// 005afd91: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005afd97: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005afd9d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005afda2: ADD ESP,0x4
// 005afda5: LEA EDX,[ESP + 0x1a0]
//   Label: LAB_005afda5
//   XREF to: Stack[-0x18] (DATA)
// 005afdac: PUSH EDX
// 005afdad: LEA EDX,[ESP + 0x1a8]
//   XREF to: Stack[-0x14] (DATA)
// 005afdb4: MOV EAX,dword ptr [EBX*0x4 + 0x3f6aa44]
//   XREF to: 03f6aa44 (DATA)
// 005afdbb: PUSH EDX
// 005afdbc: MOV EBX,dword ptr [EAX]
// 005afdbe: PUSH EAX
// 005afdbf: CALL dword ptr [EBX + 0x10]
// 005afdc2: TEST EAX,EAX
// 005afdc4: JNZ 0x005afe30
//   XREF to: 005afe30 (CONDITIONAL_JUMP)
// 005afdc6: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005afdc9: MOV ECX,dword ptr [EAX + 0x78]
// 005afdcc: PUSH ECX
// 005afdcd: CALL sound_sndmain.cpp_FUN_005a8550
//   XREF to: 005a8550 (UNCONDITIONAL_CALL)
// 005afdd2: MOV EBX,EAX
// 005afdd4: ADD ESP,0x4
// 005afdd7: XOR EDX,EDX
// 005afdd9: MOV EAX,dword ptr [ESP + 0x1a4]
// 005afde0: DIV EBX
// 005afde2: XOR EBX,EBX
// 005afde4: MOV dword ptr [ESP + 0x198],EAX
// 005afdeb: MOV dword ptr [ESP + 0x19c],EBX
// 005afdf2: FILD qword ptr [ESP + 0x198]
// 005afdf9: FSTP double ptr [ESP]
// 005afdfc: MOV EAX,dword ptr [ESP]
// 005afdff: MOV EDX,dword ptr [ESP + 0x4]
// 005afe03: MOV ESP,EBP
// 005afe05: POP EBP
// 005afe06: POP EDI
// 005afe07: POP ESI
// 005afe08: POP EBX
// 005afe09: RET
// 005afe0a: LEA EAX,[EBX*0x4 + 0x0]
//   Label: LAB_005afe0a
// 005afe11: CMP dword ptr [EAX + 0x3f6aa44],0x0
//   XREF to: 03f6aa44 (DATA)
// 005afe18: JZ 0x005afd82
//   XREF to: 005afd82 (CONDITIONAL_JUMP)
// 005afe1e: CMP dword ptr [EAX + 0x3f6aac0],0x0
//   XREF to: 03f6aac0 (DATA)
// 005afe25: JZ 0x005afd82
//   XREF to: 005afd82 (CONDITIONAL_JUMP)
// 005afe2b: JMP 0x005afda5
//   XREF to: 005afda5 (UNCONDITIONAL_JUMP)
// 005afe30: PUSH EAX
//   Label: LAB_005afe30
// 005afe31: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005afe36: ADD ESP,0x4
// 005afe39: PUSH EAX
// 005afe3a: PUSH 0x6520ec
//   XREF to: 006520ec (DATA)
// 005afe3f: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005afe44: LEA EAX,[ESP + 0x14]
// 005afe48: PUSH EAX
// 005afe49: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005afe4e: ADD ESP,0x10
// 005afe51: LEA EAX,[ESP + 0x8]
// 005afe55: PUSH EAX
// 005afe56: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005afe5b: ADD ESP,0x4
// 005afe5e: XOR EAX,EAX
// 005afe60: MOV EDX,0xbff00000
// 005afe65: MOV dword ptr [ESP],EAX
// 005afe68: MOV dword ptr [ESP + 0x4],EDX
// 005afe6c: MOV EAX,dword ptr [ESP]
// 005afe6f: MOV EDX,dword ptr [ESP + 0x4]
// 005afe73: MOV ESP,EBP
// 005afe75: POP EBP
// 005afe76: POP EDI
// 005afe77: POP ESI
// 005afe78: POP EBX
// 005afe79: RET
