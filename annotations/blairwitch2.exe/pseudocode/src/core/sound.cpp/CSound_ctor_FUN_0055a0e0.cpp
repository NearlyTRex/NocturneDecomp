// Name: core_sound.cpp_CSound_ctor_FUN_0055a0e0
// Address: 0055a0e0
// Address Range: [[0055a0e0, 0055a0fd]]
// Convention: __cdecl
// Signature: CSound * __cdecl core_sound_cpp_CSound_ctor_FUN_0055a0e0(CSound *this_ptr)

#include "nocturne.h"

CSound * __cdecl core_sound_cpp_CSound_ctor_FUN_0055a0e0(CSound *this_ptr)

{
  *(uint *)this_ptr = 0x1400;
  sound_sndmain_cpp_FUN_005511e0(3);
  sound_sndmain_cpp_resetSoundSystemDefaults_FUN_005523d0();
  return this_ptr;
}
