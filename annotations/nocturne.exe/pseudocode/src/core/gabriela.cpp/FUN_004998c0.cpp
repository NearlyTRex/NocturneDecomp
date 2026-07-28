// Name: core_gabriela.cpp_FUN_004998c0
// Address: 004998c0
// Address Range: [[004998c0, 00499af4]]
// Convention: unknown
// Signature: void core_gabriela_cpp_FUN_004998c0(CDemonActor *param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gabriela_cpp_FUN_004998c0(CDemonActor *param_1,float param_2,int param_3)

{
  float fVar1;
  CDemonActor *pCVar2;
  float fVar3;
  float *pfVar4;
  byte auStack_68 [24];
  byte local_50 [24];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float local_2c [4];
  float fStack_1c;
  float fStack_18;
  
  fVar1 = (float)param_1[0x181].scale.y;
  fVar3 = param_2 / 0.5f;
  param_1[0x181].scale.x = (int)((float)param_1[0x181].scale.x - fVar3);
  param_1[0x181].scale.y = (int)(fVar1 - fVar3);
  if ((float)param_1[0x181].scale.x < 0.0) {
    param_1[0x181].scale.x = 0;
  }
  if ((float)param_1[0x181].scale.y < 0.0) {
    param_1[0x181].scale.y = 0;
  }
  if (param_3 != 0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
    pCVar2 = (CDemonActor *)param_1[0x1b].previous_transform_state.orientation.vec.z;
    if (pCVar2 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,pCVar2);
    }
    pCVar2 = (CDemonActor *)param_1[0x1c].orient.vec.x;
    if (pCVar2 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,pCVar2);
    }
    core_setcolid_cpp_CDemonSet_disableIgnore_FUN_005117e0(0x01E57284);
    local_2c[2] = 0.0;
    local_2c[1] = 0.0;
    local_2c[0] = 0.0;
    fVar1 = param_1[0x1b].previous_transform_state.orientation.vec.z;
    if (fVar1 == 0.0) {
      local_2c[0] = -0.5;
    }
    else {
      pfVar4 = (float *)(**(code **)(*(int *)((int)fVar1 + 0x14c) + 0x14))(fVar1,local_50);
      fStack_38 = pfVar4[3] - *pfVar4;
      fStack_34 = pfVar4[4] - pfVar4[1];
      fStack_30 = pfVar4[5] - pfVar4[2];
      local_2c[0] = -fStack_30;
    }
    core_gabriela_cpp_FUN_00499b00
              (param_1,param_2,&param_1[0x181].scale,_DAT_01c713d8,_DAT_01c7139c,local_2c);
    fVar1 = param_1[0x1c].orient.vec.x;
    if (fVar1 == 0.0) {
      local_2c[0] = 0.5;
    }
    else {
      pfVar4 = (float *)(**(code **)(*(int *)((int)fVar1 + 0x14c) + 0x14))(fVar1,auStack_68);
      local_2c[3] = pfVar4[3] - *pfVar4;
      fStack_1c = pfVar4[4] - pfVar4[1];
      local_2c[0] = pfVar4[5] - pfVar4[2];
      fStack_18 = local_2c[0];
    }
    core_gabriela_cpp_FUN_00499b00
              (param_1,param_2,&param_1[0x181].scale.y,_DAT_01c713dc,_DAT_01c713a0,local_2c);
    core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
            (param_1 + 1,0,0,param_1[0x181].scale.x,_DAT_01c7139c,core_skeleton_cpp_FUN_0051b650);
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
            (param_1 + 1,0,0,param_1[0x181].scale.y,_DAT_01c713a0,core_skeleton_cpp_FUN_0051b650);
  return;
}
