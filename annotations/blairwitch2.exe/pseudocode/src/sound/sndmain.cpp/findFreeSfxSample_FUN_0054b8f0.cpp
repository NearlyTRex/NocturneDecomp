// Name: sound_sndmain.cpp_findFreeSfxSample_FUN_0054b8f0
// Address: 0054b8f0
// Address Range: [[0054b8f0, 0054b954]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_findFreeSfxSample_FUN_0054b8f0(void)

#include "nocturne.h"

CSfxSample * __cdecl sound_sndmain_cpp_findFreeSfxSample_FUN_0054b8f0(void)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    g_LastSampleAccessIndex = g_LastSampleAccessIndex + 1;
    if (0x3f < g_LastSampleAccessIndex) {
      g_LastSampleAccessIndex = 0;
    }
    if ((((g_SfxSamples[g_LastSampleAccessIndex].taken == 0) &&
         (g_SfxSamples[g_LastSampleAccessIndex].ref_count == 0)) &&
        (g_SfxSamples[g_LastSampleAccessIndex].is_user_sample == 0)) &&
       (g_SfxSamples[g_LastSampleAccessIndex].locked_length == 0)) break;
    iVar1 = iVar1 + 1;
    if (0x3f < iVar1) {
      return (CSfxSample *)0x0;
    }
  }
  return g_SfxSamples + g_LastSampleAccessIndex;
}
