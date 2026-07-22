// Name: core_flame.cpp_CFlame_updateGlobe_FUN_0048e230
// Address: 0048e230
// Address Range: [[0048e230, 0048e30e]]
// Convention: unknown
// Signature: void core_flame_cpp_CFlame_updateGlobe_FUN_0048e230(int param_1)

#include "nocturne.h"

void core_flame_cpp_CFlame_updateGlobe_FUN_0048e230(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  uint uVar4;
  uint local_28;
  float local_24;
  uint local_20;
  int iStack_18;
  float local_14;
  
  local_28 = *(uint *)(param_1 + 0x20);
  local_20 = *(uint *)(param_1 + 0x28);
  local_24 = *(float *)(param_1 + 0x154) * (float)0.5 + *(float *)(param_1 + 0x24);
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0044cd90(param_1 + 0x160,&local_28);
  local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                              (-*(float *)(param_1 + 0x27c),*(uint *)(param_1 + 0x27c));
  uVar4 = 0x48e2b9;
  fVar3 = (float10)round
                             (((float10)local_14 + (float10)*(float *)(param_1 + 0x278)) *
                              (float10)65535);
  iStack_18 = (int)ROUND(fVar3);
  *(int *)(param_1 + 0x19c) = iStack_18;
  iVar1 = (iStack_18 + (iStack_18 >> 0x1f) * -0x100) - (uint)((iStack_18 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  *(char *)(param_1 + 0x17c) =
       (char)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0
            (param_1 + 0x160,
             *(float *)(param_1 + 0x154) * *(float *)(param_1 + 0x1a4) * (float)2,
             uVar4);
  *(uint *)(param_1 + 0x180) = 2;
  return;
}
