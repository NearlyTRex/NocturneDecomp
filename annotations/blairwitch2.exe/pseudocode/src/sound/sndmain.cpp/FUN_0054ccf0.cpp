// Name: sound_sndmain.cpp_FUN_0054ccf0
// Address: 0054ccf0
// Address Range: [[0054ccf0, 0054cd84]]
// Convention: unknown
// Signature: int sound_sndmain_cpp_FUN_0054ccf0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sound_sndmain_cpp_FUN_0054ccf0(void)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_02648e80 != (int *)0x0) {
    do {
      iVar1 = (**(code **)(*_DAT_02648e80 + 0x30))(_DAT_02648e80,&stack0x00000004);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar2 = 0;
      iVar1 = _DAT_02641920;
      do {
        iVar1 = iVar1 + 1;
        if (0x3f < iVar1) {
          iVar1 = 0;
        }
        if ((((*(int *)&g_SfxSamples[iVar1].field_0x154 == 0) &&
             (*(int *)&g_SfxSamples[iVar1].field_0x158 != 0)) &&
            (*(int *)&g_SfxSamples[iVar1].field_0x150 == 0)) &&
           ((*(int *)&g_SfxSamples[iVar1].field_0x15c == 0 &&
            (*(int *)&g_SfxSamples[_DAT_02641920].field_0x1a8 == 0)))) {
          sound_sndmain_cpp_CSfxSample_freeMemory_FUN_0054d9b0(g_SfxSamples + iVar1);
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x40);
    } while (iVar2 < 0x40);
    sound_sndmain_cpp_FUN_005549c0("allocateHwSample - failed\n");
  }
  return 0;
}
