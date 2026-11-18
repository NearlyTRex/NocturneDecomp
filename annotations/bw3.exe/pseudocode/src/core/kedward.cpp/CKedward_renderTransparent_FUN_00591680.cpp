// Name: core_kedward.cpp_CKedward_renderTransparent_FUN_00591680
// Address: 00591680
// Address Range: [[00591680, 005918d9]]
// Convention: __cdecl
// Signature: int __cdecl core_kedward_cpp_CKedward_renderTransparent_FUN_00591680(CKedward *this_ptr)

#include "nocturne.h"

int __cdecl core_kedward_cpp_CKedward_renderTransparent_FUN_00591680(CKedward *this_ptr)

{
  int iVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  int unaff_ESI;
  double dVar3;
  
  fVar2 = (float)this_ptr->fade_out_opacity * (float)0.01 * (float)65536;
  if (this_ptr->fading_in == 0) {
    dVar3 = round
                      ((double)((fVar2 * this_ptr->fade_timer) / this_ptr->max_fade_time));
    this_ptr->render_alpha = 0x10000 - (int)ROUND(dVar3);
    if (this_ptr->cini_flag == 0) {
      if (this_ptr->fade_timer == this_ptr->max_fade_time) {
        this_ptr->fade_state = 0;
      }
      else {
        this_ptr->fade_state = -1;
      }
    }
  }
  else {
    iVar1 = this_ptr->cini_flag;
    dVar3 = round
                      ((double)((fVar2 * this_ptr->fade_timer) / this_ptr->max_fade_time +
                               ((float)100 - (float)this_ptr->fade_out_opacity) *
                               (float)0.01 * (float)65536));
    this_ptr->render_alpha = (int)ROUND(dVar3);
    if (iVar1 == 0) {
      if (this_ptr->fade_timer == this_ptr->max_fade_time) {
        this_ptr->fade_state = 1;
      }
      else {
        this_ptr->fade_state = -1;
      }
    }
  }
  if ((this_ptr->render_alpha < 1000) && (this_ptr->cini_flag != 0)) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  this_ptr_00 = g_CDemonRenderer_PTR_005f2afc;
  iVar1 = this_ptr->render_alpha;
  (this_ptr->base).base.was_rendered_opaque = 1;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(this_ptr_00,iVar1);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
            (g_CDemonRenderer_PTR_005f2afc,(uint)((this_ptr->base).base.additive != 0));
  if (this_ptr->cini_flag != 0) {
    unaff_ESI = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540
                          (g_CDemonRenderer_PTR_005f2afc);
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(g_CDemonRenderer_PTR_005f2afc,0);
  }
  engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120
            (g_CDemonRenderer_PTR_005f2afc,1);
  core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0
            (&(this_ptr->base).base.model,-1,0x2e7,1,0);
  engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(g_CDemonRenderer_PTR_005f2afc)
  ;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(g_CDemonRenderer_PTR_005f2afc,0);
  if (0.0 < (this_ptr->base).base.bind_time) {
    core_charactr_cpp_CCharacter_renderEthereal_FUN_0042f310((CCharacter *)this_ptr);
  }
  if (g_RenderMotionDebug != 0) {
    core_motion_cpp_CMotionController_render_FUN_004fcdc0
              (&(this_ptr->base).base.model.base,(CDemonActor *)this_ptr);
  }
  if (this_ptr->cini_flag != 0) {
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520
              (g_CDemonRenderer_PTR_005f2afc,unaff_ESI);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
  return (this_ptr->base).base.was_rendered_opaque;
}
