// Name: core_sound.cpp_CSound_getSoundModeName_FUN_0057dab0
// Address: 0057dab0
// Address Range: [[0057dab0, 0057dacc]]
// Convention: __cdecl
// Signature: char * __cdecl core_sound_cpp_CSound_getSoundModeName_FUN_0057dab0(CSound *this_ptr,int sound_mode_index)

#include "nocturne.h"

char * __cdecl core_sound_cpp_CSound_getSoundModeName_FUN_0057dab0(CSound *this_ptr,int sound_mode_index)

{
  if ((-1 < sound_mode_index) && (sound_mode_index < 0x1b)) {
    return *(char **)(sound_mode_index * 0x10 + 0x6236bc);
  }
  return (char *)0x5f5b26;
}
