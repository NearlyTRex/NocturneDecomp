// Name: sound_sndmain.cpp_FUN_005ab270
// Address: 005ab270
// Address Range: [[005ab270, 005ab275]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005ab270()
// Cross-references:
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 0051252a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CallToSetSoundMode_FUN_005ab280 (005ab280) at 005ab286 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CallToSetSoundOutputMode3_FUN_005ab2c0 (005ab2c0) at 005ab2c5 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0 (005adba0) at 005add1a [UNCONDITIONAL_CALL]
// Globals:
//   int g_AudioChannels = 0x2

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_FUN_005ab270() */

int sound_sndmain_cpp_FUN_005ab270(void)

{
  return g_AudioChannels;
}


// Assembly code:
// 005ab270: MOV EAX,[0x00681b18]
//   Label: sound_sndmain.cpp_FUN_005ab270
//   XREF to: 00681b18 (READ)
// 005ab275: RET
