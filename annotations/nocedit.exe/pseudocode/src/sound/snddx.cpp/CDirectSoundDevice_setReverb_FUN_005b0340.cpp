// Name: sound_snddx.cpp_CDirectSoundDevice_setReverb_FUN_005b0340
// Address: 005b0340
// Address Range: [[005b0340, 005b038c]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_setReverb_FUN_005b0340(CDirectSoundDevice *this_ptr,float volume,float decay_time,float damping)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_setReverb_FUN_005b0340(CDirectSoundDevice *this_ptr,float volume,float decay_time,float damping)

{
  uint local_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (g_DirectSoundPropertySet == (IKsPropertySet *)0x0) {
    return;
  }
  fStack_c = volume;
  fStack_8 = decay_time;
  local_10 = 0;
  fStack_4 = damping;
  (*g_DirectSoundPropertySet->vtable->Set)
            (g_DirectSoundPropertySet,&g_DSPROPSETID_EAX_ReverbProperties,0,(LPVOID)0x0,0,&local_10,
             0x10);
  return;
}
