// Name: sound_sndmain.cpp_allocateHwSample_FUN_00522e00
// Address: 00522e00
// Address Range: [[00522e00, 00522e92]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_allocateHwSample_FUN_00522e00(int bits_per_sample,int channel_count,int sample_rate,int sample_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_allocateHwSample_FUN_00522e00(int bits_per_sample,int channel_count,int sample_rate,int sample_count)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_02dc8318 != (int *)0x0) {
    do {
      iVar1 = (**(code **)(*_DAT_02dc8318 + 0x2c))
                        (_DAT_02dc8318,bits_per_sample,channel_count,sample_rate,sample_count);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar2 = 0;
      iVar1 = _DAT_02dc1ed8;
      do {
        iVar1 = iVar1 + 1;
        if (0x3f < iVar1) {
          iVar1 = 0;
        }
        if (((g_CSfxSample_ARRAY_02dc1edc[iVar1].ref_count == 0) &&
            (g_CSfxSample_ARRAY_02dc1edc[iVar1].buffer_id != 0)) &&
           (g_CSfxSample_ARRAY_02dc1edc[iVar1].taken == 0)) {
          sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(g_CSfxSample_ARRAY_02dc1edc + iVar1);
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x40);
    } while (iVar2 < 0x40);
    sound_sndmain_cpp_logSoundError_FUN_00529980("allocateHwSample - failed\n");
  }
  return 0;
}
