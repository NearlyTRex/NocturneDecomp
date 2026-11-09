// Name: core_sound.cpp_CSound_playAmbientSound_FUN_0055adc0
// Address: 0055adc0
// Address Range: [[0055adc0, 0055ae21]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_playAmbientSound_FUN_0055adc0(CSound *this_ptr,char *sound_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_CSound_playAmbientSound_FUN_0055adc0(CSound *this_ptr,char *sound_name)

{
  char cVar1;
  char *pcVar2;
  
  core_sound_cpp_FUN_0055af80(this_ptr,_DAT_0264bad0);
  pcVar2 = &DAT_0264baa8;
  do {
    cVar1 = *sound_name;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = sound_name[1];
    sound_name = sound_name + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  if (_DAT_0264bad4 == 0) {
    return;
  }
  _DAT_0264bad0 =
       core_sound_cpp_CSound_playSound_FUN_0055ae30(this_ptr,g_CDemonSetPtr,&DAT_0264baa8);
  return;
}
