// Name: sound_sndmain.cpp_closeSoundDevice_FUN_00552c40
// Address: 00552c40
// Address Range: [[00552c40, 00552c9c]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_closeSoundDevice_FUN_00552c40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_closeSoundDevice_FUN_00552c40(void)

{
  int iVar1;
  int iVar2;
  CSfxSample *this_ptr;
  
  iVar1 = sound_sndmain_cpp_resetSoundDevice_FUN_005526b0();
  iVar2 = 0;
  if (iVar1 != 0) {
    this_ptr = g_SfxSamples;
    do {
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_0054d9b0(this_ptr);
      this_ptr = this_ptr + 1;
    } while (this_ptr != (CSfxSample *)0x2648424);
    if (_DAT_02648e80 == (uint *)0x0) {
      iVar2 = 1;
    }
    else {
      iVar1 = (**(code **)*_DAT_02648e80)(_DAT_02648e80);
      iVar2 = 0;
      if (iVar1 != 0) {
        _DAT_02648e88 = 0;
        _DAT_02648e80 = (uint *)0x0;
        return 1;
      }
    }
  }
  return iVar2;
}
