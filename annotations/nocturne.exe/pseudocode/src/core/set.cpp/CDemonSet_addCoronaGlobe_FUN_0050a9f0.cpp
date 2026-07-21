// Name: core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0
// Address: 0050a9f0
// Address Range: [[0050a9f0, 0050aa1d]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0(uint param_1,int param_2)

{
  if ((0xff < *(int *)(param_2 + 0xc)) && (_DAT_01fba2ec < 100)) {
    *(int *)(&DAT_01fba2ec + (_DAT_01fba2ec + 1) * 4) = param_2;
    _DAT_01fba2ec = _DAT_01fba2ec + 1;
    return;
  }
  return;
}
