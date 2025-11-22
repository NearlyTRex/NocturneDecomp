// Name: sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260
// Address: 005ab260
// Address Range: [[005ab260, 005ab265]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260(void)
// Cross-references:
//   core_menu.cpp_configureSoundOptions_FUN_00511e50 (00511e50) at 0051228c [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_configure_FUN_005b3830 (005b3830) at 005b3951 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_logSoundError_FUN_005adba0 (005adba0) at 005add2e [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setAudioBitDepth_FUN_005ab280 (005ab280) at 005ab280 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setAudioChannelCount_FUN_005ab2a0 (005ab2a0) at 005ab2a0 [UNCONDITIONAL_CALL]
// Globals:
//   int g_AudioSampleRate = 0x5622

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260(void)

{
  return g_AudioSampleRate;
}


// Assembly code:
// 005ab260: MOV EAX,[0x00681b1c]
//   Label: sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260
//   XREF to: 00681b1c (READ)
// 005ab265: RET
