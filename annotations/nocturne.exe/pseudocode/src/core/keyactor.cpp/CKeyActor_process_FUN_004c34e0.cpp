// Name: core_keyactor.cpp_CKeyActor_process_FUN_004c34e0
// Address: 004c34e0
// Address Range: [[004c34e0, 004c3583]]
// Convention: unknown
// Signature: void core_keyactor_cpp_CKeyActor_process_FUN_004c34e0(int param_1,float param_2)

#include "nocturne.h"

void core_keyactor_cpp_CKeyActor_process_FUN_004c34e0(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  uint uVar5;
  
  iVar1 = param_1 + 0x2d4;
  *(float *)(param_1 + 0x2d0) = param_2 * (float)3.1415926535000001 + *(float *)(param_1 + 0x2d0);
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0044cd90(iVar1,param_1 + 0x20);
  fVar4 = (float10)fsin((float10)*(float *)(param_1 + 0x2d0));
  uVar5 = 0x4c3531;
  fVar4 = (float10)round
                             (fVar4 * (float10)8192 + (float10)16384);
  iVar2 = (int)ROUND(fVar4);
  *(int *)(param_1 + 0x310) = iVar2;
  iVar2 = (iVar2 + (iVar2 >> 0x1f) * -0x100) - (uint)((iVar2 >> 0x1f) << 7 < 0);
  iVar3 = iVar2 >> 0x1f;
  *(char *)(param_1 + 0x2f0) =
       (char)((int)(((iVar2 >> 8) + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0(iVar1,0x3f800000,uVar5);
  uVar5 = 0x01E57284;
  *(uint *)(param_1 + 0x2f4) = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0(uVar5,iVar1);
  return;
}
