// Name: core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80
// Address: 005b3b80
// Address Range: [[005b3b80, 005b3b8d]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80(CSound * this_ptr, uint sfx_handle)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80(CSound *this_ptr,uint sfx_handle)

{
  sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(sfx_handle);
  return;
}
