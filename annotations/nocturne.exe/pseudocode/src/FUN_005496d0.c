// Name: FUN_005496d0
// Address: 005496d0
// Address Range: [[005496d0, 005497ce]]
// Convention: unknown
// Signature: int FUN_005496d0(int param_1)

#include "nocturne.h"

int FUN_005496d0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte local_28 [24];
  uint uStack_10;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_28,0);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar1);
  if (iVar2 != 0) {
    uStack_10 = core_turret_cpp_CTurret_getCurFrame_FUN_00549ef0(param_1,0,0xffffffff);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (param_1 + 0x150,uStack_10);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  if (iVar2 != 0) {
    iVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0x57c);
    if (0 < *(int *)(iVar3 + 0x110)) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                (DAT_005ae704,param_1 + 0x20);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                (DAT_005ae704,param_1 + 0x570,0);
      uStack_10 = core_turret_cpp_CTurret_getCurFrame_FUN_00549ef0(param_1,1,0xffffffff);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                (param_1 + 0x57c,uStack_10);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
      return iVar2;
    }
  }
  return iVar2;
}
