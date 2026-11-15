// Name: core_baron.cpp_CBaron_renderTransparent_FUN_00410670
// Address: 00410670
// Address Range: [[00410670, 00410873]]
// Convention: __cdecl
// Signature: int __cdecl core_baron_cpp_CBaron_renderTransparent_FUN_00410670(CBaron *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_baron_cpp_CBaron_renderTransparent_FUN_00410670(CBaron *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  uint uVar2;
  float fVar3;
  SMotion *pSVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  byte bVar8;
  double dVar9;
  float afStack_5c [6];
  float afStack_44 [6];
  CVector3f CStack_2c;
  float fStack_1c;
  uint uStack_18;
  
  bVar8 = 0;
  if ((this_ptr->summoned == 0) && ((this_ptr->base).control_type == HERO_CONTROL_AI)) {
    return 0;
  }
  pCVar1 = &(this_ptr->base).base.model;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar1->base);
  uVar2 = pSVar4->state_index;
  afStack_5c[0] = (this_ptr->base).base.model.base.current_frame_number;
  fStack_1c = afStack_5c[0];
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar1->base);
  if (uVar2 < 6) {
    if (uVar2 != 5) {
LAB_00410867:
      uStack_18 = 65000;
      goto LAB_004106e9;
    }
LAB_004106d3:
    fVar3 = afStack_5c[0] * (float)_DAT_005cb59f;
  }
  else {
    if (uVar2 < 7) goto LAB_004106d3;
    if (uVar2 != 7) goto LAB_00410867;
    fVar3 = ((float)pSVar4->frame_count - fStack_1c) * (float)_DAT_005cb59f;
  }
  dVar9 = round((double)(fVar3 / (float)pSVar4->frame_count));
  fStack_1c = (float)(int)ROUND(dVar9);
LAB_004106e9:
  if (this_ptr->shell_visible != 0) {
    engine_3d_c_setRenderAlpha_FUN_00406da0(((int)fStack_1c * 2) / 3);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
              (DAT_0060b280,&(this_ptr->base).base.base.location.position);
    CStack_2c.y = DAT_007bc4dc;
    CStack_2c.x = 0.0;
    CStack_2c.z = 0.0;
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
              (DAT_0060b280,&CStack_2c,(CVector3f *)0x0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
              ((CKeyFramedModelInstance *)&DAT_007bc51c,0.0,0x23);
    engine_drender_cpp_pop_FUN_0046b4a0();
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  pfVar6 = afStack_5c;
  pfVar7 = afStack_44;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
    pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
  }
  iVar5 = core_box_cpp_FUN_0041a840(afStack_44);
  if (iVar5 != 0) {
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,(int)fStack_1c);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540(DAT_0060b280,1);
    pCVar1 = &(this_ptr->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170(pCVar1,-1,0x2e7,1,0);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(DAT_0060b280);
    if (_DAT_01d1cdc8 != 0) {
      core_motion_cpp_CMotionController_render_FUN_005042e0(&pCVar1->base,(CDemonActor *)this_ptr);
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
  return iVar5;
}
