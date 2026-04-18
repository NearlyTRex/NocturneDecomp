// Name: core_sound.cpp_CSound_playAmbientSound_FUN_005b39b0
// Address: 005b39b0
// MANUAL RECONSTRUCTION
// Address Range: [[005b39b0, 005b3a11]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_playAmbientSound_FUN_005b39b0(CSound *this_ptr,char *sound_name)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_playAmbientSound_FUN_005b39b0(CSound *this_ptr,char *sound_name)

{
  core_sound_cpp_CSound_killSound_FUN_005b3b90(this_ptr,g_SoundAmbientSfxHandle);
  strcpy(g_SoundAmbientSoundName,sound_name);
  if (g_SoundAudioInitialized == 0) {
    return;
  }
  g_SoundAmbientSfxHandle =
       core_sound_cpp_CSound_playSound_FUN_005b3a20(this_ptr,g_CDemonSetPtr,g_SoundAmbientSoundName)
  ;
  return;
}
