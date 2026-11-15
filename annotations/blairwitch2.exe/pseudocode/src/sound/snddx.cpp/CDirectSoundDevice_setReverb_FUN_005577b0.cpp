// Name: sound_snddx.cpp_CDirectSoundDevice_setReverb_FUN_005577b0
// Address: 005577b0
// Address Range: [[005577b0, 005577fc]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_setReverb_FUN_005577b0(CDirectSoundDevice *this_ptr,float volume,float decay_time,float damping)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_setReverb_FUN_005577b0(CDirectSoundDevice *this_ptr,float volume,float decay_time,float damping)

{
  uint uStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (_DAT_0264a5d4 == (int *)0x0) {
    return;
  }
  fStack_c = volume;
  fStack_8 = decay_time;
  uStack_10 = 0;
  fStack_4 = damping;
  (**(code **)(*_DAT_0264a5d4 + 0x10))(_DAT_0264a5d4,&DAT_0061bf70,0,0,0,&uStack_10,0x10);
  return;
}
