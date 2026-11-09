// Name: sound_snddx.cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0055d310
// Address: 0055d310
// Address Range: [[0055d310, 0055d35c]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0055d310(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0055d310(CDirectSoundDevice *this_ptr)

{
  uint auStack_10 [4];
  
  if (_DAT_02cf49d4 == (int *)0x0) {
    return;
  }
  auStack_10[0] = 0;
  (**(code **)(*_DAT_02cf49d4 + 0x10))(_DAT_02cf49d4,&DAT_00604500,0,0,0,auStack_10,0x10);
  return;
}
