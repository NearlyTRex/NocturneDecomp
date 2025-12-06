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
  char *in_stack_0000000c;
  
  core_sound_cpp_CSound_killSound_FUN_005b3b90(this_ptr,g_SoundAmbientSfxHandle);
  pcVar2 = g_SoundAmbientSoundName;
  do {
    cVar1 = *in_stack_0000000c;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_0000000c[1];
    in_stack_0000000c = in_stack_0000000c + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  if (g_SoundAudioInitialized == 0) {
    return;
  }
  core_sound_cpp_CSound_playSound_FUN_005b3a20
            ((CSound *)sound_name,g_CDemonSetPtr,g_SoundAmbientSoundName);
  g_SoundAmbientSfxHandle = extraout_EAX;
  return;
}
