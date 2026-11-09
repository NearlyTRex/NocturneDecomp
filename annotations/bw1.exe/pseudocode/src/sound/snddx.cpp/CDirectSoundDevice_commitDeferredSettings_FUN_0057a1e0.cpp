// Name: sound_snddx.cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0057a1e0
// Address: 0057a1e0
// Address Range: [[0057a1e0, 0057a22c]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0057a1e0(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0057a1e0(CDirectSoundDevice *this_ptr)

{
  uint auStack_10 [4];
  
  if (_DAT_02c81da4 == (int *)0x0) {
    return;
  }
  auStack_10[0] = 0;
  (**(code **)(*_DAT_02c81da4 + 0x10))(_DAT_02c81da4,&DAT_006235c0,0,0,0,auStack_10,0x10);
  return;
}
