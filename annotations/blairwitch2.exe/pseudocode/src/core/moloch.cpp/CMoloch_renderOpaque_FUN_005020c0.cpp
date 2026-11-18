// Name: core_moloch.cpp_CMoloch_renderOpaque_FUN_005020c0
// Address: 005020c0
// Address Range: [[005020c0, 005021f7]]
// Convention: __cdecl
// Signature: int __cdecl core_moloch_cpp_CMoloch_renderOpaque_FUN_005020c0(CMoloch *this_ptr)

#include "nocturne.h"

int __cdecl core_moloch_cpp_CMoloch_renderOpaque_FUN_005020c0(CMoloch *this_ptr)

{
  CMorph *this_ptr_00;
  int iVar1;
  int iVar2;
  uint *puVar3;
  int unaff_EDI;
  uint *puVar4;
  byte bVar5;
  uint auStack_2c [4];
  uint auStack_1c [6];
  
  bVar5 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80(g_CDemonRenderer_PTR_0060b280)
  ;
  if (iVar1 == 0) {
    (this_ptr->base).base.was_rendered_opaque = 0;
  }
  if ((this_ptr->base).base.render_active == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
              ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
    puVar3 = auStack_2c;
    puVar4 = auStack_1c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041a840
                      ((CBoundingBox3D *)(auStack_1c + 2),unaff_EDI);
    if (iVar1 != 0) {
      iVar2 = this_ptr->morphing;
      (this_ptr->base).base.was_rendered_opaque = 1;
      if (iVar2 == 0) {
        core_charactr_cpp_CCharacter_renderCharacter_FUN_00424bd0((CCharacter *)this_ptr);
      }
      else {
        this_ptr_00 = &this_ptr->morph;
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_005b7150
                  (this_ptr_00,0,&(this_ptr->base).base.model,0);
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_005b7150
                  (this_ptr_00,1,&this_ptr->model,0);
        core_morph_cpp_CMorph_render_FUN_005b76a0
                  (this_ptr_00,this_ptr->morph_timer / 2.0f);
      }
      if (g_RenderMotionDebug != 0) {
        iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960
                          (g_CDemonRenderer_PTR_0060b280);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_render_FUN_005042e0
                    (&(this_ptr->base).base.model.base,(CDemonActor *)this_ptr);
          (*((this_ptr->base).base.base.vtable._ub)->renderTargetPoints)((CDemonActor *)this_ptr);
        }
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
    return iVar1;
  }
  return 0;
}
