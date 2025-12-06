// Name: core_sound.cpp_CSound_ctor_FUN_005b2ce0
// Address: 005b2ce0
// Address Range: [[005b2ce0, 005b2cfd]]
// Convention: __cdecl
// Signature: CSound * core_sound.cpp_CSound_ctor_FUN_005b2ce0(CSound * this_ptr)

#include "nocturne.h"

CSound * __cdecl core_sound_cpp_CSound_ctor_FUN_005b2ce0(CSound *this_ptr)

{
  this_ptr->field0_0x0 = 0x1400;
  sound_sndmain_cpp_setNumberOfSfxChannels_FUN_005a9de0(3);
  sound_sndmain_cpp_resetSoundSystemDefaults_FUN_005aae00();
  return this_ptr;
}
