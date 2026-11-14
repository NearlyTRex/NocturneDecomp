// Name: core_sound.cpp_CSound_ctor_FUN_0057cb10
// Address: 0057cb10
// Address Range: [[0057cb10, 0057cb2d]]
// Convention: __cdecl
// Signature: CSound * __cdecl core_sound_cpp_CSound_ctor_FUN_0057cb10(CSound *this_ptr)

#include "nocturne.h"

CSound * __cdecl core_sound_cpp_CSound_ctor_FUN_0057cb10(CSound *this_ptr)

{
  this_ptr->magic = 0x1400;
  sound_sndmain_cpp_setNumberOfSfxChannels_FUN_00573c10(3);
  sound_sndmain_cpp_resetSoundSystemDefaults_FUN_00574e00();
  return this_ptr;
}
