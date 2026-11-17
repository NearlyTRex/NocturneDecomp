// Name: sound_sndmain.cpp_setReverb_FUN_005756f0
// Address: 005756f0
// Address Range: [[005756f0, 0057572d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setReverb_FUN_005756f0(float volume,float decay_time,float damping)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setReverb_FUN_005756f0(float volume,float decay_time,float damping)

{
  g_CachedReverb.volume = volume;
  g_CachedReverb.decay_time = decay_time;
  g_CachedReverb.damping = damping;
  if (g_CSoundDevice_PTR_02c80650 == (CSoundDevice *)0x0) {
    return;
  }
  (*g_CSoundDevice_PTR_02c80650->vtable->setReverb)
            (g_CSoundDevice_PTR_02c80650,volume,decay_time,damping);
  return;
}
