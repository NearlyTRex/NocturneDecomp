// Name: sound_sndmain.cpp_allocateHwSample_FUN_00552850
// Address: 00552850
// Address Range: [[00552850, 005528f3]]
// Convention: unknown
// Signature: int sound_sndmain_cpp_allocateHwSample_FUN_00552850(void)

#include "nocturne.h"

int sound_sndmain_cpp_allocateHwSample_FUN_00552850(void)

{
  int iVar1;
  int iVar2;
  
  if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
    do {
      iVar1 = (*g_CSoundDevicePtr->vtable->allocateSample)
                        (g_CSoundDevicePtr,(CSampleInfo *)&stack0x00000004);
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
        if ((((g_SfxSamples[iVar1].ref_count == 0) && (g_SfxSamples[iVar1].buffer_id != 0)) &&
            (g_SfxSamples[iVar1].taken == 0)) &&
           ((g_SfxSamples[iVar1].is_user_sample == 0 &&
            (g_SfxSamples[g_LastSampleAccessIndex].locked_length == 0)))) {
          sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(g_SfxSamples + iVar1);
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x40);
    } while (iVar2 < 0x40);
    sound_sndmain_cpp_logSoundError_FUN_0055a560("allocateHwSample - failed\n");
  }
  return 0;
}
