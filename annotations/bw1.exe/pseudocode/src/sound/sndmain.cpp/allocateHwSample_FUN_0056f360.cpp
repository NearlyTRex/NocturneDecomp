// Name: sound_sndmain.cpp_allocateHwSample_FUN_0056f360
// Address: 0056f360
// Address Range: [[0056f360, 0056f3f4]]
// Convention: unknown
// Signature: int sound_sndmain_cpp_allocateHwSample_FUN_0056f360(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sound_sndmain_cpp_allocateHwSample_FUN_0056f360(void)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_02c80650 != (int *)0x0) {
    do {
      iVar1 = (**(code **)(*_DAT_02c80650 + 0x30))(_DAT_02c80650,&stack0x00000004);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar2 = 0;
      iVar1 = _DAT_02c78ff0;
      do {
        iVar1 = iVar1 + 1;
        if (0x3f < iVar1) {
          iVar1 = 0;
        }
        if ((((g_SfxSamples[iVar1].ref_count == 0) && (g_SfxSamples[iVar1].buffer_id != 0)) &&
            (g_SfxSamples[iVar1].taken == 0)) &&
           ((g_SfxSamples[iVar1].is_user_sample == 0 &&
            (g_SfxSamples[_DAT_02c78ff0].locked_length == 0)))) {
          sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00570020(g_SfxSamples + iVar1);
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x40);
    } while (iVar2 < 0x40);
    sound_sndmain_cpp_FUN_005773f0("?allocateHwSample - failed\n" + 1);
  }
  return 0;
}
