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
  double dVar1;
  CDemonRenderer *this_ptr_01;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
  uint auStack_50 [6];
  uint auStack_38 [6];
  double dStack_20;
  int iStack_18;
  
  bVar6 = 0;
  if (0.0 < (double)this_ptr->vanish_timer) {
    dVar1 = (double)this_ptr->vanish_timer * _DAT_005d9e74;
    if (this_ptr->vanishing == 0) {
      iStack_18 = core_hino_cpp_FUN_0059b740(100);
      fVar7 = (float10)iStack_18 * (float10)dVar1;
    }
    else {
      dStack_20 = 1.0 - dVar1;
      iStack_18 = core_hino_cpp_FUN_0059b740(100);
      fVar7 = (float10)iStack_18 * (float10)dStack_20;
    }
    round();
    this_ptr->render_alpha = (int)ROUND(fVar7);
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                      ((this_ptr->base).base.carry_hands[0].carry_actor,g_CWeaponClassInfo.name_hash
                      );
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 0x154) + 0xf8))(iVar2,this_ptr->render_alpha);
      iVar3 = core_hino_cpp_FUN_0059b740(100);
      if (iVar3 == this_ptr->render_alpha) {
        *(uint *)(iVar2 + 0xf8) = 1;
        *(uint *)(iVar2 + 0xfc) = 0;
      }
      else {
        *(uint *)(iVar2 + 0xf8) = 0;
        *(uint *)(iVar2 + 0xfc) = 1;
      }
    }
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  puVar4 = auStack_50;
  puVar5 = auStack_38;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_0041daf0(auStack_38);
  this_ptr_01 = DAT_005f2afc;
  if (iVar2 != 0) {
    iVar2 = this_ptr->render_alpha;
    (this_ptr->base).base.was_rendered_opaque = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(this_ptr_01,iVar2);
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
  return (this_ptr->base).base.was_rendered_opaque;
}
