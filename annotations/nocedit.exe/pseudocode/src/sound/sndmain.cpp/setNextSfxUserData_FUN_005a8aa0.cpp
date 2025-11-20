// Name: sound_sndmain.cpp_setNextSfxUserData_FUN_005a8aa0
// Address: 005a8aa0
// Address Range: [[005a8aa0, 005a8aef]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setNextSfxUserData_FUN_005a8aa0(int index, void * userdata)
// Cross-references:
//   core_sound.cpp_playSfxInternal_FUN_005b1fd0 (005b1fd0) at 005b21e5 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_00650812
//   TerminatedCString s_setNextSfxUserData_inval_00650827
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_SfxLastSlot
//   undefined4 g_SfxLastSlot.field_20[68]
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxUserData_FUN_005a8aa0(int index,void *userdata)

{
  undefined4 in_stack_0000000c;
  
  if ((index < 0) || (1 < index)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xcf3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setNextSfxUserData - invalid user data index: %d",index);
  }
  *(undefined4 *)(g_SfxLastSlot * 0x70 + 0x3f624fc + index * 4) = in_stack_0000000c;
  return;
}


// Assembly code:
// 005a8aa0: PUSH EBX
//   Label: sound_sndmain.cpp_setNextSfxUserData_FUN_005a8aa0
// 005a8aa1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a8aa5: TEST EBX,EBX
// 005a8aa7: JL 0x005a8aca
//   XREF to: 005a8aca (CONDITIONAL_JUMP)
// 005a8aa9: CMP EBX,0x2
// 005a8aac: JGE 0x005a8aca
//   XREF to: 005a8aca (CONDITIONAL_JUMP)
// 005a8aae: MOV EAX,[0x03f624a4]
//   Label: LAB_005a8aae
//   XREF to: 03f624a4 (READ)
// 005a8ab3: SHL EAX,0x4
// 005a8ab6: MOV EDX,EAX
// 005a8ab8: SHL EAX,0x3
// 005a8abb: SUB EAX,EDX
// 005a8abd: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005a8ac1: MOV dword ptr [EAX + EBX*0x4 + 0x3f624fc],EDX
//   XREF to: 03f624fc (DATA)
// 005a8ac8: POP EBX
// 005a8ac9: RET
// 005a8aca: PUSH EBX
//   Label: LAB_005a8aca
// 005a8acb: MOV EDX,0x650812
//   XREF to: 00650812 (PARAM)
// 005a8ad0: MOV ECX,0xcf3
// 005a8ad5: PUSH 0x650827
//   XREF to: 00650827 (DATA)
// 005a8ada: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005a8ae0: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005a8ae6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a8aeb: ADD ESP,0x8
// 005a8aee: JMP 0x005a8aae
//   XREF to: 005a8aae (UNCONDITIONAL_JUMP)
