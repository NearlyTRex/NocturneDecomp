// Name: sound_sndmain.cpp_getAudioBitsPerSample_FUN_005ab250
// Address: 005ab250
// Address Range: [[005ab250, 005ab255]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_getAudioBitsPerSample_FUN_005ab250(void)
// Cross-references:
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00512344 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005ab2a0 (005ab2a0) at 005ab2ab [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005ab2c0 (005ab2c0) at 005ab2cb [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_logSoundError_FUN_005adba0 (005adba0) at 005add06 [UNCONDITIONAL_CALL]
// Globals:
//   int g_AudioBitsPerSample = 0x10

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getAudioBitsPerSample_FUN_005ab250(void)

{
  return g_AudioBitsPerSample;
}


// Assembly code:
// 005ab250: MOV EAX,[0x00681b14]
//   Label: sound_sndmain.cpp_getAudioBitsPerSample_FUN_005ab250
//   XREF to: 00681b14 (READ)
// 005ab255: RET
