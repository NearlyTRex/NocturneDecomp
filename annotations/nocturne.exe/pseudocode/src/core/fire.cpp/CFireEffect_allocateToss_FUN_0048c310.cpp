// Name: core_fire.cpp_CFireEffect_allocateToss_FUN_0048c310
// Address: 0048c310
// Address Range: [[0048c310, 0048c36d]]
// Convention: unknown
// Signature: int core_fire_cpp_CFireEffect_allocateToss_FUN_0048c310(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_fire_cpp_CFireEffect_allocateToss_FUN_0048c310(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  iVar1 = _DAT_01c5d820;
  core_fire_cpp_CToss_create_FUN_004873b0
            (_DAT_01c5d820 * 0x3e4 + 0x1c5d824,param_2,param_3,param_4,param_5,param_6);
  _DAT_01c5d820 = _DAT_01c5d820 + 1;
  if (_DAT_01c5d820 < 0x14) {
    return iVar1;
  }
  _DAT_01c5d820 = 0;
  return iVar1;
}
