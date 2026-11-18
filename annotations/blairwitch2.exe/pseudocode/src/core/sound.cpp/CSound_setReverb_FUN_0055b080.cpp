// Name: core_sound.cpp_CSound_setReverb_FUN_0055b080
// Address: 0055b080
// Address Range: [[0055b080, 0055b0ac]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_setReverb_FUN_0055b080(CSound *this_ptr,float volume,float decay_time,float damping)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_setReverb_FUN_0055b080(CSound *this_ptr,float volume,float decay_time,float damping)

{
  g_SoundReverb.volume = volume;
  g_SoundReverb.decay_time = decay_time;
  g_SoundReverb.damping = damping;
  sound_sndmain_cpp_setReverb_FUN_00552cc0(volume,decay_time,damping);
  return;
}
