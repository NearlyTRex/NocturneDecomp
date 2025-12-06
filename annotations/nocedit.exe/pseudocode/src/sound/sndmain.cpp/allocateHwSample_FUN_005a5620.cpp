// Name: sound_sndmain.cpp_allocateHwSample_FUN_005a5620
// Address: 005a5620
// Address Range: [[005a5620, 005a56b2]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_allocateHwSample_FUN_005a5620(int bits_per_sample, int channel_count, int sample_rate, int sample_count)

#include "nocturne.h"

int __cdecl
sound_sndmain_cpp_allocateHwSample_FUN_005a5620
          (int bits_per_sample,int channel_count,int sample_rate,int sample_count)

{
  int iVar1;
  int iVar2;
  
  if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
    do {
      iVar1 = (*g_CSoundDevicePtr->vtable->allocateSample)
                        (g_CSoundDevicePtr,bits_per_sample,channel_count,sample_rate,sample_count);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar2 = 0;
      iVar1 = g_LastSampleAccessIndex;
      do {
        iVar1 = iVar1 + 1;
        if (0x3f < iVar1) {
          iVar1 = 0;
        }
        if (((g_SfxSamples[iVar1].ref_count == 0) && (g_SfxSamples[iVar1].buffer_id != 0)) &&
           (g_SfxSamples[iVar1].taken == 0)) {
          sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(g_SfxSamples + iVar1);
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x40);
    } while (iVar2 < 0x40);
    sound_sndmain_cpp_logSoundError_FUN_005adba0("allocateHwSample - failed\n");
  }
  return 0;
}
