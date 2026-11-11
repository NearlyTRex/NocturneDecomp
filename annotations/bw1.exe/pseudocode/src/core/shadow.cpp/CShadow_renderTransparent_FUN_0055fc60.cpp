// Name: core_shadow.cpp_CShadow_renderTransparent_FUN_0055fc60
// Address: 0055fc60
// Address Range: [[0055fc60, 0055fdfe]]
// Convention: __cdecl
// Signature: int __cdecl core_shadow_cpp_CShadow_renderTransparent_FUN_0055fc60(CShadow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_shadow_cpp_CShadow_renderTransparent_FUN_0055fc60(CShadow *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonRenderer *this_ptr_01;
  CEventList *this_ptr_02;
  SMotion *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar7 = 0;
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     (&(this_ptr->base).base.model.base);
  this_ptr_02 = 0x01C51D80;
  iVar4 = pSVar1->state_index;
  (this_ptr->base).base.was_rendered_opaque = 0;
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (this_ptr_02,"heroCanSee");
  iVar3 = 0;
  if (iVar2 != 0) {
    if ((this_ptr->base).pool_me != 0) {
      return 0;
    }
    if ((((iVar4 != 0x16) && (iVar4 != 0xf)) && (iVar4 != 0x10)) &&
       ((iVar4 != 0x11 && (iVar4 != 0x12)))) {
      core_charactr_cpp_CCharacter_renderTransparent_FUN_004301e0((CCharacter *)this_ptr);
      return (this_ptr->base).base.was_rendered_opaque;
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
              ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
    puVar5 = auStack_24;
    puVar6 = auStack_3c;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    iVar4 = core_box_cpp_FUN_004207b0(auStack_3c);
    this_ptr_01 = DAT_00612560;
    if (iVar4 != 0) {
      iVar4 = this_ptr->fade_alpha;
      (this_ptr->base).base.was_rendered_opaque = 1;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(this_ptr_01,iVar4);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(DAT_00612560,1);
      this_ptr_00 = &(this_ptr->base).base.model;
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
                (this_ptr_00,-1,0x2e7,1,0);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(DAT_00612560);
      if (_DAT_01d39d34 != 0) {
        core_motion_cpp_FUN_005254b0(&this_ptr_00->base,(CDemonActor *)this_ptr);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    if (this_ptr->corona_added != 0) {
      core_set_cpp_FUN_00551990(g_CDemonSetPtr,0x269cbb0);
    }
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,65000);
    iVar3 = (this_ptr->base).base.was_rendered_opaque;
  }
  return iVar3;
}
