// Name: core_baal.cpp_CBaal_renderTransparent_FUN_00597970
// Address: 00597970
// Address Range: [[00597970, 00597ae5]]
// Convention: __cdecl
// Signature: int __cdecl core_baal_cpp_CBaal_renderTransparent_FUN_00597970(CBaal *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_baal_cpp_CBaal_renderTransparent_FUN_00597970(CBaal *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonRenderer *this_ptr_01;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float10 fVar5;
  uint auStack_54 [6];
  uint auStack_3c [8];
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar4 = 0;
  fStack_14 = (float)this_ptr->fade_out_opacity * (float)_DAT_005d9699 * (float)_DAT_005d96a1;
  fStack_18 = ((float)_DAT_005d9691 - (float)this_ptr->fade_out_opacity) * (float)_DAT_005d9699 *
              (float)_DAT_005d96a1;
  if (this_ptr->fading_in == 0) {
    fVar5 = ((float10)fStack_14 * (float10)this_ptr->fade_timer) / (float10)this_ptr->max_fade_time;
    iVar1 = round();
    iStack_1c = (int)ROUND(fVar5);
    this_ptr->render_alpha = iVar1 - iStack_1c;
  }
  else {
    fVar5 = ((float10)fStack_14 * (float10)this_ptr->fade_timer) / (float10)this_ptr->max_fade_time
            + (float10)fStack_18;
    round();
    this_ptr->render_alpha = (int)ROUND(fVar5);
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  puVar2 = auStack_3c;
  puVar3 = auStack_54;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041daf0(auStack_54);
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
      core_motion_cpp_FUN_004fcdc0(&this_ptr_00->base,(CDemonActor *)this_ptr);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
  return (this_ptr->base).base.was_rendered_opaque;
}
