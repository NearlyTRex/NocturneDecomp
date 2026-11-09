// Name: core_shadow.cpp_FUN_0055fc60
// Address: 0055fc60
// Address Range: [[0055fc60, 0055fdfe]]
// Convention: unknown
// Signature: undefined4 core_shadow_cpp_FUN_0055fc60(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_shadow_cpp_FUN_0055fc60(CDemonActor *param_1)

{
  CDemonRenderer *this_ptr;
  CEventList *this_ptr_00;
  SMotion *pSVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar7 = 0;
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)(param_1 + 1));
  this_ptr_00 = 0x01C51D80;
  iVar4 = *(int *)(pSVar1 + 0x24);
  *(uint *)&param_1[0x1d].field_0xc4 = 0;
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (this_ptr_00,"heroCanSee");
  uVar3 = 0;
  if (iVar2 != 0) {
    if (*(int *)&param_1[0x90].field_0x54 != 0) {
      return 0;
    }
    if ((((iVar4 != 0x16) && (iVar4 != 0xf)) && (iVar4 != 0x10)) &&
       ((iVar4 != 0x11 && (iVar4 != 0x12)))) {
      core_charactr_cpp_FUN_004301e0(param_1);
      return *(uint *)&param_1[0x1d].field_0xc4;
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(param_1);
    (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
    puVar5 = auStack_24;
    puVar6 = auStack_3c;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    iVar4 = core_box_cpp_FUN_004207b0(auStack_3c);
    this_ptr = DAT_00612560;
    if (iVar4 != 0) {
      iVar4 = *(int *)&param_1[0x91].field_0x2c;
      *(uint *)&param_1[0x1d].field_0xc4 = 1;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(this_ptr,iVar4);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(DAT_00612560,1);
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
                ((CDeformableModelInstance *)(param_1 + 1),-1,0x2e7,1,0);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(DAT_00612560);
      if (_DAT_01d39d34 != 0) {
        core_motion_cpp_FUN_005254b0((CMotionController *)(param_1 + 1),param_1);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(param_1);
    if (*(int *)&param_1[0x91].field_0x30 != 0) {
      core_set_cpp_FUN_00551990(g_CDemonSetPtr,0x269cbb0);
    }
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,65000);
    uVar3 = *(uint *)&param_1[0x1d].field_0xc4;
  }
  return uVar3;
}
