// Name: sound_sndmain.cpp_set3DListenerOrientRight_FUN_00528630
// Address: 00528630
// Address Range: [[00528630, 0052866d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_00528630(float orient_right_x,float orient_right_y,float orient_right_z)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_00528630(float orient_right_x,float orient_right_y,float orient_right_z)

{
  g_SReverbSettings_02dc8498.volume = orient_right_x;
  g_SReverbSettings_02dc8498.decay_time = orient_right_y;
  g_SReverbSettings_02dc8498.damping = orient_right_z;
  if (g_CSoundDevice_PTR_02dc8318 == (CSoundDevice *)0x0) {
    return;
  }
  (*g_CSoundDevice_PTR_02dc8318->vtable->commitDeferredSettings)(g_CSoundDevice_PTR_02dc8318);
  return;
}
