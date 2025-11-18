// Name: sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0
// Address: 005ab6c0
// Address Range: [[005ab6c0, 005ab6c5]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0(void)
// Cross-references:
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00512406 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_logSoundError_FUN_005adba0 (005adba0) at 005adce2 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00 (005aae00) at 005aae8e [UNCONDITIONAL_CALL]
// Globals:
//   int g_CurrentSoundDevice = -0x1

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0(void)

{
  return g_CurrentSoundDevice;
}


// Assembly code:
// 005ab6c0: MOV EAX,[0x00681b24]
//   Label: sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0
//   XREF to: 00681b24 (READ)
// 005ab6c5: RET
