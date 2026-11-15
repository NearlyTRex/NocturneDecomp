// Name: sound_sndmain.cpp_setReverb_FUN_00558860
// Address: 00558860
// Address Range: [[00558860, 0055889d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setReverb_FUN_00558860(float volume,float decay_time,float damping)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setReverb_FUN_00558860(float volume,float decay_time,float damping)

{
  g_CachedReverb.volume = volume;
  g_CachedReverb.decay_time = decay_time;
  g_CachedReverb.damping = damping;
  if (_DAT_02cf3280 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02cf3280 + 0x2c))(_DAT_02cf3280,volume,decay_time,damping);
  return;
}
