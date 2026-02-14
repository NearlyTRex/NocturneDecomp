// Name: sound_snddx.cpp_CDirectSoundDevice_commitDeferredSettings_FUN_005b0340
// Address: 005b0340
// Address Range: [[005b0340, 005b038c]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_005b0340(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_005b0340(CDirectSoundDevice *this_ptr)

{
  uint local_10 [4];
  
  if (g_DirectSoundPropertySet == (IKsPropertySet *)0x0) {
    return;
  }
  local_10[0] = 0;
  (*g_DirectSoundPropertySet->vtable->Set)
            (g_DirectSoundPropertySet,&DAT_00681df0,0,(LPVOID)0x0,0,local_10,0x10);
  return;
}
