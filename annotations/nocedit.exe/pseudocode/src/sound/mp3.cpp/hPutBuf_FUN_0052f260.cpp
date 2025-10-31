// Name: sound_mp3.cpp_hPutBuf_FUN_0052f260
// Address: 0052f260
// Address Range: [[0052f260, 0052f2b5]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_hPutBuf_FUN_0052f260()
// Cross-references:
//   sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40 (00534d40) at 0053564f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_mp3_cpp_0063adb8
//   TerminatedCString s_hputbuf_Not_Supported_ye_0063adc9
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined1 DAT_02f68188
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* Signature: undefined1 sound_mp3.cpp_hPutBuf(undefined4 param_1, undefined4 param_2, undefined4
   param_3) */

void sound_mp3_cpp_hPutBuf_FUN_0052f260(void)

{
  int in_stack_00000004;
  int in_stack_0000000c;
  
  if (in_stack_0000000c != 8) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0x2d5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("hputbuf - Not Supported yet!!  File: %s",&DAT_02f68188);
  }
  *(int *)(in_stack_00000004 + 0x131c + (*(uint *)(in_stack_00000004 + 0x1310) & 0xfff) * 4) =
       in_stack_0000000c;
  *(int *)(in_stack_00000004 + 0x1310) = *(int *)(in_stack_00000004 + 0x1310) + 1;
  return;
}


// Assembly code:
// 0052f260: PUSH EBX
//   Label: sound_mp3.cpp_hPutBuf_FUN_0052f260
// 0052f261: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0052f265: CMP dword ptr [ESP + 0x10],0x8
//   XREF to: Stack[0xc] (READ)
// 0052f26a: JNZ 0x0052f28a
//   XREF to: 0052f28a (CONDITIONAL_JUMP)
// 0052f26c: MOV EAX,dword ptr [EBX + 0x1310]
//   Label: LAB_0052f26c
// 0052f272: AND EAX,0xfff
// 0052f277: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0052f27b: MOV dword ptr [EBX + EAX*0x4 + 0x131c],EDX
// 0052f282: INC dword ptr [EBX + 0x1310]
// 0052f288: POP EBX
// 0052f289: RET
// 0052f28a: PUSH ESI
//   Label: LAB_0052f28a
// 0052f28b: PUSH 0x2f68188
//   XREF to: 02f68188 (DATA)
// 0052f290: MOV ECX,0x63adb8
//   XREF to: 0063adb8 (PARAM)
// 0052f295: MOV ESI,0x2d5
// 0052f29a: PUSH 0x63adc9
//   XREF to: 0063adc9 (DATA)
// 0052f29f: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0052f2a5: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0052f2ab: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052f2b0: ADD ESP,0x8
// 0052f2b3: POP ESI
// 0052f2b4: JMP 0x0052f26c
//   XREF to: 0052f26c (UNCONDITIONAL_JUMP)
