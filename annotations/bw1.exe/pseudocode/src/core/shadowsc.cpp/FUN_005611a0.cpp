// Name: core_shadowsc.cpp_FUN_005611a0
// Address: 005611a0
// Address Range: [[005611a0, 005612c0]]
// Convention: unknown
// Signature: undefined4 core_shadowsc_cpp_FUN_005611a0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_shadowsc_cpp_FUN_005611a0(CDemonActor *param_1)

{
  CDeformableModelInstance *this_ptr;
  CDemonRenderer *this_ptr_00;
  CEventList *this_ptr_01;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar4 = 0;
  this_ptr = (CDeformableModelInstance *)(param_1 + 1);
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770((CMotionController *)this_ptr);
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770((CMotionController *)this_ptr);
  this_ptr_01 = 0x01C51D80;
  *(uint *)&param_1[0x1d].field_0xc4 = 0;
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (this_ptr_01,"heroCanSee");
  if ((iVar1 != 0) && (*(int *)&param_1[0x90].field_0x54 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(param_1);
    (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
    puVar2 = auStack_20;
    puVar3 = auStack_38;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_004207b0(auStack_38);
    this_ptr_00 = DAT_00612560;
    if (iVar1 != 0) {
      iVar1 = *(int *)&param_1[0x90].field_0x114;
      *(uint *)&param_1[0x1d].field_0xc4 = 1;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(this_ptr_00,iVar1);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(DAT_00612560,1);
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
                (this_ptr,-1,0x2e7,1,0);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(DAT_00612560);
      if (_DAT_01d39d34 != 0) {
        core_motion_cpp_FUN_005254b0((CMotionController *)this_ptr,param_1);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(param_1);
    return *(uint *)&param_1[0x1d].field_0xc4;
  }
  return 0;
}
