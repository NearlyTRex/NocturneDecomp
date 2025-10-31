// Name: sound_sndmain.cpp_SfxSample_seek_FUN_005a65a0
// Address: 005a65a0
// Address Range: [[005a65a0, 005a6723]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_SfxSample_seek_FUN_005a65a0()
// Cross-references:
//   sound_sndmain.cpp_FUN_005a5200 (005a5200) at 005a53f3 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_pollStream_FUN_005a6730 (005a6730) at 005a698f [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_seek_FUN_005a8390 (005a8390) at 005a8456 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a93d1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_0064fdfe
//   TerminatedCString s_SfxSample_seek_s_isn_t_s_0064fe13
//   TerminatedCString s_sound_sndmain_cpp_0064fe3a
//   TerminatedCString s_SfxSample_seek_invalid_d_0064fe4f
//   TerminatedCString s_sound_sndmain_cpp_0064fe71
//   TerminatedCString s_Error_seeking_s_to_d_0064fe86
//   TerminatedCString s_sound_sndmain_cpp_0064fe9d
//   TerminatedCString s_SfxSample_seek_no_MP3_an_0064feb2
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_fseek_FUN_005ffacc
//   sound_mp3.cpp_FUN_00534ba0
//   sound_sndmain.cpp_FUN_005a8550
//   sound_sndmain.cpp_FUN_005a86f0

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_SfxSample_seek(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void sound_sndmain_cpp_SfxSample_seek_FUN_005a65a0(void)

{
  undefined4 extraout_EAX;
  int iVar1;
  undefined4 extraout_EDX;
  int unaff_EDI;
  float10 fVar2;
  double dVar3;
  int in_stack_00000004;
  int in_stack_0000000c;
  
  if (*(int *)(in_stack_00000004 + 0x15c) < 0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x797;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSample::seek - '%s' isn't streamed!");
  }
  dVar3 = (double)sound_sndmain_cpp_FUN_005a86f0();
  fVar2 = (float10)dVar3;
  dVar3 = crt_math_c_round_FUN_005fe6b0(dVar3);
  *(int *)(in_stack_00000004 + 0x164) = (int)ROUND(fVar2);
  if (*(int *)(in_stack_00000004 + 0x164) < 0) {
    *(undefined4 *)(in_stack_00000004 + 0x164) = 0;
  }
  if ((in_stack_0000000c < 0) || (*(int *)(in_stack_00000004 + 0x160) <= in_stack_0000000c)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x7a2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSample::seek - invalid destPtr");
    dVar3 = (double)CONCAT44(extraout_EDX,extraout_EAX);
  }
  *(int *)(in_stack_00000004 + 0x168) = in_stack_0000000c;
  if (*(int *)(in_stack_00000004 + 0x16c) == 0) {
    if (*(int *)(in_stack_00000004 + 0x174) == 0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x7b6;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("SfxSample::seek - no MP3 and no wavFile for sample '%s'",in_stack_00000004);
      return;
    }
    iVar1 = sound_sndmain_cpp_FUN_005a8550();
    crt_stdio_c_fseek_FUN_005ffacc
              (*(FILE **)(in_stack_00000004 + 0x174),
               iVar1 * *(int *)(in_stack_00000004 + 0x164) + *(int *)(in_stack_00000004 + 0x170),
               unaff_EDI);
  }
  else {
    iVar1 = sound_mp3_cpp_FUN_00534ba0(SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20));
    if (iVar1 == 0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x7ab;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Error seeking %s to %d",in_stack_00000004,
                 *(undefined4 *)(in_stack_00000004 + 0x164));
      return;
    }
  }
  return;
}


// Assembly code:
// 005a65a0: PUSH EBX
//   Label: sound_sndmain.cpp_SfxSample_seek_FUN_005a65a0
// 005a65a1: PUSH ESI
// 005a65a2: PUSH EDI
// 005a65a3: PUSH EBP
// 005a65a4: SUB ESP,0xc
// 005a65a7: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005a65ab: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 005a65af: CMP dword ptr [EBX + 0x15c],0x0
// 005a65b6: JL 0x005a667b
//   XREF to: 005a667b (CONDITIONAL_JUMP)
// 005a65bc: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_005a65bc
//   XREF to: Stack[0x8] (READ)
// 005a65c0: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a65c4: PUSH 0x0
// 005a65c6: FILD dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 005a65ca: SUB ESP,0x8
// 005a65cd: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 005a65d0: PUSH EBX
// 005a65d1: CALL sound_sndmain.cpp_FUN_005a86f0
//   XREF to: 005a86f0 (UNCONDITIONAL_CALL)
// 005a65d6: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a65da: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005a65de: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 005a65e2: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a65e7: FISTP dword ptr [EBX + 0x164]
// 005a65ed: MOV EBP,dword ptr [EBX + 0x164]
// 005a65f3: ADD ESP,0x10
// 005a65f6: TEST EBP,EBP
// 005a65f8: JL 0x005a66a4
//   XREF to: 005a66a4 (CONDITIONAL_JUMP)
// 005a65fe: TEST ESI,ESI
//   Label: LAB_005a65fe
// 005a6600: JL 0x005a660a
//   XREF to: 005a660a (CONDITIONAL_JUMP)
// 005a6602: CMP ESI,dword ptr [EBX + 0x160]
// 005a6608: JL 0x005a662d
//   XREF to: 005a662d (CONDITIONAL_JUMP)
// 005a660a: MOV EDX,0x64fe3a
//   Label: LAB_005a660a
//   XREF to: 0064fe3a (PARAM)
// 005a660f: MOV ECX,0x7a2
// 005a6614: PUSH 0x64fe4f
//   XREF to: 0064fe4f (DATA)
// 005a6619: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005a661f: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005a6625: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a662a: ADD ESP,0x4
// 005a662d: MOV dword ptr [EBX + 0x168],ESI
//   Label: LAB_005a662d
// 005a6633: MOV ESI,dword ptr [EBX + 0x16c]
// 005a6639: TEST ESI,ESI
// 005a663b: JNZ 0x005a66b3
//   XREF to: 005a66b3 (CONDITIONAL_JUMP)
// 005a663d: CMP dword ptr [EBX + 0x174],0x0
// 005a6644: JZ 0x005a66f9
//   XREF to: 005a66f9 (CONDITIONAL_JUMP)
// 005a664a: PUSH ESI
// 005a664b: PUSH EBX
// 005a664c: CALL sound_sndmain.cpp_FUN_005a8550
//   XREF to: 005a8550 (UNCONDITIONAL_CALL)
// 005a6651: IMUL EAX,dword ptr [EBX + 0x164]
// 005a6658: MOV ECX,dword ptr [EBX + 0x170]
// 005a665e: ADD ESP,0x4
// 005a6661: ADD EAX,ECX
// 005a6663: PUSH EAX
// 005a6664: MOV ESI,dword ptr [EBX + 0x174]
// 005a666a: PUSH ESI
// 005a666b: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 005a6670: ADD ESP,0xc
// 005a6673: ADD ESP,0xc
//   Label: LAB_005a6673
// 005a6676: POP EBP
// 005a6677: POP EDI
// 005a6678: POP ESI
// 005a6679: POP EBX
// 005a667a: RET
// 005a667b: PUSH EBX
//   Label: LAB_005a667b
// 005a667c: MOV ECX,0x64fdfe
//   XREF to: 0064fdfe (PARAM)
// 005a6681: MOV EDI,0x797
// 005a6686: PUSH 0x64fe13
//   XREF to: 0064fe13 (DATA)
// 005a668b: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a6691: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005a6697: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a669c: ADD ESP,0x8
// 005a669f: JMP 0x005a65bc
//   XREF to: 005a65bc (UNCONDITIONAL_JUMP)
// 005a66a4: MOV dword ptr [EBX + 0x164],0x0
//   Label: LAB_005a66a4
// 005a66ae: JMP 0x005a65fe
//   XREF to: 005a65fe (UNCONDITIONAL_JUMP)
// 005a66b3: MOV EDI,dword ptr [EBX + 0x164]
//   Label: LAB_005a66b3
// 005a66b9: PUSH EDI
// 005a66ba: PUSH ESI
// 005a66bb: CALL sound_mp3.cpp_FUN_00534ba0
//   XREF to: 00534ba0 (UNCONDITIONAL_CALL)
// 005a66c0: ADD ESP,0x8
// 005a66c3: TEST EAX,EAX
// 005a66c5: JNZ 0x005a6673
//   XREF to: 005a6673 (CONDITIONAL_JUMP)
// 005a66c7: MOV ECX,dword ptr [EBX + 0x164]
// 005a66cd: PUSH ECX
// 005a66ce: PUSH EBX
// 005a66cf: MOV EAX,0x64fe71
//   XREF to: 0064fe71 (PARAM)
// 005a66d4: MOV EDX,0x7ab
// 005a66d9: PUSH 0x64fe86
//   XREF to: 0064fe86 (DATA)
// 005a66de: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005a66e3: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005a66e9: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a66ee: ADD ESP,0xc
// 005a66f1: ADD ESP,0xc
// 005a66f4: POP EBP
// 005a66f5: POP EDI
// 005a66f6: POP ESI
// 005a66f7: POP EBX
// 005a66f8: RET
// 005a66f9: PUSH EBX
//   Label: LAB_005a66f9
// 005a66fa: MOV EBP,0x64fe9d
//   XREF to: 0064fe9d (DATA)
// 005a66ff: MOV EAX,0x7b6
// 005a6704: PUSH 0x64feb2
//   XREF to: 0064feb2 (DATA)
// 005a6709: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005a670f: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005a6714: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a6719: ADD ESP,0x8
// 005a671c: ADD ESP,0xc
// 005a671f: POP EBP
// 005a6720: POP EDI
// 005a6721: POP ESI
// 005a6722: POP EBX
// 005a6723: RET
