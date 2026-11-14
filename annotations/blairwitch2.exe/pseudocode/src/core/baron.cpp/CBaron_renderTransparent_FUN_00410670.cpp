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
  if ((this_ptr->summoned == 0) && ((this_ptr->base).control_type == HERO_CONTROL_AI)) {
    return 0;
  }
  pCVar1 = &(this_ptr->base).base.model;
  iVar4 = core_motion_cpp_FUN_005035c0(pCVar1);
  uVar2 = *(uint *)(iVar4 + 0x24);
  fVar3 = (this_ptr->base).base.model.base.current_frame_number;
  fStack_1c = fVar3;
  iVar4 = core_motion_cpp_FUN_005035c0(pCVar1);
  if (uVar2 < 6) {
    if (uVar2 != 5) {
LAB_00410867:
      iStack_18 = 65000;
      goto LAB_004106e9;
    }
LAB_004106d3:
    fVar8 = ((float10)fVar3 * (float10)_DAT_005cb59f) / (float10)*(int *)(iVar4 + 100);
  }
  else {
    if (uVar2 < 7) goto LAB_004106d3;
    if (uVar2 != 7) goto LAB_00410867;
    fVar8 = (float10)*(int *)(iVar4 + 100);
    fVar8 = ((fVar8 - (float10)fStack_1c) * (float10)_DAT_005cb59f) / fVar8;
  }
  round();
  iStack_18 = (int)ROUND(fVar8);
LAB_004106e9:
  if (this_ptr->shell_visible != 0) {
    engine_3d_c_setRenderAlpha_FUN_00406da0((iStack_18 * 2) / 3);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
              (DAT_0060b280,&(this_ptr->base).base.base.location.position);
    CStack_28.y = DAT_007bc4dc;
    CStack_28.x = 0.0;
    CStack_28.z = 0.0;
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
              (DAT_0060b280,&CStack_28,(CVector3f *)0x0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
              ((CKeyFramedModelInstance *)&DAT_007bc51c,0.0,0x23);
    engine_drender_cpp_pop_FUN_0046b4a0();
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  puVar5 = auStack_58;
  puVar6 = auStack_40;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  iVar4 = core_box_cpp_FUN_0041a840(auStack_40);
  if (iVar4 != 0) {
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,iStack_18);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540(DAT_0060b280,1);
    pCVar1 = &(this_ptr->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170(pCVar1,-1,0x2e7,1,0);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(DAT_0060b280);
    if (_DAT_01d1cdc8 != 0) {
      core_motion_cpp_FUN_005042e0(&pCVar1->base,(CDemonActor *)this_ptr);
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
  return iVar4;
}
