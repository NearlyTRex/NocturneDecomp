// Name: sound_snddx.cpp_CDirectSoundDevice_setReverb_FUN_0055d310
// Address: 0055d310
// Address Range: [[0055d310, 0055d35c]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_setReverb_FUN_0055d310(CDirectSoundDevice *this_ptr,float volume,float decay_time,float damping)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_setReverb_FUN_0055d310(CDirectSoundDevice *this_ptr,float volume,float decay_time,float damping)

{
  uint uStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (_DAT_02cf49d4 == (int *)0x0) {
    return;
  }
  fStack_c = volume;
  fStack_8 = decay_time;
  uStack_10 = 0;
  fStack_4 = damping;
  (**(code **)(*_DAT_02cf49d4 + 0x10))
            (_DAT_02cf49d4,&g_DSPROPSETID_EAX_ReverbProperties,0,0,0,&uStack_10,0x10);
  return;
}
