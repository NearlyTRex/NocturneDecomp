// Name: sound_sndmain.cpp_findFreeSfxSample_FUN_00551450
// Address: 00551450
// Address Range: [[00551450, 005514b4]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_findFreeSfxSample_FUN_00551450(void)

#include "nocturne.h"

CSfxSample * __cdecl sound_sndmain_cpp_findFreeSfxSample_FUN_00551450(void)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    g_INT_02cebc20 = g_INT_02cebc20 + 1;
    if (0x3f < g_INT_02cebc20) {
      g_INT_02cebc20 = 0;
    }
    if ((((g_SfxSamples[g_INT_02cebc20].taken == 0) && (g_SfxSamples[g_INT_02cebc20].ref_count == 0)
         ) && (g_SfxSamples[g_INT_02cebc20].is_user_sample == 0)) &&
       (g_SfxSamples[g_INT_02cebc20].locked_length == 0)) break;
    iVar1 = iVar1 + 1;
    if (0x3f < iVar1) {
      return (CSfxSample *)0x0;
    }
  }
  return g_SfxSamples + g_INT_02cebc20;
}
