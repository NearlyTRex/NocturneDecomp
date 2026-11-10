// Name: sound_sndmain.cpp_FUN_0054b940
// Address: 0054b940
// Address Range: [[0054b940, 0054b954]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_0054b940(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_0054b940(void)

{
  uint in_EDX;
  
  g_SfxSamples[0].sample_info.name._0_4_ =
       g_SfxSamples[0].sample_info.name._0_4_ << 1 |
       (uint)((int)g_SfxSamples[0].sample_info.name._0_4_ < 0);
  _DAT_02641920 = in_EDX;
  return;
}
