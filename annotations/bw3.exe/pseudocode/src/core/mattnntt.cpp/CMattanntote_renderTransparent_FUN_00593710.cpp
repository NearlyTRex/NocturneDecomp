// Name: core_mattnntt.cpp_CMattanntote_renderTransparent_FUN_00593710
// Address: 00593710
// Address Range: [[00593710, 005939a6]]
// Convention: __cdecl
// Signature: int __cdecl core_mattnntt_cpp_CMattanntote_renderTransparent_FUN_00593710(CMattanntote *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mattnntt_cpp_CMattanntote_renderTransparent_FUN_00593710(CMattanntote *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonRenderer *this_ptr_01;
  int iVar1;
  CDemonActor *this_ptr_02;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  ulonglong uVar7;
  uint auStack_54 [6];
  uint auStack_3c [8];
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  
  bVar4 = 0;
  fStack_18 = (float)this_ptr->fade_out_opacity * (float)_DAT_005d91f3 * (float)_DAT_005d91fb;
  fStack_1c = ((float)_DAT_005d91eb - (float)this_ptr->fade_out_opacity) * (float)_DAT_005d91f3 *
              (float)_DAT_005d91fb;
  if (this_ptr->fading_out == 0) {
    fVar5 = ((float10)fStack_18 * (float10)this_ptr->fade_timer) / (float10)this_ptr->max_fade_time;
    uVar7 = round();
    iStack_14 = (int)ROUND(fVar5);
    this_ptr->opacity = (int)uVar7 - iStack_14;
    if (this_ptr->fade_timer == this_ptr->max_fade_time) {
      this_ptr->fade_done = (int)((ulonglong)uVar7 >> 0x20);
      goto LAB_005937aa;
    }
  }
  else {
    fVar6 = ((float10)fStack_18 * (float10)this_ptr->fade_timer) / (float10)this_ptr->max_fade_time
            + (float10)fStack_1c;
    fVar5 = (float10)this_ptr->fade_timer;
    round();
    this_ptr->opacity = (int)ROUND(fVar6);
    if (fVar5 == (float10)this_ptr->max_fade_time) {
      this_ptr->fade_done = 1;
      goto LAB_005937aa;
    }
  }
  this_ptr->fade_done = -1;
LAB_005937aa:
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                    ((this_ptr->base).base.carry_hands[1].carry_actor,g_CWeaponClassInfo.name_hash);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x154) + 0xf8))(iVar1,this_ptr->opacity);
    if (this_ptr->opacity == 0x10000) {
      *(uint *)(iVar1 + 0xf8) = 1;
      *(uint *)(iVar1 + 0xfc) = 0;
    }
    else {
      *(uint *)(iVar1 + 0xf8) = 0;
      *(uint *)(iVar1 + 0xfc) = 1;
    }
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  puVar2 = auStack_54;
  puVar3 = auStack_3c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041daf0(auStack_3c);
  this_ptr_01 = DAT_005f2afc;
  if (iVar1 != 0) {
    iVar1 = this_ptr->opacity;
    (this_ptr->base).base.was_rendered_opaque = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(this_ptr_01,iVar1);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(DAT_005f2afc,1);
    this_ptr_00 = &(this_ptr->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0
              (this_ptr_00,-1,0x2e7,1,0);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(DAT_005f2afc);
    if (_DAT_01d8e40c != 0) {
      core_motion_cpp_FUN_004fcdc0(&this_ptr_00->base,(CDemonActor *)this_ptr);
    }
    if (0.0 < (this_ptr->base).base.bind_time) {
      core_charactr_cpp_FUN_0042f310((CCharacter *)this_ptr);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
  if (0 < (this_ptr->base).base.fire_count) {
    core_charactr_cpp_CCharacter_renderFlames_FUN_0042f6f0((CCharacter *)this_ptr);
  }
  if (this_ptr->opacity == 0x10000) {
    this_ptr_02 = &this_ptr->flames[0].base;
    do {
      (*((UActorVTable *)(this_ptr_02->actor_name + 0x154))->_ub->renderTransparent)(this_ptr_02);
      this_ptr_02 = (CDemonActor *)&this_ptr_02[1].next_actor;
    } while ((CFlame *)this_ptr_02 != this_ptr->flames + 4);
  }
  return (this_ptr->base).base.was_rendered_opaque;
}
