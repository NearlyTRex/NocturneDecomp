// Name: core_sound.cpp_CSound_killSound_FUN_005b3b90
// Address: 005b3b90
// Address Range: [[005b3b90, 005b3b9d]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_killSound_FUN_005b3b90(CSound *this_ptr,uint sfx_handle)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_killSound_FUN_005b3b90(CSound *this_ptr,uint sfx_handle)

{
  sound_sndmain_cpp_killSfx_FUN_005a9c40(sfx_handle);
  return;
}
