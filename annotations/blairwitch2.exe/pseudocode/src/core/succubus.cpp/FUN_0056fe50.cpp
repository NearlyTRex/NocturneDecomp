// Name: core_succubus.cpp_FUN_0056fe50
// Address: 0056fe50
// Address Range: [[0056fe50, 0056ffe6]]
// Convention: unknown
// Signature: int core_succubus_cpp_FUN_0056fe50(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_succubus_cpp_FUN_0056fe50(CCharacter *param_1)

{
  byte *model_ptr;
  byte *this_ptr;
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_3c [6];
  uint auStack_24 [6];
  int iStack_c;
  
  bVar5 = 0;
  iStack_c = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80(DAT_0060b280);
  if (iStack_c == 0) {
    *(uint *)&param_1->field_0x2828 = 0;
  }
  if (*(int *)&param_1->field_0x2568 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)param_1);
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
    puVar3 = auStack_3c;
    puVar4 = auStack_24;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar2 = core_box_cpp_FUN_0041a840(auStack_24);
    if (iVar2 != 0) {
      model_ptr = &param_1[1].field_0x98;
      *(uint *)&param_1->field_0x2828 = 1;
      if (iStack_c == 0) {
        if (*(int *)&param_1[1].field_0x2510 == 0) {
          core_charactr_cpp_FUN_00424bd0(param_1);
        }
        else {
          this_ptr = &param_1[1].field_0x2518;
          core_morph_cpp_CMorph_updateModelFromDeformable_FUN_005b7150
                    ((CMorph *)this_ptr,0,(CDeformableModelInstance *)&param_1->field_0x2b4,0);
          core_morph_cpp_CMorph_updateModelFromDeformable_FUN_005b7150
                    ((CMorph *)this_ptr,1,(CDeformableModelInstance *)model_ptr,0);
          core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005b7190
                    ((CMorph *)this_ptr,1,*(CKeyFramedModel **)&param_1[1].field_0x24e0,0,1);
          core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005b7190
                    ((CMorph *)this_ptr,1,*(CKeyFramedModel **)&param_1[1].field_0x24e0,0,2);
          core_morph_cpp_CMorph_render_FUN_005b76a0
                    ((CMorph *)this_ptr,*(float *)&param_1[1].field_0x2514 / _DAT_005fc3d8);
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
                  ((CDeformableModelInstance *)model_ptr,-1,0xffffffff,1,0);
        core_cloth_cpp_CClothList_render_FUN_005b17d0
                  ((CClothList *)&param_1[1].field_0x234c,(CDeformableModelInstance *)model_ptr);
      }
      if ((_DAT_01d1cdc8 != 0) &&
         (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280),
         iVar1 == 0)) {
        core_motion_cpp_FUN_005042e0
                  ((CMotionController *)&param_1->field_0x2b4,(CDemonActor *)param_1);
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x60))(param_1);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)param_1);
    return iVar2;
  }
  return 0;
}
