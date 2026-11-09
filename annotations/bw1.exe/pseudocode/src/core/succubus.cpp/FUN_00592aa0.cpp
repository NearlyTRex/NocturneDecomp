// Name: core_succubus.cpp_FUN_00592aa0
// Address: 00592aa0
// Address Range: [[00592aa0, 00592c36]]
// Convention: unknown
// Signature: int core_succubus_cpp_FUN_00592aa0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_succubus_cpp_FUN_00592aa0(CCharacter *param_1)

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
  iStack_c = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_00484180(DAT_00612560);
  if (iStack_c == 0) {
    *(uint *)&param_1->field_0x27bc = 0;
  }
  if (*(int *)&param_1->field_0x24fc == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)param_1);
    (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
    puVar3 = auStack_3c;
    puVar4 = auStack_24;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar2 = core_box_cpp_FUN_004207b0(auStack_24);
    if (iVar2 != 0) {
      model_ptr = &param_1[1].field_0x98;
      *(uint *)&param_1->field_0x27bc = 1;
      if (iStack_c == 0) {
        if (*(int *)&param_1[1].field_0x2600 == 0) {
          core_charactr_cpp_CCharacter_renderCharacter_FUN_0042e960(param_1);
        }
        else {
          this_ptr = &param_1[1].field_0x2608;
          core_morph_cpp_FUN_00523290
                    ((CMorph *)this_ptr,0,(CDeformableModelInstance *)&param_1->field_0x158,0);
          core_morph_cpp_FUN_00523290((CMorph *)this_ptr,1,(CDeformableModelInstance *)model_ptr,0);
          core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
                    ((CMorph *)this_ptr,1,*(CKeyFramedModel **)&param_1[1].field_0x25d0,0,1);
          core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
                    ((CMorph *)this_ptr,1,*(CKeyFramedModel **)&param_1[1].field_0x25d0,0,2);
          core_morph_cpp_CMorph_render_FUN_005237e0
                    ((CMorph *)this_ptr,*(float *)&param_1[1].field_0x2604 / _DAT_00606278);
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
                  ((CDeformableModelInstance *)model_ptr,-1,0xffffffff,1,0);
        core_cloth_cpp_CClothList_render_FUN_00441ff0
                  ((CClothList *)&param_1[1].field_0x243c,(CDeformableModelInstance *)model_ptr);
      }
      if ((_DAT_01d39d34 != 0) &&
         (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560),
         iVar1 == 0)) {
        core_motion_cpp_FUN_005254b0
                  ((CMotionController *)&param_1->field_0x158,(CDemonActor *)param_1);
        (**(code **)(*(int *)&param_1->field_0x154 + 0x58))(param_1);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)param_1);
    return iVar2;
  }
  return 0;
}
