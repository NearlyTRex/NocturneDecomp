// Name: core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_0047cfe0
// Address: 0047cfe0
// Address Range: [[0047cfe0, 0047d1d3]]
// Convention: __cdecl
// Signature: int __cdecl core_dracbrid_cpp_CDraculaBride_renderOpaque_FUN_0047cfe0(CDraculaBride *this_ptr)

#include "nocturne.h"

int __cdecl core_dracbrid_cpp_CDraculaBride_renderOpaque_FUN_0047cfe0(CDraculaBride *this_ptr)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint render_flags;
  int in_stack_ffffffb4;
  double dStack_48;
  uint uStack_44;
  float fStack_40;
  CBoundingBox3D CStack_3c;
  uint auStack_24 [5];
  
  bVar5 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_00484180(g_CDemonRenderer_PTR_00612560)
  ;
  if (iVar1 == 0) {
    (this_ptr->base).base.was_rendered_opaque = 0;
  }
  if (this_ptr->mist_state != 2) {
    iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60
                      (g_CDemonRenderer_PTR_00612560);
    if ((((iVar2 == 0) || (this_ptr->mist_state == 0)) && (iVar1 == 0)) &&
       ((this_ptr->base).base.render_active == 0)) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
      (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
      puVar3 = auStack_24;
      puVar4 = &uStack_44;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004207b0(&CStack_3c,in_stack_ffffffb4);
      if (iVar1 != 0) {
        iVar2 = this_ptr->mist_state;
        (this_ptr->base).base.was_rendered_opaque = 1;
        if (iVar2 == 0) {
          if (this_ptr->exploded == 0) {
            core_charactr_cpp_CCharacter_renderCharacter_FUN_0042e960((CCharacter *)this_ptr);
          }
        }
        else {
          if (iVar2 == 1) {
            fStack_40 = (1.0 - this_ptr->vanish_timer) / 1.0f;
          }
          else {
            fStack_40 = ((float)0.5 - this_ptr->vanish_timer) / 1.0f;
            if (fStack_40 < 0.0) {
              fStack_40 = 0.0;
            }
          }
          dStack_48 = (double)fStack_40;
          if (0.0 < dStack_48) {
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
                      (g_CDemonRenderer_PTR_00612560,0);
            engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00483df0
                      (g_CDemonRenderer_PTR_00612560,fStack_40);
            engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40
                      (g_CDemonRenderer_PTR_00612560,1);
            if (dStack_48 <= 0.5) {
              render_flags = 0x267;
            }
            else {
              render_flags = 0x2e7;
            }
            core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
                      (&(this_ptr->base).base.model,-1,render_flags,1,0);
            engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00
                      (g_CDemonRenderer_PTR_00612560);
          }
        }
        if (g_INT_01d39d34 != 0) {
          iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60
                            (g_CDemonRenderer_PTR_00612560);
          if (iVar2 == 0) {
            core_motion_cpp_CMotionController_render_FUN_005254b0
                      (&(this_ptr->base).base.model.base,(CDemonActor *)this_ptr);
            (*((this_ptr->base).base.base.vtable._ub)->renderTargetPoints)((CDemonActor *)this_ptr);
          }
        }
      }
      dStack_48 = __BITCAST_DOUBLE(CONCAT44(uStack_44,this_ptr));
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
      return iVar1;
    }
  }
  return 0;
}
