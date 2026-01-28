// Name: sound_sndmain.cpp_findFreeSampleSlot_FUN_005a4400
// Address: 005a4400
// Address Range: [[005a4400, 005a4444]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_findFreeSampleSlot_FUN_005a4400(void)

#include "nocturne.h"

CSfxSample * __cdecl sound_sndmain_cpp_findFreeSampleSlot_FUN_005a4400(void)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    g_LastSampleAccessIndex = g_LastSampleAccessIndex + 1;
    if (0x3f < g_LastSampleAccessIndex) {
      g_LastSampleAccessIndex = 0;
    }
    if ((g_SfxSamples[g_LastSampleAccessIndex].taken == 0) &&
       (g_SfxSamples[g_LastSampleAccessIndex].ref_count == 0)) break;
    iVar1 = iVar1 + 1;
    if (0x3f < iVar1) {
      return (CSfxSample *)0x0;
    }
  }
  return g_SfxSamples + g_LastSampleAccessIndex;
}
