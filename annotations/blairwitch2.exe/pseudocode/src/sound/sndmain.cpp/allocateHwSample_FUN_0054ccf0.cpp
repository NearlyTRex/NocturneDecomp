// Name: sound_sndmain.cpp_allocateHwSample_FUN_0054ccf0
// Address: 0054ccf0
// Address Range: [[0054ccf0, 0054cd84]]
// Convention: unknown
// Signature: int sound_sndmain_cpp_allocateHwSample_FUN_0054ccf0(void)

#include "nocturne.h"

int sound_sndmain_cpp_allocateHwSample_FUN_0054ccf0(void)

{
  int iVar1;
  int iVar2;
  
  if (g_CSoundDevice_PTR_02648e80 != (CSoundDevice *)0x0) {
    do {
      iVar1 = (*g_CSoundDevice_PTR_02648e80->vtable->allocateSample)
                        (g_CSoundDevice_PTR_02648e80,(CSampleInfo *)&stack0x00000004);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar2 = 0;
      iVar1 = g_INT_02641920;
      do {
        iVar1 = iVar1 + 1;
        if (0x3f < iVar1) {
          iVar1 = 0;
        }
        if ((((g_SfxSamples[iVar1].ref_count == 0) && (g_SfxSamples[iVar1].buffer_id != 0)) &&
            (g_SfxSamples[iVar1].taken == 0)) &&
           ((g_SfxSamples[iVar1].is_user_sample == 0 &&
            (g_SfxSamples[g_INT_02641920].locked_length == 0)))) {
          sound_sndmain_cpp_CSfxSample_freeMemory_FUN_0054d9b0(g_SfxSamples + iVar1);
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x40);
    } while (iVar2 < 0x40);
    sound_sndmain_cpp_logSoundError_FUN_005549c0("allocateHwSample - failed\n");
  }
  return 0;
}
