// Name: sound_sndmain.cpp_closeSoundDevice_FUN_00575670
// Address: 00575670
// Address Range: [[00575670, 005756cc]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_closeSoundDevice_FUN_00575670(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_closeSoundDevice_FUN_00575670(void)

{
  int iVar1;
  int iVar2;
  CSfxSample *this_ptr;
  
  iVar1 = sound_sndmain_cpp_resetSoundDevice_FUN_005750e0();
  iVar2 = 0;
  if (iVar1 != 0) {
    this_ptr = g_SfxSamples;
    do {
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00570020(this_ptr);
      this_ptr = this_ptr + 1;
    } while (this_ptr != (CSfxSample *)0x2c7fbf4);
    if (_DAT_02c80650 == (uint *)0x0) {
      iVar2 = 1;
    }
    else {
      iVar1 = (**(code **)*_DAT_02c80650)(_DAT_02c80650);
      iVar2 = 0;
      if (iVar1 != 0) {
        _DAT_02c80658 = 0;
        _DAT_02c80650 = (uint *)0x0;
        return 1;
      }
    }
  }
  return iVar2;
}
