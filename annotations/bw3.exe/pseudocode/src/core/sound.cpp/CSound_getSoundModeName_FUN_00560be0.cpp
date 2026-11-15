// Name: core_sound.cpp_CSound_getSoundModeName_FUN_00560be0
// Address: 00560be0
// Address Range: [[00560be0, 00560bfc]]
// Convention: __cdecl
// Signature: char * __cdecl core_sound_cpp_CSound_getSoundModeName_FUN_00560be0(CSound *this_ptr,int sound_mode_index)

#include "nocturne.h"

char * __cdecl core_sound_cpp_CSound_getSoundModeName_FUN_00560be0(CSound *this_ptr,int sound_mode_index)

{
  if ((-1 < sound_mode_index) && (sound_mode_index < 0x1b)) {
    return g_ReverbPresetTable[sound_mode_index].name;
  }
  return (char *)0x5d5376;
}
