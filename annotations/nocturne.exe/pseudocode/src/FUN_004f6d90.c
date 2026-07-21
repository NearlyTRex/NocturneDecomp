// Name: FUN_004f6d90
// Address: 004f6d90
// Address Range: [[004f6d90, 004f6f4b]]
// Convention: unknown
// Signature: void FUN_004f6d90(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f6d90(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  byte local_2c [24];
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar1 != 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x4b8) < 2) && (*(int *)(param_1 + 0x4c0) == 0)) {
    return;
  }
  if (*(int *)(param_1 + 0x4c0) != 0) {
    if ((*(int *)(param_1 + 0x2cc) == 3) || (*(int *)(param_1 + 0x2cc) == 4)) {
      return;
    }
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x3b0);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x34c);
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x4c0) == 0) {
      *(uint *)(param_1 + 0x4b8) = 3;
    }
    else {
      *(uint *)(param_1 + 0x71c) = 1;
    }
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_2c,0);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar2);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 0x50c) == 0) ||
       (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704),
       iVar1 != 0)) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                (param_1 + 0x150,0,0xffffffff);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
      return;
    }
    *(uint *)(0x01E57284 + 0x15a890) = 1;
    iStack_14 = (int)ROUND(*(float *)(param_1 + 0x20) * _DAT_005a1360);
    iStack_10 = (int)ROUND(*(float *)(param_1 + 0x24) * _DAT_005a1360);
    iStack_c = (int)ROUND(*(float *)(param_1 + 0x28) * _DAT_005a1360);
    _DAT_014b7190 =
         core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0
                   (_DAT_007f7370,&iStack_14,0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (param_1 + 0x150,0,0xffffffff);
    *(uint *)(0x01E57284 + 0x15a890) = 0;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return;
}
