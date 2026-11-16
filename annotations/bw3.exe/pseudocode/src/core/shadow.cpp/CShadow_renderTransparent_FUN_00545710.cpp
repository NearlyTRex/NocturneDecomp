// Name: core_shadow.cpp_CShadow_renderTransparent_FUN_00545710
// Address: 00545710
// Address Range: [[00545710, 00545906]]
// Convention: __cdecl
// Signature: int __cdecl core_shadow_cpp_CShadow_renderTransparent_FUN_00545710(CShadow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_shadow_cpp_CShadow_renderTransparent_FUN_00545710(CShadow *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonRenderer *this_ptr_01;
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  double dVar7;
  float afStackY_101c [1002];
  CBoundingBox3D *this_ptr_02;
  int in_stack_ffffff9c;
  CBoundingBox3D CStack_60;
  uint auStack_48 [5];
  float fStack_34;
  float afStack_30 [4];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&(this_ptr->base).base.model.base)
  ;
  iVar1 = _DAT_01d1a0a4;
  iVar2 = _DAT_01d5ba14 * 4;
  iVar3 = *(int *)(iVar2 + 0x1d5ba04);
  if (iVar3 != 0) {
    fStack_34 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar3 + 0x20);
    afStack_30[0] = (this_ptr->base).base.base.location.position.y - *(float *)(iVar3 + 0x24);
    afStack_30[1] = (this_ptr->base).base.base.location.position.z - *(float *)(iVar3 + 0x28);
    afStack_30[2] = fStack_34;
    afStack_30[(uint)bVar6 * -2 + 3] = afStack_30[(uint)bVar6 * -2];
    afStack_30[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_30[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    fStack_14 = fStack_20 * fStack_20 +
                afStack_30[2] * afStack_30[2] + afStack_30[3] * afStack_30[3];
    (this_ptr->base).base.was_rendered_opaque = 0;
    fStack_1c = (float)(((int)fStack_14 >> 1) + iVar1);
    fStack_18 = *(float *)(*(int *)(iVar2 + 0x1d5ba04) + 0x20b88);
    if (fStack_18 < fStack_1c) {
      this_ptr->fade_alpha = 0;
    }
    else {
      dVar7 = round
                        ((double)(((fStack_18 - fStack_1c) / fStack_18) * (float)_DAT_005d1366));
      this_ptr->fade_alpha = (int)ROUND(dVar7);
    }
    if ((this_ptr->base).pool_me == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
      (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
      this_ptr_02 = &CStack_60;
      puVar4 = auStack_48;
      puVar5 = (uint *)&stack0xffffff98;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041daf0(this_ptr_02,in_stack_ffffff9c);
      this_ptr_01 = DAT_005f2afc;
      if (iVar3 != 0) {
        iVar3 = this_ptr->fade_alpha;
        (this_ptr->base).base.was_rendered_opaque = 1;
        engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(this_ptr_01,iVar3);
        engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
        engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(DAT_005f2afc,1);
        this_ptr_00 = &(this_ptr->base).base.model;
        core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0
                  (this_ptr_00,-1,0x2e7,1,0);
        engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(DAT_005f2afc);
        if (_DAT_01d8e40c != 0) {
          core_motion_cpp_CMotionController_render_FUN_004fcdc0
                    (&this_ptr_00->base,(CDemonActor *)this_ptr);
        }
        if (0.0 < (this_ptr->base).base.bind_time) {
          core_charactr_cpp_CCharacter_renderEthereal_FUN_0042f310((CCharacter *)this_ptr);
        }
        core_charactr_cpp_CCharacter_renderFlames_FUN_0042f6f0((CCharacter *)this_ptr);
      }
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
      return (this_ptr->base).base.was_rendered_opaque;
    }
  }
  return 0;
}
