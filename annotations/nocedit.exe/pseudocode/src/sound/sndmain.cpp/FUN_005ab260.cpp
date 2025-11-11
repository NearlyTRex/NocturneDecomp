// Name: sound_sndmain.cpp_FUN_005ab260
// Address: 005ab260
// Address Range: [[005ab260, 005ab265]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005ab260()
// Cross-references:
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 0051228c [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b3830 (005b3830) at 005b3951 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CallToSetSoundMode_FUN_005ab280 (005ab280) at 005ab280 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CallToSetSoundOutputMode2_FUN_005ab2a0 (005ab2a0) at 005ab2a0 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0 (005adba0) at 005add2e [UNCONDITIONAL_CALL]
// Globals:
//   int g_AudioSampleRate = 0x5622

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_FUN_005ab260() */

int sound_sndmain_cpp_FUN_005ab260(void)

{
  return g_AudioSampleRate;
}


// Assembly code:
// 005ab260: MOV EAX,[0x00681b1c]
//   Label: sound_sndmain.cpp_FUN_005ab260
//   XREF to: 00681b1c (READ)
// 005ab265: RET
