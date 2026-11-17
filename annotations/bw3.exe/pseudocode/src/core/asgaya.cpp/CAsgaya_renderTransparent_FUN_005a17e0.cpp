// Name: core_asgaya.cpp_CAsgaya_renderTransparent_FUN_005a17e0
// Address: 005a17e0
// Address Range: [[005a17e0, 005a196d]]
// Convention: __cdecl
// Signature: int __cdecl core_asgaya_cpp_CAsgaya_renderTransparent_FUN_005a17e0(CAsgaya *this_ptr)

#include "nocturne.h"

int __cdecl core_asgaya_cpp_CAsgaya_renderTransparent_FUN_005a17e0(CAsgaya *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  float fVar2;
  CDemonRenderer *this_ptr_01;
  CAsgaya *pCVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  double dVar8;
  int in_stack_ffffffc0;
  uint auStack_3c [4];
  uint auStack_2c [7];
  
  bVar7 = 0;
  if (this_ptr->pool_me != 0) {
    return 0;
  }
  if (0.0 < this_ptr->fade_timer) {
    if (this_ptr->appear_state == 0) {
      fVar1 = (this_ptr->fade_timer / (this_ptr->base).fade_time) * 65535.0f;
    }
    else {
      fVar1 = (1.0 - this_ptr->fade_timer / (this_ptr->base).fade_time) * (float)65535;
    }
    dVar8 = round((double)fVar1);
    this_ptr->render_alpha = (int)ROUND(dVar8);
    iVar4 = 0;
    if (0 < (this_ptr->base).base.cloth_list.count) {
      fVar1 = (float)1.5873015873015899e-05;
      fVar2 = (float)-2535;
      pCVar3 = this_ptr;
      do {
        iVar4 = iVar4 + 1;
        (pCVar3->base).base.cloth_list.cloths[0]->weight =
             ((float)this_ptr->render_alpha + fVar2) * fVar1;
        pCVar3 = (CAsgaya *)((pCVar3->base).base.base.actor_name + 4);
      } while (iVar4 < (this_ptr->base).base.cloth_list.count);
    }
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  puVar5 = auStack_3c;
  puVar6 = auStack_2c;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  iVar4 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041daf0
                    ((CBoundingBox3D *)(auStack_2c + 2),in_stack_ffffffc0);
  this_ptr_01 = g_CDemonRenderer_PTR_005f2afc;
  if (iVar4 != 0) {
    iVar4 = this_ptr->render_alpha;
    (this_ptr->base).base.was_rendered_opaque = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(this_ptr_01,iVar4);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(g_CDemonRenderer_PTR_005f2afc,0);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120
              (g_CDemonRenderer_PTR_005f2afc,1);
    this_ptr_00 = &(this_ptr->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0
              (this_ptr_00,-1,0x2e7,1,0);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0
              (g_CDemonRenderer_PTR_005f2afc);
    if (g_INT_01d8e40c != 0) {
      core_motion_cpp_CMotionController_render_FUN_004fcdc0
                (&this_ptr_00->base,(CDemonActor *)this_ptr);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
  return 1;
}
