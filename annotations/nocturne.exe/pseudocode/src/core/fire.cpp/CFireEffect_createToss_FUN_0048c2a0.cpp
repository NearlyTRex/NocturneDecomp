// Name: core_fire.cpp_CFireEffect_createToss_FUN_0048c2a0
// Address: 0048c2a0
// Address Range: [[0048c2a0, 0048c30e]]
// Convention: unknown
// Signature: void core_fire_cpp_CFireEffect_createToss_FUN_0048c2a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_CFireEffect_createToss_FUN_0048c2a0(uint param_1,uint param_2,uint param_3,uint param_4,float param_5,uint param_6)

{
  int iVar1;
  
  if (param_5 < (float)_DAT_0058151c) {
    param_5 = 0.0001;
  }
  iVar1 = core_fire_cpp_CFireEffect_allocateToss_FUN_0048c310
                    (param_1,0,param_2,param_3,param_4,param_5);
  iVar1 = iVar1 * 0x3e4;
  *(uint *)(iVar1 + 0x1c5dc04) = param_6;
  sound_sndmain_cpp_setSfxTrackedFloatPosition_FUN_00526ea0
            (*(uint *)(iVar1 + 0x1c5dc04),iVar1 + 0x1c5d9a4);
  return;
}
