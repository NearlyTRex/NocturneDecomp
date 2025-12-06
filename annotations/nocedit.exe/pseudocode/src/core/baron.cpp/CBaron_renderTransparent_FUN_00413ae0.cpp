// Name: core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0
// Address: 00413ae0
// Address Range: [[00413ae0, 00413bd3] [00413bd7, 00413ccf]]
// Convention: __cdecl
// Signature: int core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0(CBaron * this_ptr)

#include "nocturne.h"

int __cdecl core_baron_cpp_CBaron_renderTransparent_FUN_00413ae0(CBaron *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  uint uVar2;
  SMotion *pSVar3;
  CBoundingBox3D *this_ptr_00;
  int iVar4;
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  int unaff_EDI;
  float10 fVar5;
  int in_stack_00000014;
  float in_stack_ffffffc4;
  float fStack_2c;
  float in_stack_ffffffec;
  
  if ((*(int *)(this_ptr->field1_0x1fbd4 + 0xf8) == 0) && ((this_ptr->field0_0x0).control_type == 2)
     ) {
    return 0;
  }
  pCVar1 = &(this_ptr->field0_0x0).base_character.model;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  uVar2 = pSVar3->state_index;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  if (uVar2 < 6) {
    if (uVar2 != 5) goto LAB_00413b59;
LAB_00413b43:
    fVar5 = ((float10)in_stack_ffffffc4 * (float10)65000) / (float10)pSVar3->frame_count;
  }
  else {
    if (uVar2 < 7) goto LAB_00413b43;
    if (uVar2 != 7) goto LAB_00413b59;
    fVar5 = (float10)pSVar3->frame_count;
    fVar5 = ((fVar5 - (float10)in_stack_ffffffec) * (float10)65000) / fVar5;
  }
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,pSVar3));
  unaff_EDI = (int)ROUND(fVar5);
LAB_00413b59:
  if (*(int *)(this_ptr->field1_0x1fbd4 + 0xfc) != 0) {
    engine_3d_c_setRenderAlpha_FUN_00406d80((unaff_EDI * 2) / 3);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,
               &(this_ptr->field0_0x0).base_character.base_actor.location.position);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)&stack0xffffffd8,(CVector3i *)0x0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&g_CKeyFramedModelInstanceInstance,0.0,0x23);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
  this_ptr_00 = (*((this_ptr->field0_0x0).base_character.base_actor.vtable)->getBoundingBox)
                          ((CDemonActor *)this_ptr,(CBoundingBox3D *)&stack0xffffffd0);
  fStack_2c = 5.99082e-39;
  iVar4 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar4 != 0) {
    fStack_2c = 5.990856e-39;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr,in_stack_00000014);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(g_CDemonRendererPtr,1);
    pCVar1 = &(this_ptr->field0_0x0).base_character.model;
    fStack_2c = 5.990945e-39;
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150(pCVar1,-1,0x2e7,1,0);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr);
    if (DAT_02f43978 != 0) {
      core_motion_cpp_CMotionController_render_FUN_0052e700
                (&pCVar1->motion_controller,(CDemonActor *)this_ptr);
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  return iVar4;
}
