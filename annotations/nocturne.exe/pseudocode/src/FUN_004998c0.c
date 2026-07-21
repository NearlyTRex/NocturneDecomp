// Name: FUN_004998c0
// Address: 004998c0
// Address Range: [[004998c0, 00499af4]]
// Convention: unknown
// Signature: void FUN_004998c0(int param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004998c0(int param_1,float param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  byte auStack_68 [24];
  byte local_50 [24];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float local_2c [4];
  float fStack_1c;
  float fStack_18;
  
  fVar2 = param_2 / _DAT_0059dcbc;
  *(float *)(param_1 + 0x1fa58) = *(float *)(param_1 + 0x1fa58) - fVar2;
  *(float *)(param_1 + 0x1fa5c) = *(float *)(param_1 + 0x1fa5c) - fVar2;
  if (*(float *)(param_1 + 0x1fa58) < 0.0) {
    *(uint *)(param_1 + 0x1fa58) = 0;
  }
  if (*(float *)(param_1 + 0x1fa5c) < 0.0) {
    *(uint *)(param_1 + 0x1fa5c) = 0;
  }
  if (param_3 != 0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
    if (*(int *)(param_1 + 0x24ac) != 0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,*(int *)(param_1 + 0x24ac));
    }
    if (*(int *)(param_1 + 0x24f0) != 0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,*(int *)(param_1 + 0x24f0));
    }
    core_setcolid_cpp_CDemonSet_disableIgnore_FUN_005117e0(0x01E57284);
    local_2c[2] = 0.0;
    local_2c[1] = 0.0;
    local_2c[0] = 0.0;
    iVar1 = *(int *)(param_1 + 0x24ac);
    if (iVar1 == 0) {
      local_2c[0] = -0.5;
    }
    else {
      pfVar3 = (float *)(**(code **)(*(int *)(iVar1 + 0x14c) + 0x14))(iVar1,local_50);
      fStack_38 = pfVar3[3] - *pfVar3;
      fStack_34 = pfVar3[4] - pfVar3[1];
      fStack_30 = pfVar3[5] - pfVar3[2];
      local_2c[0] = -fStack_30;
    }
    FUN_00499b00(param_1,param_2,param_1 + 0x1fa58,_DAT_01c713d8,_DAT_01c7139c,local_2c);
    iVar1 = *(int *)(param_1 + 0x24f0);
    if (iVar1 == 0) {
      local_2c[0] = 0.5;
    }
    else {
      pfVar3 = (float *)(**(code **)(*(int *)(iVar1 + 0x14c) + 0x14))(iVar1,auStack_68);
      local_2c[3] = pfVar3[3] - *pfVar3;
      fStack_1c = pfVar3[4] - pfVar3[1];
      local_2c[0] = pfVar3[5] - pfVar3[2];
      fStack_18 = local_2c[0];
    }
    FUN_00499b00(param_1,param_2,param_1 + 0x1fa5c,_DAT_01c713dc,_DAT_01c713a0,local_2c);
    core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
            (param_1 + 0x150,0,0,*(uint *)(param_1 + 0x1fa58),_DAT_01c7139c,&LAB_0051b650);
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
            (param_1 + 0x150,0,0,*(uint *)(param_1 + 0x1fa5c),_DAT_01c713a0,&LAB_0051b650);
  return;
}
