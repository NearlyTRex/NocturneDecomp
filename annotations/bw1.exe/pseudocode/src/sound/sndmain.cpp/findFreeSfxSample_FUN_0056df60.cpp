// Name: sound_sndmain.cpp_findFreeSfxSample_FUN_0056df60
// Address: 0056df60
// Address Range: [[0056df60, 0056dfc4]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_findFreeSfxSample_FUN_0056df60(void)

#include "nocturne.h"

CSfxSample * __cdecl sound_sndmain_cpp_findFreeSfxSample_FUN_0056df60(void)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    g_INT_02c78ff0 = g_INT_02c78ff0 + 1;
    if (0x3f < g_INT_02c78ff0) {
      g_INT_02c78ff0 = 0;
    }
    if ((((g_SfxSamples[g_INT_02c78ff0].taken == 0) && (g_SfxSamples[g_INT_02c78ff0].ref_count == 0)
         ) && (g_SfxSamples[g_INT_02c78ff0].is_user_sample == 0)) &&
       (g_SfxSamples[g_INT_02c78ff0].locked_length == 0)) break;
    iVar1 = iVar1 + 1;
    if (0x3f < iVar1) {
      return (CSfxSample *)0x0;
    }
  }
  return g_SfxSamples + g_INT_02c78ff0;
}
