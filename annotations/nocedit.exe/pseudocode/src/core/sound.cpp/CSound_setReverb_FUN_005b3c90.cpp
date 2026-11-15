// Name: core_sound.cpp_CSound_setReverb_FUN_005b3c90
// Address: 005b3c90
// Address Range: [[005b3c90, 005b3cbc]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_setReverb_FUN_005b3c90(CSound *this_ptr,float volume,float decay_time,float damping)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_setReverb_FUN_005b3c90(CSound *this_ptr,float volume,float decay_time,float damping)

{
  g_SoundReverb.volume = volume;
  g_SoundReverb.decay_time = decay_time;
  g_SoundReverb.damping = damping;
  sound_sndmain_cpp_setReverb_FUN_005ab6e0(volume,decay_time,damping);
  return;
}
