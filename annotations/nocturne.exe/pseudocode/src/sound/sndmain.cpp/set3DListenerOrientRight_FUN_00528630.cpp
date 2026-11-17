// Name: sound_sndmain.cpp_set3DListenerOrientRight_FUN_00528630
// Address: 00528630
// Address Range: [[00528630, 0052866d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_00528630(float orient_right_x,float orient_right_y,float orient_right_z)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_00528630(float orient_right_x,float orient_right_y,float orient_right_z)

{
  g_CachedReverb.volume = orient_right_x;
  g_CachedReverb.decay_time = orient_right_y;
  g_CachedReverb.damping = orient_right_z;
  if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
    return;
  }
  (*g_CSoundDevicePtr->vtable->commitDeferredSettings)(g_CSoundDevicePtr);
  return;
}
