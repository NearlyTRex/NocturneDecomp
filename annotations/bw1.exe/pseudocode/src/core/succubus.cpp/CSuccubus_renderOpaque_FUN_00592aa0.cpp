// Name: core_succubus.cpp_CSuccubus_renderOpaque_FUN_00592aa0
// Address: 00592aa0
// Address Range: [[00592aa0, 00592c36]]
// Convention: __cdecl
// Signature: int __cdecl core_succubus_cpp_CSuccubus_renderOpaque_FUN_00592aa0(CSuccubus *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_succubus_cpp_CSuccubus_renderOpaque_FUN_00592aa0(CSuccubus *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  byte *this_ptr_00;
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_3c [6];
  uint auStack_24 [6];
  int iStack_c;
  
  bVar5 = 0;
  iStack_c = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_00484180(DAT_00612560);
  if (iStack_c == 0) {
    (this_ptr->base).base.was_rendered_opaque = 0;
  }
  if ((this_ptr->base).base.render_active == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
              ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
    puVar3 = auStack_3c;
    puVar4 = auStack_24;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar2 = core_box_cpp_FUN_004207b0(auStack_24);
    if (iVar2 != 0) {
      model_ptr = &this_ptr->hotdemon_model;
      (this_ptr->base).base.was_rendered_opaque = 1;
      if (iStack_c == 0) {
        if (this_ptr->morph_started == 0) {
          core_charactr_cpp_CCharacter_renderCharacter_FUN_0042e960((CCharacter *)this_ptr);
        }
        else {
          this_ptr_00 = &this_ptr->field_0xe7d8;
          core_morph_cpp_CMorph_updateModelFromDeformable_FUN_00523290
                    ((CMorph *)this_ptr_00,0,&(this_ptr->base).base.model,0);
          core_morph_cpp_CMorph_updateModelFromDeformable_FUN_00523290
                    ((CMorph *)this_ptr_00,1,model_ptr,0);
          core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
                    ((CMorph *)this_ptr_00,1,
                     (CKeyFramedModel *)(this_ptr->hotdemon_cloth_list).cloths[0],0,1);
          core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
                    ((CMorph *)this_ptr_00,1,
                     (CKeyFramedModel *)(this_ptr->hotdemon_cloth_list).cloths[0],0,2);
          core_morph_cpp_CMorph_render_FUN_005237e0
                    ((CMorph *)this_ptr_00,this_ptr->morph_timer / _DAT_00606278);
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
                  (model_ptr,-1,0xffffffff,1,0);
        core_cloth_cpp_CClothList_render_FUN_00441ff0(&this_ptr->hotdemon_cloth_list,model_ptr);
      }
      if ((_DAT_01d39d34 != 0) &&
         (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560),
         iVar1 == 0)) {
        core_motion_cpp_FUN_005254b0(&(this_ptr->base).base.model.base,(CDemonActor *)this_ptr);
        (*((this_ptr->base).base.base.vtable._ub)->renderTargetPoints)((CDemonActor *)this_ptr);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    return iVar2;
  }
  return 0;
}
