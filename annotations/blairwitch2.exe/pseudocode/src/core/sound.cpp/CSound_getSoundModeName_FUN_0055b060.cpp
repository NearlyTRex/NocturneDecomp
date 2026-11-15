// Name: core_sound.cpp_CSound_getSoundModeName_FUN_0055b060
// Address: 0055b060
// Address Range: [[0055b060, 0055b07c]]
// Convention: __cdecl
// Signature: char * __cdecl core_sound_cpp_CSound_getSoundModeName_FUN_0055b060(CSound *this_ptr,int sound_mode_index)

#include "nocturne.h"

char * __cdecl core_sound_cpp_CSound_getSoundModeName_FUN_0055b060(CSound *this_ptr,int sound_mode_index)

{
  if ((-1 < sound_mode_index) && (sound_mode_index < 0x1b)) {
    return g_ReverbPresetTable[sound_mode_index].name;
  }
  return (char *)0x5ea922;
}
