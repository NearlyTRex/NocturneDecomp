// Name: core_sound.cpp_CSound_ctor_FUN_0052dd00
// Address: 0052dd00
// Address Range: [[0052dd00, 0052dd1d]]
// Convention: __cdecl
// Signature: CSound * __cdecl core_sound_cpp_CSound_ctor_FUN_0052dd00(CSound *this_ptr)

#include "nocturne.h"

CSound * __cdecl core_sound_cpp_CSound_ctor_FUN_0052dd00(CSound *this_ptr)

{
  this_ptr->magic = 0x1400;
  sound_sndmain_cpp_setNumberOfSfxChannels_FUN_005273d0(3);
  sound_sndmain_cpp_FUN_00527d80();
  return this_ptr;
}
