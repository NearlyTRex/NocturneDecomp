// Name: core_sound.cpp_CSound_playAmbientSound_FUN_0057d810
// Address: 0057d810
// Address Range: [[0057d810, 0057d871]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_playAmbientSound_FUN_0057d810(CSound *this_ptr,char *sound_name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_CSound_playAmbientSound_FUN_0057d810(CSound *this_ptr,char *sound_name)

{
  char cVar1;
  char *pcVar2;
  
  core_sound_cpp_CSound_killSound_FUN_0057d9d0(this_ptr,_DAT_02c832a0);
  pcVar2 = &DAT_02c83278;
  do {
    cVar1 = *sound_name;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = sound_name[1];
    sound_name = sound_name + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  if (_DAT_02c832a4 == 0) {
    return;
  }
  _DAT_02c832a0 =
       core_sound_cpp_CSound_playSound_FUN_0057d880(this_ptr,g_CDemonSetPtr,&DAT_02c83278);
  return;
}
