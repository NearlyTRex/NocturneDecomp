// Name: sound_sndmain.cpp_closeSoundDevice_FUN_005ab660
// Address: 005ab660
// Address Range: [[005ab660, 005ab6bc]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_closeSoundDevice_FUN_005ab660(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_closeSoundDevice_FUN_005ab660(void)

{
  int iVar1;
  int iVar2;
  CSfxSample *this_ptr;
  
  iVar1 = sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
  iVar2 = 0;
  if (iVar1 != 0) {
    this_ptr = g_SfxSamples;
    do {
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(this_ptr);
      this_ptr = this_ptr + 1;
    } while (this_ptr != g_SfxSamples + 64);
    if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
      iVar2 = 1;
    }
    else {
      iVar1 = (*g_CSoundDevicePtr->vtable->close)(g_CSoundDevicePtr);
      iVar2 = 0;
      if (iVar1 != 0) {
        g_HasHardware3DSound = 0;
        g_CSoundDevicePtr = (CSoundDevice *)0x0;
        return 1;
      }
    }
  }
  return iVar2;
}
