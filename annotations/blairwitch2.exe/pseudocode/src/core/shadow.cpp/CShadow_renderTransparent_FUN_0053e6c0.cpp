// Name: core_shadow.cpp_CShadow_renderTransparent_FUN_0053e6c0
// Address: 0053e6c0
// Address Range: [[0053e6c0, 0053e85e]]
// Convention: __cdecl
// Signature: int __cdecl core_shadow_cpp_CShadow_renderTransparent_FUN_0053e6c0(CShadow *this_ptr)

#include "nocturne.h"

int __cdecl core_shadow_cpp_CShadow_renderTransparent_FUN_0053e6c0(CShadow *this_ptr)

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
  int in_stack_ffffffc4;
  CBoundingBox3D CStack_34;
  uint auStack_1c [4];
  
  bVar7 = 0;
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     (&(this_ptr->base).base.model.base);
  this_ptr_02 = g_CEventListPtr;
  iVar4 = pSVar1->state_index;
  (this_ptr->base).base.was_rendered_opaque = 0;
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (this_ptr_02,"heroCanSee");
  iVar3 = 0;
  if (iVar2 != 0) {
    if ((this_ptr->base).pool_me != 0) {
      return 0;
    }
    if ((((iVar4 != 0x14) && (iVar4 != 0xd)) && (iVar4 != 0xe)) &&
       ((iVar4 != 0xf && (iVar4 != 0x10)))) {
      core_charactr_cpp_CCharacter_renderTransparent_FUN_004268b0((CCharacter *)this_ptr);
      return (this_ptr->base).base.was_rendered_opaque;
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
              ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
    puVar5 = auStack_1c;
    puVar6 = (uint *)&stack0xffffffc4;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    iVar4 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041a840(&CStack_34,in_stack_ffffffc4);
    this_ptr_01 = g_CDemonRenderer_PTR_0060b280;
    if (iVar4 != 0) {
      iVar4 = this_ptr->fade_alpha;
      (this_ptr->base).base.was_rendered_opaque = 1;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(this_ptr_01,iVar4);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(g_CDemonRenderer_PTR_0060b280,0);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540
                (g_CDemonRenderer_PTR_0060b280,1);
      this_ptr_00 = &(this_ptr->base).base.model;
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
                (this_ptr_00,-1,0x2e7,1,0);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900
                (g_CDemonRenderer_PTR_0060b280);
      if (g_RenderMotionDebug != 0) {
        core_motion_cpp_CMotionController_render_FUN_005042e0
                  (&this_ptr_00->base,(CDemonActor *)this_ptr);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
    if (this_ptr->corona_added != 0) {
      core_set_cpp_CDemonSet_removeCoronaGlobe_FUN_005306e0(g_CDemonSetPtr,&g_CDemonGlobe_020b1924);
    }
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
              (g_CDemonRenderer_PTR_0060b280,65000);
    iVar3 = (this_ptr->base).base.was_rendered_opaque;
  }
  return iVar3;
}
