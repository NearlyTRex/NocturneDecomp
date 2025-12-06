// Name: sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_005a4450
// Address: 005a4450
// Address Range: [[005a4450, 005a4525]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_005a4450(int requested_bytes)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_005a4450(int requested_bytes)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0;
  do {
    if (*(int *)((int)g_SfxSamples[0].loop_markers + iVar2 + -0x1c) != 0) {
      iVar3 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550
                        ((CSfxSample *)(g_SfxSamples[0].sample_info.name + iVar2));
      iVar4 = iVar4 + iVar3 * *(int *)((int)g_SfxSamples[0].loop_markers + iVar2 + 0x24);
    }
    iVar2 = iVar2 + 0x180;
  } while (iVar2 != 0x6000);
LAB_005a4473:
  do {
    if (iVar4 + requested_bytes <= g_MaximumSoundMemoryBudget) {
      return 1;
    }
    iVar3 = 0;
    iVar2 = g_LastSampleAccessIndex;
    do {
      iVar2 = iVar2 + 1;
      if (0x3f < iVar2) {
        iVar2 = 0;
      }
      if ((((g_SfxSamples[iVar2].sample_data != (void *)0x0) &&
           (0 < g_SfxSamples[iVar2].streaming_buffer_size)) && (g_SfxSamples[iVar2].ref_count == 0))
         && (g_SfxSamples[iVar2].taken == 0)) {
        iVar1 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(g_SfxSamples + iVar2);
        iVar4 = iVar4 - iVar1 * g_SfxSamples[iVar2].streaming_buffer_size;
        sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(g_SfxSamples + iVar2);
        if (0x3f < iVar3) {
          return 0;
        }
        goto LAB_005a4473;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40);
    if (0x3f < iVar3) {
      return 0;
    }
  } while( true );
}
