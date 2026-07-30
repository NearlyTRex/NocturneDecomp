// Name: core_baron.cpp_CBaron_renderTransparent_FUN_004110f0
// Address: 004110f0
// Address Range: [[004110f0, 004112e1]]
// Convention: unknown
// Signature: int core_baron_cpp_CBaron_renderTransparent_FUN_004110f0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_baron_cpp_CBaron_renderTransparent_FUN_004110f0(CDemonActor *param_1)

{
  uint uVar1;
  float fVar2;
  SMotion *pSVar3;
  CBoundingBox3D *this_ptr;
  int iVar4;
  double dVar5;
  CBoundingBox3D local_44;
  CVector3f CStack_2c;
  float local_1c;
  uint local_18;
  
  if ((*(int *)(param_1[0x182].create_event + 0x1c) == 0) &&
     (param_1[0x8f].platform_position_delta.x == 2.8026e-45)) {
    return 0;
  }
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     ((CMotionController *)(param_1 + 1));
  uVar1 = pSVar3->state_index;
  local_44.min.x = *(float *)(param_1[1].actor_name + 8);
  local_1c = local_44.min.x;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     ((CMotionController *)(param_1 + 1));
  if (uVar1 < 6) {
    if (uVar1 != 5) {
LAB_004112d5:
      local_18 = 65000;
      goto LAB_00411169;
    }
LAB_00411153:
    fVar2 = local_44.min.x * (float)65000;
  }
  else {
    if (uVar1 < 7) goto LAB_00411153;
    if (uVar1 != 7) goto LAB_004112d5;
    fVar2 = ((float)pSVar3->frame_count - local_1c) * (float)65000;
  }
  dVar5 = round((double)(fVar2 / (float)pSVar3->frame_count));
  local_1c = (float)(int)ROUND(dVar5);
LAB_00411169:
  if (*(int *)(param_1[0x182].create_event + 0x20) != 0) {
    engine_3d_c_setRenderAlpha_FUN_00408370(((int)local_1c * 2) / 3);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
              (DAT_005ae704,&(param_1->location).position);
    CStack_2c.y = DAT_0076432c;
    CStack_2c.x = 0.0;
    CStack_2c.z = 0.0;
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
              (DAT_005ae704,&CStack_2c,(CVector3f *)0x0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              ((CKeyFramedModelInstance *)&DAT_0076436c,0.0,0x23);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  this_ptr = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_44);
  iVar4 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
  if (iVar4 != 0) {
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,(int)local_1c);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(DAT_005ae704,1);
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
              ((CDeformableModelInstance *)(param_1 + 1),-1,0x2e7,1,0);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0(DAT_005ae704);
    if (_DAT_01cd4318 != 0) {
      core_motion_cpp_CMotionController_render_FUN_004e22b0
                ((CMotionController *)(param_1 + 1),param_1);
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return iVar4;
}
