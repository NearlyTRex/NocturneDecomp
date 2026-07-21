// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_00440610
// Address: 00440610
// Address Range: [[00440610, 0044070b]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_00440610(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_00440610(int param_1,int *param_2)

{
  int iVar1;
  int local_14;
  
  if ((((*(int *)(param_1 + 0x11d4) < param_2[1]) && (*(int *)(param_1 + 0x11d8) < param_2[3])) &&
      (*param_2 < *(int *)(param_1 + 0x11dc))) && (param_2[2] < *(int *)(param_1 + 0x11e0))) {
    if (_DAT_01c02594 != 0) {
      wincore_windll_cpp_restoreZBuffer_FUN_00532c90(0,0,0,DAT_005b761c + -1,DAT_005b7620 + -1);
      return;
    }
    iVar1 = param_2[2];
    if (iVar1 <= param_2[3]) {
      local_14 = iVar1 * 4;
      do {
        core_dstrender_cpp_memcpyMMX_FUN_00465341
                  (*param_2 * 4 + *(int *)(&DAT_01bd4260 + local_14),
                   *(int *)(param_1 + 0x15c) +
                   (((iVar1 - *(int *)(param_1 + 0x148)) * *(int *)(param_1 + 0x13c) + *param_2) -
                   *(int *)(param_1 + 0x144)) * 4,(param_2[1] - *param_2) * 4 + 4);
        iVar1 = iVar1 + 1;
        local_14 = local_14 + 4;
      } while (iVar1 <= param_2[3]);
    }
  }
  return;
}
