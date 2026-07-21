// Name: FUN_00541640
// Address: 00541640
// Address Range: [[00541640, 005417bb]]
// Convention: unknown
// Signature: int FUN_00541640(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00541640(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte local_24 [24];
  int iStack_c;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(DAT_005ae704);
  if (iVar2 == 0) {
    *(uint *)(param_1 + 0x2618) = 0;
  }
  if (*(int *)(param_1 + 0x2404) == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_24,0);
    iStack_c = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar3);
    if (iStack_c != 0) {
      iVar1 = param_1 + 0xbd24;
      *(uint *)(param_1 + 0x2618) = 1;
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0xe19c) == 0) {
          core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20(param_1);
        }
        else {
          iVar2 = param_1 + 0xe1a4;
          core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340(iVar2,0,param_1 + 0x150,0);
          core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340(iVar2,1,iVar1,0);
          core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380
                    (iVar2,1,*(uint *)(param_1 + 0xe16c),0,1);
          core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380
                    (iVar2,1,*(uint *)(param_1 + 0xe16c),0,2);
          core_morph_cpp_CMorph_render_FUN_004e0820
                    (iVar2,*(float *)(param_1 + 0xe1a0) / _DAT_005a28d8);
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
                  (iVar1,0xffffffff,0xffffffff,1,0);
        core_cloth_cpp_CClothList_render_FUN_004385a0(param_1 + 0xdfd8,iVar1);
      }
      if ((_DAT_01cd4318 != 0) &&
         (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704),
         iVar2 == 0)) {
        core_motion_cpp_CMotionController_render_FUN_004e22b0(param_1 + 0x150,param_1);
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x50))(param_1);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return iStack_c;
  }
  return 0;
}
