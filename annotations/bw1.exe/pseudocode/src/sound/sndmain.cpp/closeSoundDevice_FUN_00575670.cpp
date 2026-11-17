// Name: sound_sndmain.cpp_closeSoundDevice_FUN_00575670
// Address: 00575670
// Address Range: [[00575670, 005756cc]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_closeSoundDevice_FUN_00575670(void)

#include "nocturne.h"

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
    if (g_CSoundDevice_PTR_02c80650 == (CSoundDevice *)0x0) {
      iVar2 = 1;
    }
    else {
      iVar1 = (*g_CSoundDevice_PTR_02c80650->vtable->close)(g_CSoundDevice_PTR_02c80650);
      iVar2 = 0;
      if (iVar1 != 0) {
        g_INT_02c80658 = 0;
        g_CSoundDevice_PTR_02c80650 = (CSoundDevice *)0x0;
        return 1;
      }
    }
  }
  return iVar2;
}
