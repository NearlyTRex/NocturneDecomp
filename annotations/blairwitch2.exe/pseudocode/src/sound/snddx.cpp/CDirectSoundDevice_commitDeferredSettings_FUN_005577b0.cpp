// Name: sound_snddx.cpp_CDirectSoundDevice_commitDeferredSettings_FUN_005577b0
// Address: 005577b0
// Address Range: [[005577b0, 005577fc]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_005577b0(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_005577b0(CDirectSoundDevice *this_ptr)

{
  uint auStack_10 [4];
  
  if (_DAT_0264a5d4 == (int *)0x0) {
    return;
  }
  auStack_10[0] = 0;
  (**(code **)(*_DAT_0264a5d4 + 0x10))(_DAT_0264a5d4,&DAT_0061bf70,0,0,0,auStack_10,0x10);
  return;
}
