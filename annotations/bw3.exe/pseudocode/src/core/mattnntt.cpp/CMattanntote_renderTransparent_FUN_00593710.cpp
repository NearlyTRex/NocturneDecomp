// Name: core_mattnntt.cpp_CMattanntote_renderTransparent_FUN_00593710
// Address: 00593710
// Address Range: [[00593710, 005939a6]]
// Convention: __cdecl
// Signature: int __cdecl core_mattnntt_cpp_CMattanntote_renderTransparent_FUN_00593710(CMattanntote *this_ptr)

#include "nocturne.h"

int __cdecl core_mattnntt_cpp_CMattanntote_renderTransparent_FUN_00593710(CMattanntote *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  CDemonRenderer *this_ptr_01;
  CCharacter *this_ptr_02;
  int iVar2;
  CDemonActor *this_ptr_03;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  double dVar6;
  int in_stack_ffffffb0;
  uint auStack_4c [4];
  uint auStack_3c [2];
  CBoundingBox3D CStack_34;
  float fStack_1c;
  float fStack_18;
  
  bVar5 = 0;
  fStack_18 = (float)this_ptr->fade_out_opacity * (float)0.01 *
              (float)65536;
  fStack_1c = ((float)100 - (float)this_ptr->fade_out_opacity) *
              (float)0.01 * (float)65536;
  if (this_ptr->fading_out == 0) {
    dVar6 = round
                      ((double)((fStack_18 * this_ptr->fade_timer) / this_ptr->max_fade_time));
    fStack_18 = (float)(int)ROUND(dVar6);
    this_ptr->opacity = 0x10000 - (int)fStack_18;
    if (this_ptr->fade_timer == this_ptr->max_fade_time) {
      this_ptr->fade_done = 0;
      goto LAB_005937aa;
    }
  }
  else {
    fVar1 = this_ptr->fade_timer;
    dVar6 = round
                      ((double)((fStack_18 * this_ptr->fade_timer) / this_ptr->max_fade_time +
                               fStack_1c));
    this_ptr->opacity = (int)ROUND(dVar6);
    if (fVar1 == this_ptr->max_fade_time) {
      this_ptr->fade_done = 1;
      goto LAB_005937aa;
    }
  }
  this_ptr->fade_done = -1;
LAB_005937aa:
  this_ptr_02 = (CCharacter *)
                core_actor_cpp_castToClassHash_FUN_0040c840
                          ((this_ptr->base).base.carry_hands[1].carry_actor,
                           g_CWeaponClassInfo.name_hash);
  if (this_ptr_02 != (CCharacter *)0x0) {
    (*(((this_ptr_02->base).vtable._uc)->_uc).releaseVictim)(this_ptr_02);
    if (this_ptr->opacity == 0x10000) {
      (this_ptr_02->base).is_renderable = 1;
      (this_ptr_02->base).is_transparent = 0;
    }
    else {
      (this_ptr_02->base).is_renderable = 0;
      (this_ptr_02->base).is_transparent = 1;
    }
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  puVar3 = auStack_4c;
  puVar4 = auStack_3c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041daf0(&CStack_34,in_stack_ffffffb0);
  this_ptr_01 = g_CDemonRenderer_PTR_005f2afc;
  if (iVar2 != 0) {
    iVar2 = this_ptr->opacity;
    (this_ptr->base).base.was_rendered_opaque = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(this_ptr_01,iVar2);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(g_CDemonRenderer_PTR_005f2afc,0);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120
              (g_CDemonRenderer_PTR_005f2afc,1);
    this_ptr_00 = &(this_ptr->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0
              (this_ptr_00,-1,0x2e7,1,0);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0
              (g_CDemonRenderer_PTR_005f2afc);
    if (g_RenderMotionDebug != 0) {
      core_motion_cpp_CMotionController_render_FUN_004fcdc0
                (&this_ptr_00->base,(CDemonActor *)this_ptr);
    }
    if (0.0 < (this_ptr->base).base.bind_time) {
      core_charactr_cpp_CCharacter_renderEthereal_FUN_0042f310((CCharacter *)this_ptr);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
  if (0 < (this_ptr->base).base.fire_count) {
    core_charactr_cpp_CCharacter_renderFlames_FUN_0042f6f0((CCharacter *)this_ptr);
  }
  if (this_ptr->opacity == 0x10000) {
    this_ptr_03 = &this_ptr->flames[0].base;
    do {
      (*((this_ptr_03->vtable)._ub)->renderTransparent)(this_ptr_03);
      this_ptr_03 = (CDemonActor *)&this_ptr_03[1].next_actor;
    } while ((CFlame *)this_ptr_03 != this_ptr->flames + 4);
  }
  return (this_ptr->base).base.was_rendered_opaque;
}
