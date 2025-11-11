// Name: sound_sndmain.cpp_FUN_005a5db0
// Address: 005a5db0
// Address Range: [[005a5db0, 005a5e03]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a5db0()
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_0064fc6b
//   TerminatedCString s_generateSilence_invalid__0064fc80
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005a5db0(void)

{
  void *in_stack_00000004;
  uint in_stack_00000008;
  ulong in_stack_0000000c;
  int value;
  
  if (7 < in_stack_00000008) {
    if (in_stack_00000008 < 9) {
      value = 0x80;
    }
    else {
      if (in_stack_00000008 != 0x10) goto LAB_005a5de0;
      in_stack_0000000c = in_stack_0000000c * 2;
      value = 0;
    }
    crt_memory_c_memset_FUN_005fde40(in_stack_00000004,value,in_stack_0000000c);
    return;
  }
LAB_005a5de0:
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 0x5ca;
  core_main_c_displayErrorAndQuit_FUN_00506f10("generateSilence - invalid bit depth!");
  return;
}


// Assembly code:
// 005a5db0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: sound_sndmain.cpp_FUN_005a5db0
//   XREF to: Stack[0x4] (READ)
// 005a5db4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005a5db8: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005a5dbc: CMP EAX,0x8
// 005a5dbf: JC 0x005a5de0
//   XREF to: 005a5de0 (CONDITIONAL_JUMP)
// 005a5dc1: JBE 0x005a5dd8
//   XREF to: 005a5dd8 (CONDITIONAL_JUMP)
// 005a5dc3: CMP EAX,0x10
// 005a5dc6: JNZ 0x005a5de0
//   XREF to: 005a5de0 (CONDITIONAL_JUMP)
// 005a5dc8: LEA EAX,[ECX + ECX*0x1]
// 005a5dcb: PUSH EAX
// 005a5dcc: PUSH 0x0
// 005a5dce: PUSH EDX
//   Label: LAB_005a5dce
// 005a5dcf: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005a5dd4: ADD ESP,0xc
// 005a5dd7: RET
// 005a5dd8: PUSH ECX
//   Label: LAB_005a5dd8
// 005a5dd9: PUSH 0x80
// 005a5dde: JMP 0x005a5dce
//   XREF to: 005a5dce (UNCONDITIONAL_JUMP)
// 005a5de0: MOV EDX,0x64fc6b
//   Label: LAB_005a5de0
//   XREF to: 0064fc6b (DATA)
// 005a5de5: MOV ECX,0x5ca
// 005a5dea: PUSH 0x64fc80
//   XREF to: 0064fc80 (DATA)
// 005a5def: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005a5df5: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005a5dfb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a5e00: ADD ESP,0x4
// 005a5e03: RET
