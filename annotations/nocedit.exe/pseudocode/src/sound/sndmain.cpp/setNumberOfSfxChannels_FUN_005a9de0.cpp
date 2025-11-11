// Name: sound_sndmain.cpp_setNumberOfSfxChannels_FUN_005a9de0
// Address: 005a9de0
// Address Range: [[005a9de0, 005a9e1f]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setNumberOfSfxChannels_FUN_005a9de0(int channel_count)
// Cross-references:
//   core_sound.cpp_CSound_FUN_005b2ce0 (005b2ce0) at 005b2ced [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_00650a74
//   TerminatedCString s_setNumberOfSfxChannels_t_00650a89
//   int g_MaxSoundChannels = 0x20
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNumberOfSfxChannels_FUN_005a9de0(int channel_count)

{
  int in_stack_00000008;
  
  if (channel_count < 0x21) {
    g_MaxSoundChannels = channel_count;
    return;
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 0xf9b;
  core_main_c_displayErrorAndQuit_FUN_00506f10("setNumberOfSfxChannels - too many!");
  g_MaxSoundChannels = in_stack_00000008;
  return;
}


// Assembly code:
// 005a9de0: CMP dword ptr [ESP + 0x4],0x20
//   Label: sound_sndmain.cpp_setNumberOfSfxChannels_FUN_005a9de0
//   XREF to: Stack[0x4] (READ)
// 005a9de5: JG 0x005a9df1
//   XREF to: 005a9df1 (CONDITIONAL_JUMP)
// 005a9de7: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005a9deb: MOV [0x00681b10],EAX
//   XREF to: 00681b10 (WRITE)
// 005a9df0: RET
// 005a9df1: PUSH EBX
//   Label: LAB_005a9df1
// 005a9df2: MOV ECX,0x650a74
//   XREF to: 00650a74 (DATA)
// 005a9df7: MOV EBX,0xf9b
// 005a9dfc: PUSH 0x650a89
//   XREF to: 00650a89 (DATA)
// 005a9e01: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a9e07: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005a9e0d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a9e12: ADD ESP,0x4
// 005a9e15: POP EBX
// 005a9e16: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005a9e1a: MOV [0x00681b10],EAX
//   XREF to: 00681b10 (WRITE)
// 005a9e1f: RET
