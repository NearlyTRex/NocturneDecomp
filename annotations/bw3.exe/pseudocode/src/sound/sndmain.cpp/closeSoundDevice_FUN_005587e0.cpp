// Name: sound_sndmain.cpp_closeSoundDevice_FUN_005587e0
// Address: 005587e0
// Address Range: [[005587e0, 0055883c]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_closeSoundDevice_FUN_005587e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_closeSoundDevice_FUN_005587e0(void)

{
  int iVar1;
  int iVar2;
  CSfxSample *this_ptr;
  
  iVar1 = sound_sndmain_cpp_resetSoundDevice_FUN_00558250();
  iVar2 = 0;
  if (iVar1 != 0) {
    this_ptr = g_SfxSamples;
    do {
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(this_ptr);
      this_ptr = this_ptr + 1;
    } while (this_ptr != (CSfxSample *)0x2cf2824);
    if (_DAT_02cf3280 == (uint *)0x0) {
      iVar2 = 1;
    }
    else {
      iVar1 = (**(code **)*_DAT_02cf3280)(_DAT_02cf3280);
      iVar2 = 0;
      if (iVar1 != 0) {
        _DAT_02cf3288 = 0;
        _DAT_02cf3280 = (uint *)0x0;
        return 1;
      }
    }
  }
  return iVar2;
}
