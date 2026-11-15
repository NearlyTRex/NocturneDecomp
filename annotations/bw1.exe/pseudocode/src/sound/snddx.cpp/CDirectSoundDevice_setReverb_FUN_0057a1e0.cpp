// Name: sound_snddx.cpp_CDirectSoundDevice_setReverb_FUN_0057a1e0
// Address: 0057a1e0
// Address Range: [[0057a1e0, 0057a22c]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_setReverb_FUN_0057a1e0(CDirectSoundDevice *this_ptr,float volume,float decay_time,float damping)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_setReverb_FUN_0057a1e0(CDirectSoundDevice *this_ptr,float volume,float decay_time,float damping)

{
  uint uStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (_DAT_02c81da4 == (int *)0x0) {
    return;
  }
  fStack_c = volume;
  fStack_8 = decay_time;
  uStack_10 = 0;
  fStack_4 = damping;
  (**(code **)(*_DAT_02c81da4 + 0x10))
            (_DAT_02c81da4,&g_DSPROPSETID_EAX_ReverbProperties,0,0,0,&uStack_10,0x10);
  return;
}
