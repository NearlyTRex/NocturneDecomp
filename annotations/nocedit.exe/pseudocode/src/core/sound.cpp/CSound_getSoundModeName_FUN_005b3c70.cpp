// Name: core_sound.cpp_CSound_getSoundModeName_FUN_005b3c70
// Address: 005b3c70
// Address Range: [[005b3c70, 005b3c8c]]
// Convention: __cdecl
// Signature: char * __cdecl core_sound_cpp_CSound_getSoundModeName_FUN_005b3c70(CSound *this_ptr,int sound_mode_index)

#include "nocturne.h"

char * __cdecl
core_sound_cpp_CSound_getSoundModeName_FUN_005b3c70(CSound *this_ptr,int sound_mode_index)

{
  if ((-1 < sound_mode_index) && (sound_mode_index < 0x1b)) {
    return g_SoundModeTable[sound_mode_index].name;
  }
  return "????";
}
