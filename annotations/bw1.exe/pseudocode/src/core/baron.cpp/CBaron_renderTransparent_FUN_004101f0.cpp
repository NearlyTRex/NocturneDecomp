// Name: core_baron.cpp_CBaron_renderTransparent_FUN_004101f0
// Address: 004101f0
// Address Range: [[004101f0, 004103f3]]
// Convention: __cdecl
// Signature: int __cdecl core_baron_cpp_CBaron_renderTransparent_FUN_004101f0(CBaron *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_baron_cpp_CBaron_renderTransparent_FUN_004101f0(CBaron *this_ptr)

{
  uint uVar1;
  float fVar2;
  SMotion *pSVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  uint auStack_58 [6];
  uint auStack_40 [6];
  CVector3f CStack_28;
  float fStack_1c;
  int iStack_18;
  
  bVar7 = 0;
  if ((this_ptr->summoned == 0) && (*(int *)&this_ptr->field_0xc1d4 == 2)) {
    return 0;
  }
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&this_ptr->field_0x158);
  uVar1 = *(uint *)(pSVar3 + 0x24);
  fVar2 = *(float *)&this_ptr->field_0x160;
  fStack_1c = fVar2;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&this_ptr->field_0x158);
  if (uVar1 < 6) {
    if (uVar1 != 5) {
LAB_004103e7:
      iStack_18 = 65000;
      goto LAB_00410269;
    }
LAB_00410253:
    fVar8 = ((float10)fVar2 * (float10)_DAT_005d350a) / (float10)*(int *)(pSVar3 + 100);
  }
  else {
    if (uVar1 < 7) goto LAB_00410253;
    if (uVar1 != 7) goto LAB_004103e7;
    fVar8 = (float10)*(int *)(pSVar3 + 100);
    fVar8 = ((fVar8 - (float10)fStack_1c) * (float10)_DAT_005d350a) / fVar8;
  }
  round();
  iStack_18 = (int)ROUND(fVar8);
LAB_00410269:
  if (this_ptr->shell_visible != 0) {
    engine_3d_c_setRenderAlpha_FUN_00406bd0((iStack_18 * 2) / 3);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
              (DAT_00612560,(CVector3f *)&this_ptr->field_0x20);
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
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr,0);
  puVar5 = auStack_58;
  puVar6 = auStack_40;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  iVar4 = core_box_cpp_FUN_004207b0(auStack_40);
  if (iVar4 != 0) {
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,iStack_18);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(DAT_00612560,1);
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
              ((CDeformableModelInstance *)&this_ptr->field_0x158,-1,0x2e7,1,0);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(DAT_00612560);
    if (_DAT_01d39d34 != 0) {
      core_motion_cpp_FUN_005254b0
                ((CMotionController *)&this_ptr->field_0x158,(CDemonActor *)this_ptr);
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  return iVar4;
}
