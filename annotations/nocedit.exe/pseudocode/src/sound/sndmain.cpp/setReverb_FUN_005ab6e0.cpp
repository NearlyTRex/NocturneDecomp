// Name: sound_sndmain.cpp_setReverb_FUN_005ab6e0
// Address: 005ab6e0
// Address Range: [[005ab6e0, 005ab71d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setReverb_FUN_005ab6e0(float volume,float decay_time,float damping)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setReverb_FUN_005ab6e0(float volume,float decay_time,float damping)

{
  g_CachedReverb.volume = volume;
  g_CachedReverb.decay_time = decay_time;
  g_CachedReverb.damping = damping;
  if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
    return;
  }
  (*g_CSoundDevicePtr->vtable->setReverb)(g_CSoundDevicePtr,volume,decay_time,damping);
  return;
}
