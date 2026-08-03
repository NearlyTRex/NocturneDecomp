// Name: sound_sndmain.cpp_FUN_00522e00
// Address: 00522e00
// Address Range: [[00522e00, 00522e92]]
// Convention: unknown
// Signature: int sound_sndmain_cpp_FUN_00522e00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sound_sndmain_cpp_FUN_00522e00(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_02dc8318 != (int *)0x0) {
    do {
      iVar1 = (**(code **)(*_DAT_02dc8318 + 0x2c))(_DAT_02dc8318,param_1,param_2,param_3,param_4);
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
    sound_sndmain_cpp_FUN_00529980("allocateHwSample - failed\n");
  }
  return 0;
}
