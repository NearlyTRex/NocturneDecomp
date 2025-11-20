// Name: core_sound.cpp_CSound_shutdownSounds_FUN_005aaeb0
// Address: 005b2d60
// Address Range: [[005b2d60, 005b2d64]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_shutdownSounds_FUN_005aaeb0(void)
// Cross-references:
//   core_main.c_displayErrorAndQuit_FUN_00506f10 (00506f10) at 00507015 [UNCONDITIONAL_CALL]
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 005087de [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_shutdownSounds_FUN_005aaeb0(void)

{
  sound_sndmain_cpp_shutdownSoundSystem_FUN_005aaeb0();
  return;
}


// Assembly code:
// 005b2d60: JMP 0x005aaeb0
//   Label: core_sound.cpp_CSound_shutdownSounds_FUN_005aaeb0
//   XREF to: 005aaeb0 (UNCONDITIONAL_JUMP)
