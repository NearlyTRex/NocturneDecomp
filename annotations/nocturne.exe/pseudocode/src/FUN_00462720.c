// Name: FUN_00462720
// Address: 00462720
// Address Range: [[00462720, 0046279d]]
// Convention: unknown
// Signature: int FUN_00462720(int param_1)

#include "nocturne.h"

int FUN_00462720(int param_1)

{
  uint uVar1;
  int iVar2;
  byte local_20 [24];
  
  *(uint *)(param_1 + 0x330) = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_20,0);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar1);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return 0;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
            (param_1 + 0x150,0,0xffffffff);
  *(uint *)(param_1 + 0x330) = 1;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return iVar2;
}
