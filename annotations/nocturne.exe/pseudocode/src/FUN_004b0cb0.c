// Name: FUN_004b0cb0
// Address: 004b0cb0
// Address Range: [[004b0cb0, 004b0d3d]]
// Convention: unknown
// Signature: int FUN_004b0cb0(int param_1)

#include "nocturne.h"

int FUN_004b0cb0(int param_1)

{
  uint uVar1;
  int iVar2;
  byte local_1c [24];
  
  if ((*(int *)(param_1 + 0x2d4) == 0) &&
     (((*(int *)(0x01CC9450 + 4) != 0 || (*(int *)(param_1 + 0x2dc) == 0)) ||
      (*(int *)(param_1 + 0x2d8) != 0)))) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_1c,0);
    iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar1);
    if (iVar2 != 0) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                (param_1 + 0x150,*(uint *)(param_1 + 0x2cc),0xffffffff);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return iVar2;
  }
  return 0;
}
