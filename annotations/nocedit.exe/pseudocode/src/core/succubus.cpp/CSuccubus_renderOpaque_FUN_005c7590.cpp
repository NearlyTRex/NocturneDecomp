// Name: core_succubus.cpp_CSuccubus_renderOpaque_FUN_005c7590
// Address: 005c7590
// Address Range: [[005c7590, 005c7709]]
// Convention: __cdecl
// Signature: int __cdecl core_succubus_cpp_CSuccubus_renderOpaque_FUN_005c7590(CSuccubus *this_ptr)

#include "nocturne.h"

int __cdecl core_succubus_cpp_CSuccubus_renderOpaque_FUN_005c7590(CSuccubus *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_01;
  int iVar2;
  int iVar3;
  CBoundingBox3D local_24;
  int iStack_c;
  CDeformableModelInstance *model_ptr;
  CMorph *this_ptr_00;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr2);
  if (iVar1 == 0) {
    (this_ptr->base).base.was_rendered_opaque = 0;
  }
  if ((this_ptr->base).base.render_active == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    this_ptr_01 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                            ((CDemonActor *)this_ptr,&local_24);
    iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
    if (iVar2 != 0) {
      model_ptr = &this_ptr->hotdemon_model;
      (this_ptr->base).base.was_rendered_opaque = 1;
      if (iVar1 == 0) {
        if (this_ptr->morph_started == 0) {
          core_charactr_cpp_CCharacter_renderCharacter_FUN_00429aa0((CCharacter *)this_ptr);
        }
        else {
          this_ptr_00 = &this_ptr->morph;
          core_morph_cpp_CMorph_updateModelFromDeformable_FUN_0052b600
                    (this_ptr_00,0,&(this_ptr->base).base.model,0);
          core_morph_cpp_CMorph_updateModelFromDeformable_FUN_0052b600(this_ptr_00,1,model_ptr,0);
          core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_0052b640
                    (this_ptr_00,1,&(this_ptr->hotdemon_cloth_list).cloths[0]->model,0,1);
          core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_0052b640
                    (this_ptr_00,1,&(this_ptr->hotdemon_cloth_list).cloths[0]->model,0,2);
          core_morph_cpp_CMorph_render_FUN_0052bae0
                    (this_ptr_00,this_ptr->morph_timer / 4.0f);
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                  (model_ptr,-1,0xffffffff,1,0);
        core_cloth_cpp_CClothList_render_FUN_0043c320(&this_ptr->hotdemon_cloth_list,model_ptr);
      }
      if ((INT_02f43978 != 0) &&
         (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
         iVar3 == 0)) {
        core_motion_cpp_CMotionController_render_FUN_0052e700
                  (&(this_ptr->base).base.model.motion_controller,(CDemonActor *)this_ptr);
        (*((this_ptr->base).base.base.vtable._ub)->renderTargetPoints)((CDemonActor *)this_ptr);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    return iVar2;
  }
  return 0;
}
