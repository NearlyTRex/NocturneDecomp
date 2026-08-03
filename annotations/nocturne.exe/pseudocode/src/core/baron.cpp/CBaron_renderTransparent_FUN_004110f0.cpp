// Name: core_baron.cpp_CBaron_renderTransparent_FUN_004110f0
// Address: 004110f0
// Address Range: [[004110f0, 004112e1]]
// Convention: __cdecl
// Signature: int __cdecl core_baron_cpp_CBaron_renderTransparent_FUN_004110f0(CBaron *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_baron_cpp_CBaron_renderTransparent_FUN_004110f0(CBaron *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  uint uVar2;
  float fVar3;
  SMotion *pSVar4;
  CBoundingBox3D *this_ptr_00;
  int iVar5;
  double dVar6;
  CBoundingBox3D local_44;
  CVector3f CStack_2c;
  float local_1c;
  uint local_18;
  
  if ((this_ptr->summoned == 0) && ((this_ptr->base).control_type == HERO_CONTROL_AI)) {
    return 0;
  }
  pCVar1 = &(this_ptr->base).base.model;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar1->motion_controller);
  uVar2 = pSVar4->state_index;
  local_44.min.x = (this_ptr->base).base.model.motion_controller.current_frame_number;
  local_1c = local_44.min.x;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar1->motion_controller);
  if (uVar2 < 6) {
    if (uVar2 != 5) {
LAB_004112d5:
      local_18 = 65000;
      goto LAB_00411169;
    }
LAB_00411153:
    fVar3 = local_44.min.x * (float)65000;
  }
  else {
    if (uVar2 < 7) goto LAB_00411153;
    if (uVar2 != 7) goto LAB_004112d5;
    fVar3 = ((float)pSVar4->frame_count - local_1c) * (float)65000;
  }
  dVar6 = round((double)(fVar3 / (float)pSVar4->frame_count));
  local_1c = (float)(int)ROUND(dVar6);
LAB_00411169:
  if (this_ptr->shell_visible != 0) {
    engine_3d_c_setRenderAlpha_FUN_00408370(((int)local_1c * 2) / 3);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
              (DAT_005ae704,&(this_ptr->base).base.base.location.position);
    CStack_2c.y = DAT_0076432c;
    CStack_2c.x = 0.0;
    CStack_2c.z = 0.0;
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
              (DAT_005ae704,&CStack_2c,(CVector3f *)0x0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              ((CKeyFramedModelInstance *)&DAT_0076436c,0.0,0x23);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20((CDemonActor *)this_ptr);
  this_ptr_00 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                          ((CDemonActor *)this_ptr,&local_44);
  iVar5 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
  if (iVar5 != 0) {
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,(int)local_1c);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(DAT_005ae704,1);
    pCVar1 = &(this_ptr->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0(pCVar1,-1,0x2e7,1,0);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0(DAT_005ae704);
    if (_DAT_01cd4318 != 0) {
      core_motion_cpp_CMotionController_render_FUN_004e22b0
                (&pCVar1->motion_controller,(CDemonActor *)this_ptr);
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)this_ptr);
  return iVar5;
}
