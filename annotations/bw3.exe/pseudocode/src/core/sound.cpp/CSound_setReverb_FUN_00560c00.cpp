// Name: core_sound.cpp_CSound_setReverb_FUN_00560c00
// Address: 00560c00
// Address Range: [[00560c00, 00560c2c]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_setReverb_FUN_00560c00(CSound *this_ptr,float volume,float decay_time,float damping)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_setReverb_FUN_00560c00(CSound *this_ptr,float volume,float decay_time,float damping)

{
  g_SoundReverb.volume = volume;
  g_SoundReverb.decay_time = decay_time;
  g_SoundReverb.damping = damping;
  sound_sndmain_cpp_setReverb_FUN_00558860(volume,decay_time,damping);
  return;
}
