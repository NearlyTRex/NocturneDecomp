// Name: core_shadowsc.cpp_CShadowsc_renderTransparent_FUN_005611a0
// Address: 005611a0
// Address Range: [[005611a0, 005612c0]]
// Convention: __cdecl
// Signature: int __cdecl core_shadowsc_cpp_CShadowsc_renderTransparent_FUN_005611a0(CShadowsc *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_shadowsc_cpp_CShadowsc_renderTransparent_FUN_005611a0(CShadowsc *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonRenderer *this_ptr_01;
  CEventList *this_ptr_02;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar4 = 0;
  this_ptr_00 = &(this_ptr->base).base.model;
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
  this_ptr_02 = 0x01C51D80;
  (this_ptr->base).base.was_rendered_opaque = 0;
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (this_ptr_02,"heroCanSee");
  if ((iVar1 != 0) && ((this_ptr->base).pool_me == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
              ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
    puVar2 = auStack_20;
    puVar3 = auStack_38;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_004207b0(auStack_38);
    this_ptr_01 = DAT_00612560;
    if (iVar1 != 0) {
      iVar1 = this_ptr->fade_alpha;
      (this_ptr->base).base.was_rendered_opaque = 1;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(this_ptr_01,iVar1);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(DAT_00612560,1);
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
                (this_ptr_00,-1,0x2e7,1,0);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(DAT_00612560);
      if (_DAT_01d39d34 != 0) {
        core_motion_cpp_FUN_005254b0(&this_ptr_00->base,(CDemonActor *)this_ptr);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    return (this_ptr->base).base.was_rendered_opaque;
  }
  return 0;
}
