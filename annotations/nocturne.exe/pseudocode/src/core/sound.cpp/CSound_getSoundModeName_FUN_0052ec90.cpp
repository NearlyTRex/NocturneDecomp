// Name: core_sound.cpp_CSound_getSoundModeName_FUN_0052ec90
// Address: 0052ec90
// Address Range: [[0052ec90, 0052ecac]]
// Convention: __cdecl
// Signature: char * __cdecl core_sound_cpp_CSound_getSoundModeName_FUN_0052ec90(CSound *this_ptr,int sound_mode_index)

#include "nocturne.h"

char * __cdecl core_sound_cpp_CSound_getSoundModeName_FUN_0052ec90(CSound *this_ptr,int sound_mode_index)

{
  if ((-1 < sound_mode_index) && (sound_mode_index < 0x1b)) {
    return (&PTR_s_OFF_00594c3d_005bed6c)[sound_mode_index * 4];
  }
  return &DAT_00594bfe;
}
