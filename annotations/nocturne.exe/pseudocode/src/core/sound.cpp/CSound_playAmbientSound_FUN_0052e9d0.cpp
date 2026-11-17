// Name: core_sound.cpp_CSound_playAmbientSound_FUN_0052e9d0
// Address: 0052e9d0
// Address Range: [[0052e9d0, 0052ea31]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_playAmbientSound_FUN_0052e9d0(CSound *this_ptr,char *sound_name)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_playAmbientSound_FUN_0052e9d0(CSound *this_ptr,char *sound_name)

{
  char cVar1;
  char *pcVar2;
  
  core_sound_cpp_CSound_killSound_FUN_0052ebb0(this_ptr,g_INT_02dc9c90);
  pcVar2 = g_CHAR_ARRAY_02dc9c68;
  do {
    cVar1 = *sound_name;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = sound_name[1];
    sound_name = sound_name + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  if (g_INT_02dc9c94 == 0) {
    return;
  }
  g_INT_02dc9c90 =
       core_sound_cpp_CSound_playSound_FUN_0052ea40(this_ptr,g_CDemonSetPtr,g_CHAR_ARRAY_02dc9c68);
  return;
}
