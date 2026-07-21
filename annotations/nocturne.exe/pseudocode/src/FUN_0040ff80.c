// Name: FUN_0040ff80
// Address: 0040ff80
// Address Range: [[0040ff80, 0040ffde]]
// Convention: unknown
// Signature: void FUN_0040ff80(int param_1,int param_2)

#include "nocturne.h"

void FUN_0040ff80(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte local_1c [24];
  
  if (param_2 == 0) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_1c,0);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar1);
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (param_1 + 0x150,0,0xffffffff);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return;
}
