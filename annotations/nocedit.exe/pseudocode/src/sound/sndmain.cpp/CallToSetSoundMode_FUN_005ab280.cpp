// Name: sound_sndmain.cpp_CallToSetSoundMode_FUN_005ab280
// Address: 005ab280
// Address Range: [[005ab280, 005ab299]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_CallToSetSoundMode_FUN_005ab280()
// Cross-references:
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00512be1 [UNCONDITIONAL_CALL]
// Function calls:
//   sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270
//   sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260
//   sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_CallToSetSoundMode(undefined4 param_1) */

void sound_sndmain_cpp_CallToSetSoundMode_FUN_005ab280(void)

{
  int channels;
  int in_stack_00000004;
  int in_stack_0000000c;
  
  sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
  channels = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
  sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(in_stack_0000000c,channels,in_stack_00000004);
  return;
}


// Assembly code:
// 005ab280: CALL sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260
//   Label: sound_sndmain.cpp_CallToSetSoundMode_FUN_005ab280
//   XREF to: 005ab260 (UNCONDITIONAL_CALL)
// 005ab285: PUSH EAX
// 005ab286: CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270
//   XREF to: 005ab270 (UNCONDITIONAL_CALL)
// 005ab28b: PUSH EAX
// 005ab28c: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005ab290: PUSH EDX
// 005ab291: CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170
//   XREF to: 005ab170 (UNCONDITIONAL_CALL)
// 005ab296: ADD ESP,0xc
// 005ab299: RET
