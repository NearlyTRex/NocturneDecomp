// Name: FUN_00415760
// Address: 00415760
// Address Range: [[00415760, 0041586e]]
// Convention: unknown
// Signature: int FUN_00415760(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00415760(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte local_20 [24];
  
  if (*(int *)(param_1 + 0x2404) != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_20,0);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar1);
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x2618) = 1;
    if (*(int *)(param_1 + 0xbea0) == 0) {
      core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20(param_1);
    }
    else {
      iVar3 = param_1 + 0xbea8;
      core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340(iVar3,0,param_1 + 0x150,0);
      uVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0xbd24,0,0)
      ;
      core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380(iVar3,1,uVar1);
      core_morph_cpp_CMorph_render_FUN_004e0820(iVar3,*(float *)(param_1 + 0xbea4) / 4.0f)
      ;
    }
    if (_DAT_01cd4318 != 0) {
      iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
      if (iVar3 == 0) {
        core_motion_cpp_CMotionController_render_FUN_004e22b0(param_1 + 0x150,param_1);
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x50))(param_1);
      }
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return iVar2;
}
