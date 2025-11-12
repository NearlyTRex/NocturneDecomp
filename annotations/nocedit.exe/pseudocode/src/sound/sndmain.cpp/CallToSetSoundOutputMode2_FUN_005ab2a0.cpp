// Name: sound_sndmain.cpp_CallToSetSoundOutputMode2_FUN_005ab2a0
// Address: 005ab2a0
// Address Range: [[005ab2a0, 005ab2b9]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_CallToSetSoundOutputMode2_FUN_005ab2a0()
// Cross-references:
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00512c30 [UNCONDITIONAL_CALL]
// Function calls:
//   sound_sndmain.cpp_getAudioBitsPerSample_FUN_005ab250
//   sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260
//   sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_CallToSetSoundOutputMode2(undefined4 param_1) */

void sound_sndmain_cpp_CallToSetSoundOutputMode2_FUN_005ab2a0(void)

{
  int channels;
  int bits_per_sample;
  int in_stack_00000004;
  
  channels = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
  bits_per_sample = sound_sndmain_cpp_getAudioBitsPerSample_FUN_005ab250();
  sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(bits_per_sample,channels,in_stack_00000004);
  return;
}


// Assembly code:
// 005ab2a0: CALL sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260
//   Label: sound_sndmain.cpp_CallToSetSoundOutputMode2_FUN_005ab2a0
//   XREF to: 005ab260 (UNCONDITIONAL_CALL)
// 005ab2a5: PUSH EAX
// 005ab2a6: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005ab2aa: PUSH EDX
// 005ab2ab: CALL sound_sndmain.cpp_getAudioBitsPerSample_FUN_005ab250
//   XREF to: 005ab250 (UNCONDITIONAL_CALL)
// 005ab2b0: PUSH EAX
// 005ab2b1: CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170
//   XREF to: 005ab170 (UNCONDITIONAL_CALL)
// 005ab2b6: ADD ESP,0xc
// 005ab2b9: RET
