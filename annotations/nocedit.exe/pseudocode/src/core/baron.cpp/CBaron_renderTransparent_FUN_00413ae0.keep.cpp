// Name: core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0
// Address: 00413ae0
// MANUAL RECONSTRUCTION
// Address Range: [[00413ae0, 00413ccf]]
// Convention: __cdecl
// Signature: int __cdecl core_baron_cpp_CBaron_renderTransparent_FUN_00413ae0(CBaron *this_ptr)

#include "nocturne.h"

int __cdecl core_baron_cpp_CBaron_renderTransparent_FUN_00413ae0(CBaron *this_ptr)

{
  CDeformableModelInstance *pCVar2;
  float fVar4;
  SMotion *pSVar4;
  SMotion *pSVar5;
  CBoundingBox3D *this_ptr_00;
  int iVar5;
  CBoundingBox3D local_40;
  CVector3f local_28;
  int local_18;
  int iStack_14;
  uint uVar2;
  
  if ((this_ptr->summoned == 0) && ((this_ptr->base).control_type == HERO_CONTROL_AI)) {
    return 0;
  }
  pCVar2 = &(this_ptr->base).base.model;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar2->motion_controller);
  uVar2 = pSVar4->state_index;
  fVar4 = (this_ptr->base).base.model.motion_controller.current_frame_number;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar2->motion_controller);
  if (uVar2 < 6) {
    if (uVar2 != 5) {
LAB_00413cc3:
      local_18 = 65000;
      goto LAB_00413b59;
    }
LAB_00413b43:
    fVar4 = fVar4 * (float)65000;
  }
  else {
    if (uVar2 < 7) goto LAB_00413b43;
    if (uVar2 != 7) goto LAB_00413cc3;
    fVar4 = ((float)pSVar5->frame_count - fVar4) * (float)65000;
  }
  local_18 = (int)ROUND(ROUND(fVar4 / (float)pSVar5->frame_count));
LAB_00413b59:
  if (this_ptr->shell_visible != 0) {
    engine_3d_c_setRenderAlpha_FUN_00406d80((local_18 * 2) / 3);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&(this_ptr->base).base.base.location.position);
    local_28.y = FLOAT_008224dc;
    local_28.x = 0.0f;
    local_28.z = 0.0f;
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr2,&local_28,(CVector3f *)0x0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&g_CKeyFramedModelInstanceInstance,0.0,0x23);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
  this_ptr_00 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                          ((CDemonActor *)this_ptr,&local_40);
  iVar5 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar5 != 0) {
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,iStack_14);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(g_CDemonRendererPtr2,1);
    pCVar2 = &(this_ptr->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150(pCVar2,-1,0x2e7,1,0);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr2);
    if (INT_02f43978 != 0) {
      core_motion_cpp_CMotionController_render_FUN_0052e700
                (&pCVar2->motion_controller,(CDemonActor *)this_ptr);
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  return iVar5;
}
