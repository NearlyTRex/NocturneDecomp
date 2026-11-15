// Name: sound_sndmain.cpp_setReverb_FUN_005756f0
// Address: 005756f0
// Address Range: [[005756f0, 0057572d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setReverb_FUN_005756f0(float volume,float decay_time,float damping)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setReverb_FUN_005756f0(float volume,float decay_time,float damping)

{
  g_CachedReverb.volume = volume;
  g_CachedReverb.decay_time = decay_time;
  g_CachedReverb.damping = damping;
  if (_DAT_02c80650 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02c80650 + 0x2c))(_DAT_02c80650,volume,decay_time,damping);
  return;
}
