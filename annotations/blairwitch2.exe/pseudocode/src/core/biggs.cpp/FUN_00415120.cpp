// Name: core_biggs.cpp_FUN_00415120
// Address: 00415120
// Address Range: [[00415120, 00415240]]
// Convention: unknown
// Signature: int core_biggs_cpp_FUN_00415120(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_biggs_cpp_FUN_00415120(CCharacter *param_1)

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
  if (*(int *)&param_1->field_0x2568 != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)param_1);
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
  puVar2 = auStack_38;
  puVar3 = auStack_20;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041a840(auStack_20);
  if (iVar1 != 0) {
    iVar5 = *(int *)&param_1[1].field_0x214;
    *(uint *)&param_1->field_0x2828 = 1;
    if (iVar5 == 0) {
      core_charactr_cpp_FUN_00424bd0(param_1);
    }
    else {
      this_ptr = &param_1[1].field_0x21c;
      core_morph_cpp_CMorph_updateModelFromDeformable_FUN_005b7150
                ((CMorph *)this_ptr,0,(CDeformableModelInstance *)&param_1->field_0x2b4,0);
      part_index = 0;
      iVar5 = 0;
      model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                            ((CKeyFramedModelInstance *)&param_1[1].field_0x98);
      core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005b7190
                ((CMorph *)this_ptr,1,model_ptr,iVar5,part_index);
      core_morph_cpp_CMorph_render_FUN_005b76a0
                ((CMorph *)this_ptr,*(float *)&param_1[1].field_0x218 / 0x40800000);
    }
    if (_DAT_01d1cdc8 != 0) {
      iVar5 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
      if (iVar5 == 0) {
        core_motion_cpp_FUN_005042e0
                  ((CMotionController *)&param_1->field_0x2b4,(CDemonActor *)param_1);
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x60))(param_1);
      }
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)param_1);
  return iVar1;
}
