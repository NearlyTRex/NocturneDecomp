// Name: sound_sndmain.cpp_setReverb_FUN_00552cc0
// Address: 00552cc0
// Address Range: [[00552cc0, 00552cfd]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setReverb_FUN_00552cc0(float volume,float decay_time,float damping)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setReverb_FUN_00552cc0(float volume,float decay_time,float damping)

{
  g_CachedReverb.volume = volume;
  g_CachedReverb.decay_time = decay_time;
  g_CachedReverb.damping = damping;
  if (g_CSoundDevice_PTR_02648e80 == (CSoundDevice *)0x0) {
    return;
  }
  (*g_CSoundDevice_PTR_02648e80->vtable->setReverb)
            (g_CSoundDevice_PTR_02648e80,volume,decay_time,damping);
  return;
}
