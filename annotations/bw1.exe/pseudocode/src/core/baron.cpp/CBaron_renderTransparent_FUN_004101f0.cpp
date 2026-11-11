// Name: core_baron.cpp_CBaron_renderTransparent_FUN_004101f0
// Address: 004101f0
// Address Range: [[004101f0, 004103f3]]
// Convention: __cdecl
// Signature: int __cdecl core_baron_cpp_CBaron_renderTransparent_FUN_004101f0(CBaron *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_baron_cpp_CBaron_renderTransparent_FUN_004101f0(CBaron *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  uint uVar2;
  float fVar3;
  SMotion *pSVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
  uint auStack_58 [6];
  uint auStack_40 [6];
  CVector3f CStack_28;
  float fStack_1c;
  int iStack_18;
  
  bVar8 = 0;
  if ((this_ptr->summoned == 0) && ((this_ptr->base).control_type == HERO_CONTROL_AI)) {
    return 0;
  }
  pCVar1 = &(this_ptr->base).base.model;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar1->base);
  uVar2 = pSVar4->state_index;
  fVar3 = (this_ptr->base).base.model.base.current_frame_number;
  fStack_1c = fVar3;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar1->base);
  if (uVar2 < 6) {
    if (uVar2 != 5) {
LAB_004103e7:
      iStack_18 = 65000;
      goto LAB_00410269;
    }
LAB_00410253:
    fVar9 = ((float10)fVar3 * (float10)_DAT_005d350a) / (float10)pSVar4->frame_count;
  }
  else {
    if (uVar2 < 7) goto LAB_00410253;
    if (uVar2 != 7) goto LAB_004103e7;
    fVar9 = (float10)pSVar4->frame_count;
    fVar9 = ((fVar9 - (float10)fStack_1c) * (float10)_DAT_005d350a) / fVar9;
  }
  round();
  iStack_18 = (int)ROUND(fVar9);
LAB_00410269:
  if (this_ptr->shell_visible != 0) {
    engine_3d_c_setRenderAlpha_FUN_00406bd0((iStack_18 * 2) / 3);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
              (DAT_00612560,&(this_ptr->base).base.base.location.position);
    CStack_28.y = DAT_007c34dc;
    CStack_28.x = 0.0;
    CStack_28.z = 0.0;
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
              (DAT_00612560,&CStack_28,(CVector3f *)0x0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
              ((CKeyFramedModelInstance *)&DAT_007c351c,0.0,0x23);
    engine_matrix_c_pop_FUN_004839a0();
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  puVar6 = auStack_58;
  puVar7 = auStack_40;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  iVar5 = core_box_cpp_FUN_004207b0(auStack_40);
  if (iVar5 != 0) {
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,iStack_18);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(DAT_00612560,1);
    pCVar1 = &(this_ptr->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810(pCVar1,-1,0x2e7,1,0);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(DAT_00612560);
    if (_DAT_01d39d34 != 0) {
      core_motion_cpp_FUN_005254b0(&pCVar1->base,(CDemonActor *)this_ptr);
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  return iVar5;
}
