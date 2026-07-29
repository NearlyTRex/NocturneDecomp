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
  double dVar3;
  CVector3f local_28;
  int iStack_18;
  float local_14;
  
  local_28.x = *(float *)(param_1 + 0x20);
  local_28.z = *(float *)(param_1 + 0x28);
  local_28.y = *(float *)(param_1 + 0x154) * (float)0.5 + *(float *)(param_1 + 0x24);
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0044cd90((CDemonGlobe *)(param_1 + 0x160),&local_28);
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                       (-*(float *)(param_1 + 0x27c),*(float *)(param_1 + 0x27c));
  dVar3 = round
                    ((double)((local_14 + *(float *)(param_1 + 0x278)) * (float)65535));
  iStack_18 = (int)ROUND(dVar3);
  *(int *)(param_1 + 0x19c) = iStack_18;
  iVar1 = (iStack_18 + (iStack_18 >> 0x1f) * -0x100) - (uint)((iStack_18 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  *(char *)(param_1 + 0x17c) =
       (char)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0
            ((CDemonGlobe *)(param_1 + 0x160),
             *(float *)(param_1 + 0x154) * *(float *)(param_1 + 0x1a4) * (float)2);
  *(uint *)(param_1 + 0x180) = 2;
  return;
}
