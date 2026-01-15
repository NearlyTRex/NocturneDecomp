// Name: core_sound.cpp_CSound_playAmbientSound_FUN_005b39b0
// Address: 005b39b0
// Address Range: [[005b39b0, 005b3a11]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_playAmbientSound_FUN_005b39b0(CSound * this_ptr, char * sound_name)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_playAmbientSound_FUN_005b39b0(CSound *this_ptr,char *sound_name)

{
  char cVar1;
  int extraout_EAX;
  char *pcVar2;
  
  core_sound_cpp_CSound_killSound_FUN_005b3b90(this_ptr,g_SoundAmbientSfxHandle);
  pcVar2 = g_SoundAmbientSoundName;
  do {
    cVar1 = *sound_name;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = sound_name[1];
    sound_name = sound_name + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  if (g_SoundAudioInitialized == 0) {
    return;
  }
  core_sound_cpp_CSound_playSound_FUN_005b3a20(this_ptr,g_CDemonSetPtr,g_SoundAmbientSoundName);
  g_SoundAmbientSfxHandle = extraout_EAX;
  return;
}
