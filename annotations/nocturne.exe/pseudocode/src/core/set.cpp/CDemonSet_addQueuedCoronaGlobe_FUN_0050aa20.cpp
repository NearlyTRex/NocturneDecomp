// Name: core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0050aa20
// Address: 0050aa20
// Address Range: [[0050aa20, 0050aa6b]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0050aa20(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0050aa20(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = DAT_005ae704;
  if ((*(int *)(0x01CC9450 + 4) == 0) && (_DAT_01fba480 < 100)) {
    *(uint *)(_DAT_01fba480 * 4 + 0x1fba484) = param_2;
    uVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(uVar1);
    *(uint *)(_DAT_01fba480 * 4 + 0x1fba614) = uVar1;
    _DAT_01fba480 = _DAT_01fba480 + 1;
    return;
  }
  return;
}
