// Name: core_baal.cpp_CBaal_renderTransparent_FUN_00597970
// Address: 00597970
// Address Range: [[00597970, 00597ae5]]
// Convention: __cdecl
// Signature: int __cdecl core_baal_cpp_CBaal_renderTransparent_FUN_00597970(CBaal *this_ptr)

#include "nocturne.h"

int __cdecl core_baal_cpp_CBaal_renderTransparent_FUN_00597970(CBaal *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonRenderer *this_ptr_01;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  double dVar5;
  CBoundingBox3D *this_ptr_02;
  int in_stack_ffffffac;
  CBoundingBox3D CStack_50;
  uint auStack_38 [6];
  int iStack_20;
  float fStack_18;
  float fStack_14;
  
  bVar4 = 0;
  fStack_14 = (float)this_ptr->fade_out_opacity * (float)0.01 *
              (float)65536;
  fStack_18 = ((float)100 - (float)this_ptr->fade_out_opacity) *
              (float)0.01 * (float)65536;
  if (this_ptr->fading_in == 0) {
    dVar5 = round
                      ((double)((fStack_14 * this_ptr->fade_timer) / this_ptr->max_fade_time));
    iStack_20 = (int)ROUND(dVar5);
    this_ptr->render_alpha = 0x10000 - iStack_20;
  }
  else {
    dVar5 = round
                      ((double)((fStack_14 * this_ptr->fade_timer) / this_ptr->max_fade_time +
                               fStack_18));
    this_ptr->render_alpha = (int)ROUND(dVar5);
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  this_ptr_02 = &CStack_50;
  puVar2 = auStack_38;
  puVar3 = (uint *)&stack0xffffffa8;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041daf0(this_ptr_02,in_stack_ffffffac);
  this_ptr_01 = g_CDemonRenderer_PTR_005f2afc;
  if (iVar1 != 0) {
    iVar1 = this_ptr->render_alpha;
    (this_ptr->base).base.was_rendered_opaque = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(this_ptr_01,iVar1);
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
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
  return (this_ptr->base).base.was_rendered_opaque;
}
