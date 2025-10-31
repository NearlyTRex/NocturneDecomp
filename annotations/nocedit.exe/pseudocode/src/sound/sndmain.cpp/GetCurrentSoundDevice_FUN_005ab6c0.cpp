// Name: sound_sndmain.cpp_GetCurrentSoundDevice_FUN_005ab6c0
// Address: 005ab6c0
// Address Range: [[005ab6c0, 005ab6c5]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_GetCurrentSoundDevice_FUN_005ab6c0()
// Cross-references:
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00512406 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005aae00 (005aae00) at 005aae8e [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0 (005adba0) at 005adce2 [UNCONDITIONAL_CALL]
// Globals:
//   int g_CurrentSoundDevice = -0x1

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_GetCurrentSoundDevice() */

int sound_sndmain_cpp_GetCurrentSoundDevice_FUN_005ab6c0(void)

{
  return g_CurrentSoundDevice;
}


// Assembly code:
// 005ab6c0: MOV EAX,[0x00681b24]
//   Label: sound_sndmain.cpp_GetCurrentSoundDevice_FUN_005ab6c0
//   XREF to: 00681b24 (READ)
// 005ab6c5: RET
