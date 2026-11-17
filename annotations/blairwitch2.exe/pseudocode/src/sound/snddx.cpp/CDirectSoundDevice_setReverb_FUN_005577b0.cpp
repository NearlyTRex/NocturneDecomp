// Name: sound_snddx.cpp_CDirectSoundDevice_setReverb_FUN_005577b0
// Address: 005577b0
// Address Range: [[005577b0, 005577fc]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_setReverb_FUN_005577b0(CDirectSoundDevice *this_ptr,float volume,float decay_time,float damping)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_setReverb_FUN_005577b0(CDirectSoundDevice *this_ptr,float volume,float decay_time,float damping)

{
  uint uStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (g_IKsPropertySet_PTR_0264a5d4 == (IKsPropertySet *)0x0) {
    return;
  }
  fStack_c = volume;
  fStack_8 = decay_time;
  uStack_10 = 0;
  fStack_4 = damping;
  (*g_IKsPropertySet_PTR_0264a5d4->vtable->Set)
            (g_IKsPropertySet_PTR_0264a5d4,(LPGUID)&g_DSPROPSETID_EAX_ReverbProperties,0,(LPVOID)0x0
             ,0,&uStack_10,0x10);
  return;
}
