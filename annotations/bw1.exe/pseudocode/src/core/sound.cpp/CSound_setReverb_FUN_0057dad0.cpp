// Name: core_sound.cpp_CSound_setReverb_FUN_0057dad0
// Address: 0057dad0
// Address Range: [[0057dad0, 0057dafc]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_setReverb_FUN_0057dad0(CSound *this_ptr,float volume,float decay_time,float damping)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_setReverb_FUN_0057dad0(CSound *this_ptr,float volume,float decay_time,float damping)

{
  g_SoundReverb.volume = volume;
  g_SoundReverb.decay_time = decay_time;
  g_SoundReverb.damping = damping;
  sound_sndmain_cpp_setReverb_FUN_005756f0(volume,decay_time,damping);
  return;
}
