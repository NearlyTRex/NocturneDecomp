// Name: sound_snddx.cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0052bdf0
// Address: 0052bdf0
// Address Range: [[0052bdf0, 0052be3c]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0052bdf0(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0052bdf0(CDirectSoundDevice *this_ptr)

{
  uint local_10 [4];
  
  if (_DAT_02dc9224 == (int *)0x0) {
    return;
  }
  local_10[0] = 0;
  (**(code **)(*_DAT_02dc9224 + 0x10))(_DAT_02dc9224,&DAT_005bed30,0,0,0,local_10,0x10);
  return;
}
