// Name: sound_sndmain.cpp_resetSoundDevice_FUN_005526b0
// Address: 005526b0
// Address Range: [[005526b0, 005526e1]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_005526b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_005526b0(void)

{
  int iVar1;
  
  sound_sndmain_cpp_FUN_005510d0();
  if (_DAT_02648e80 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02648e80 + 8))(_DAT_02648e80);
    if (iVar1 == 0) {
      return 0;
    }
  }
  _DAT_02648e84 = 0;
  sound_sndmain_cpp_FUN_0054cfc0();
  return 1;
}
