// Name: core_sound.cpp_CSound_shutdown_FUN_005b2f70
// Address: 005b2f70
// MANUAL RECONSTRUCTION
// Address Range: [[005b2f70, 005b2fbb]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_shutdown_FUN_005b2f70(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_shutdown_FUN_005b2f70(CSound *this_ptr)

{
  int iVar2;

  g_SoundAudioInitialized = 0;
  for (iVar2 = 0; iVar2 < 10; iVar2 = iVar2 + 1) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainNoiseArray[iVar2].sfx_handle);
  }
  sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainRailNoiseHandle);
  sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainExteriorAmbientHandle);
  sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
  return;
}
