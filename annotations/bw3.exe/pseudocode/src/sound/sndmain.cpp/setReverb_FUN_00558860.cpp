// Name: sound_sndmain.cpp_setReverb_FUN_00558860
// Address: 00558860
// Address Range: [[00558860, 0055889d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setReverb_FUN_00558860(float volume,float decay_time,float damping)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setReverb_FUN_00558860(float volume,float decay_time,float damping)

{
  g_CachedReverb.volume = volume;
  g_CachedReverb.decay_time = decay_time;
  g_CachedReverb.damping = damping;
  if (g_CSoundDevice_PTR_02cf3280 == (CSoundDevice *)0x0) {
    return;
  }
  (*g_CSoundDevice_PTR_02cf3280->vtable->setReverb)
            (g_CSoundDevice_PTR_02cf3280,volume,decay_time,damping);
  return;
}
