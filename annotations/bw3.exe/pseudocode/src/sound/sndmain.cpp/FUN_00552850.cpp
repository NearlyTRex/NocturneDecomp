// Name: sound_sndmain.cpp_FUN_00552850
// Address: 00552850
// Address Range: [[00552850, 005528f3]]
// Convention: unknown
// Signature: int sound_sndmain_cpp_FUN_00552850(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sound_sndmain_cpp_FUN_00552850(void)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_02cf3280 != (int *)0x0) {
    do {
      iVar1 = (**(code **)(*_DAT_02cf3280 + 0x30))(_DAT_02cf3280,&stack0x00000004);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar2 = 0;
      iVar1 = _DAT_02cebc20;
      do {
        iVar1 = iVar1 + 1;
        if (0x3f < iVar1) {
          iVar1 = 0;
        }
        if ((((*(int *)&g_SfxSamples[iVar1].field_0x154 == 0) &&
             (*(int *)&g_SfxSamples[iVar1].field_0x158 != 0)) &&
            (*(int *)&g_SfxSamples[iVar1].field_0x150 == 0)) &&
           ((*(int *)&g_SfxSamples[iVar1].field_0x15c == 0 &&
            (*(int *)&g_SfxSamples[_DAT_02cebc20].field_0x1ac == 0)))) {
          sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(g_SfxSamples + iVar1);
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x40);
    } while (iVar2 < 0x40);
    sound_sndmain_cpp_FUN_0055a560("allocateHwSample - failed\n");
  }
  return 0;
}
