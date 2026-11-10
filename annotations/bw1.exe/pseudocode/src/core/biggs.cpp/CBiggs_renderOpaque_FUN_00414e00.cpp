// Name: core_biggs.cpp_CBiggs_renderOpaque_FUN_00414e00
// Address: 00414e00
// Address Range: [[00414e00, 00414f20]]
// Convention: __cdecl
// Signature: int __cdecl core_biggs_cpp_CBiggs_renderOpaque_FUN_00414e00(CBiggs *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_biggs_cpp_CBiggs_renderOpaque_FUN_00414e00(CBiggs *this_ptr)

{
  byte *this_ptr_00;
  CKeyFramedModel *model_ptr;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int iVar5;
  int part_index;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar4 = 0;
  if ((this_ptr->base).base.render_active != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
  (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
  puVar2 = auStack_38;
  puVar3 = auStack_20;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_004207b0(auStack_20);
  if (iVar1 != 0) {
    iVar5 = this_ptr->morphing;
    (this_ptr->base).base.was_rendered_opaque = 1;
    if (iVar5 == 0) {
      core_charactr_cpp_CCharacter_renderCharacter_FUN_0042e960((CCharacter *)this_ptr);
    }
    else {
      this_ptr_00 = &this_ptr->field_0xc3ec;
      core_morph_cpp_CMorph_updateModelFromDeformable_FUN_00523290
                ((CMorph *)this_ptr_00,0,&(this_ptr->base).base.model,0);
      part_index = 0;
      iVar5 = 0;
      model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&this_ptr->model)
      ;
      core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
                ((CMorph *)this_ptr_00,1,model_ptr,iVar5,part_index);
      core_morph_cpp_CMorph_render_FUN_005237e0
                ((CMorph *)this_ptr_00,this_ptr->morph_timer / 0x40800000);
    }
    if (_DAT_01d39d34 != 0) {
      iVar5 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
      if (iVar5 == 0) {
        core_motion_cpp_FUN_005254b0(&(this_ptr->base).base.model.base,(CDemonActor *)this_ptr);
        (*((this_ptr->base).base.base.vtable._ub)->renderTargetPoints)((CDemonActor *)this_ptr);
      }
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
  return iVar1;
}
