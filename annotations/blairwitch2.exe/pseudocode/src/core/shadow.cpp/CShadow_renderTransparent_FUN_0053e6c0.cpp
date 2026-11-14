// Name: core_shadow.cpp_CShadow_renderTransparent_FUN_0053e6c0
// Address: 0053e6c0
// Address Range: [[0053e6c0, 0053e85e]]
// Convention: __cdecl
// Signature: int __cdecl core_shadow_cpp_CShadow_renderTransparent_FUN_0053e6c0(CShadow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_shadow_cpp_CShadow_renderTransparent_FUN_0053e6c0(CShadow *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonRenderer *this_ptr_01;
  CEventList *this_ptr_02;
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar6 = 0;
  iVar1 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
  this_ptr_02 = 0x01C38BC0;
  iVar1 = *(int *)(iVar1 + 0x24);
  (this_ptr->base).base.was_rendered_opaque = 0;
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (this_ptr_02,"heroCanSee");
  iVar3 = 0;
  if (iVar2 != 0) {
    if ((this_ptr->base).pool_me != 0) {
      return 0;
    }
    if ((((iVar1 != 0x14) && (iVar1 != 0xd)) && (iVar1 != 0xe)) &&
       ((iVar1 != 0xf && (iVar1 != 0x10)))) {
      core_charactr_cpp_CCharacter_renderTransparent_FUN_004268b0((CCharacter *)this_ptr);
      return (this_ptr->base).base.was_rendered_opaque;
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
              ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
    puVar4 = auStack_24;
    puVar5 = auStack_3c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_0041a840(auStack_3c);
    this_ptr_01 = DAT_0060b280;
    if (iVar1 != 0) {
      iVar1 = this_ptr->fade_alpha;
      (this_ptr->base).base.was_rendered_opaque = 1;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(this_ptr_01,iVar1);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540(DAT_0060b280,1);
      this_ptr_00 = &(this_ptr->base).base.model;
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
                (this_ptr_00,-1,0x2e7,1,0);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(DAT_0060b280);
      if (_DAT_01d1cdc8 != 0) {
        core_motion_cpp_FUN_005042e0(&this_ptr_00->base,(CDemonActor *)this_ptr);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
    if (this_ptr->corona_added != 0) {
      core_set_cpp_FUN_005306e0(g_CDemonSetPtr,0x20b1924);
    }
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,65000);
    iVar3 = (this_ptr->base).base.was_rendered_opaque;
  }
  return iVar3;
}
