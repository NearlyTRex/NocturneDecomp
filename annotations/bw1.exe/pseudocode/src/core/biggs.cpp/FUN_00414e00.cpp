// Name: core_biggs.cpp_FUN_00414e00
// Address: 00414e00
// Address Range: [[00414e00, 00414f20]]
// Convention: unknown
// Signature: int core_biggs_cpp_FUN_00414e00(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_biggs_cpp_FUN_00414e00(CCharacter *param_1)

{
  byte *this_ptr;
  CKeyFramedModel *model_ptr;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int iVar5;
  int part_index;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar4 = 0;
  if (*(int *)&param_1->field_0x24fc != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)param_1);
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
  puVar2 = auStack_38;
  puVar3 = auStack_20;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_004207b0(auStack_20);
  if (iVar1 != 0) {
    iVar5 = *(int *)&param_1[1].field_0x214;
    *(uint *)&param_1->field_0x27bc = 1;
    if (iVar5 == 0) {
      core_charactr_cpp_CCharacter_renderCharacter_FUN_0042e960(param_1);
    }
    else {
      this_ptr = &param_1[1].field_0x21c;
      core_morph_cpp_FUN_00523290
                ((CMorph *)this_ptr,0,(CDeformableModelInstance *)&param_1->field_0x158,0);
      part_index = 0;
      iVar5 = 0;
      model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                            ((CKeyFramedModelInstance *)&param_1[1].field_0x98);
      core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
                ((CMorph *)this_ptr,1,model_ptr,iVar5,part_index);
      core_morph_cpp_CMorph_render_FUN_005237e0
                ((CMorph *)this_ptr,*(float *)&param_1[1].field_0x218 / 0x40800000);
    }
    if (_DAT_01d39d34 != 0) {
      iVar5 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
      if (iVar5 == 0) {
        core_motion_cpp_FUN_005254b0
                  ((CMotionController *)&param_1->field_0x158,(CDemonActor *)param_1);
        (**(code **)(*(int *)&param_1->field_0x154 + 0x58))(param_1);
      }
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)param_1);
  return iVar1;
}
