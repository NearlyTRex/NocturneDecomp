// Name: sound_sndmain.cpp_enableHwSoundMixing_FUN_005ab550
// Address: 005ab550
// Address Range: [[005ab550, 005ab58f]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_enableHwSoundMixing_FUN_005ab550(int enable)
// Cross-references:
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00512d0a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005ac03c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_00650cd9
//   TerminatedCString s_enableHwSoundMixing_Can__00650cee
//   int g_HardwareMixingEnabled = 0x1
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_enableHwSoundMixing_FUN_005ab550(int enable)

{
  uint uVar1;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  uVar1 = sound_sndmain_cpp_isSoundSystemActive_FUN_005ab530();
  if (uVar1 == 0) {
    g_HardwareMixingEnabled = in_stack_00000008;
    return;
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 0x135b;
  core_main_c_displayErrorAndQuit_FUN_00506f10("enableHwSoundMixing - Can't do this while the device is open.");
  g_HardwareMixingEnabled = in_stack_0000000c;
  return;
}


// Assembly code:
// 005ab550: CALL sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530
//   Label: sound_sndmain.cpp_enableHwSoundMixing_FUN_005ab550
//   XREF to: 005ab530 (UNCONDITIONAL_CALL)
// 005ab555: TEST EAX,EAX
// 005ab557: JNZ 0x005ab563
//   XREF to: 005ab563 (CONDITIONAL_JUMP)
// 005ab559: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005ab55d: MOV [0x00681b28],EAX
//   XREF to: 00681b28 (WRITE)
// 005ab562: RET
// 005ab563: MOV EDX,0x650cd9
//   Label: LAB_005ab563
//   XREF to: 00650cd9 (PARAM)
// 005ab568: MOV ECX,0x135b
// 005ab56d: PUSH 0x650cee
//   XREF to: 00650cee (DATA)
// 005ab572: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005ab578: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005ab57e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ab583: ADD ESP,0x4
// 005ab586: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005ab58a: MOV [0x00681b28],EAX
//   XREF to: 00681b28 (WRITE)
// 005ab58f: RET
