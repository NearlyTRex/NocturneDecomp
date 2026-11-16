// Name: core_hino.cpp_CHino_renderTransparent_FUN_0059d120
// Address: 0059d120
// Address Range: [[0059d120, 0059d30f]]
// Convention: __cdecl
// Signature: int __cdecl core_hino_cpp_CHino_renderTransparent_FUN_0059d120(CHino *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hino_cpp_CHino_renderTransparent_FUN_0059d120(CHino *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  double value;
  CDemonRenderer *this_ptr_01;
  CCharacter *this_ptr_02;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  double dVar5;
  int in_stack_ffffffa0;
  uint auStack_4c [4];
  uint auStack_3c [2];
  byte auStack_34 [28];
  int iStack_18;
  
  bVar4 = 0;
  if (0.0 < (double)this_ptr->vanish_timer) {
    dVar5 = (double)this_ptr->vanish_timer * _DAT_005d9e74;
    if (this_ptr->vanishing == 0) {
      iStack_18 = core_hino_cpp_percentToFixedAlpha_FUN_0059b740(100);
      value = (double)iStack_18 * dVar5;
    }
    else {
      auStack_34._20_8_ = 1.0 - dVar5;
      iStack_18 = core_hino_cpp_percentToFixedAlpha_FUN_0059b740(100);
      value = (double)iStack_18 * (double)auStack_34._20_8_;
    }
    in_stack_ffffffa0 = SUB84(__BITCAST_UINT64(dVar5),0);
    dVar5 = round(value);
    this_ptr->render_alpha = (int)ROUND(dVar5);
    this_ptr_02 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c840
                            ((this_ptr->base).base.carry_hands[0].carry_actor,
                             g_CWeaponClassInfo.name_hash);
    if (this_ptr_02 != (CCharacter *)0x0) {
      (*(((this_ptr_02->base).vtable._uc)->_uc).releaseVictim)(this_ptr_02);
      iVar1 = core_hino_cpp_percentToFixedAlpha_FUN_0059b740(100);
      if (iVar1 == this_ptr->render_alpha) {
        (this_ptr_02->base).is_renderable = 1;
        (this_ptr_02->base).is_transparent = 0;
      }
      else {
        (this_ptr_02->base).is_renderable = 0;
        (this_ptr_02->base).is_transparent = 1;
      }
    }
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  puVar2 = auStack_4c;
  puVar3 = auStack_3c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041daf0
                    ((CBoundingBox3D *)auStack_34,in_stack_ffffffa0);
  this_ptr_01 = DAT_005f2afc;
  if (iVar1 != 0) {
    iVar1 = this_ptr->render_alpha;
    (this_ptr->base).base.was_rendered_opaque = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(this_ptr_01,iVar1);
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
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
  return (this_ptr->base).base.was_rendered_opaque;
}
