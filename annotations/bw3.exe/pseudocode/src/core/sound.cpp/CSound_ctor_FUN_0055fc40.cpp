// Name: core_sound.cpp_CSound_ctor_FUN_0055fc40
// Address: 0055fc40
// Address Range: [[0055fc40, 0055fc5d]]
// Convention: __cdecl
// Signature: CSound * __cdecl core_sound_cpp_CSound_ctor_FUN_0055fc40(CSound *this_ptr)

#include "nocturne.h"

CSound * __cdecl core_sound_cpp_CSound_ctor_FUN_0055fc40(CSound *this_ptr)

{
  this_ptr->magic = 0x1400;
  sound_sndmain_cpp_setNumberOfSfxChannels_FUN_00556d70(3);
  sound_sndmain_cpp_resetSoundSystemDefaults_FUN_00557f60();
  return this_ptr;
}
