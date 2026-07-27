// Name: core_filmreel.cpp_FUN_004821d0
// Address: 004821d0
// Address Range: [[004821d0, 004822b3]]
// Convention: unknown
// Signature: int core_filmreel_cpp_FUN_004821d0(int param_1)

#include "nocturne.h"

int core_filmreel_cpp_FUN_004821d0(int param_1)

{
  uint uVar1;
  int iVar2;
  byte local_3c [24];
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_3c,0);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar1);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return 0;
  }
  uStack_18 = 0;
  uStack_10 = *(uint *)(param_1 + 0x3d0);
  uStack_14 = 0;
  uStack_24 = 0;
  uStack_1c = 0;
  uStack_20 = 0x40000000;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,&DAT_02dd1184,&uStack_24);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,&uStack_18,&DAT_02dd1184);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
            (param_1 + 0x1ec,0,0xffffffff);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return iVar2;
}
