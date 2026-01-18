// Name: core_biggs.cpp_CBiggs_renderOpaque_FUN_004189b0
// Address: 004189b0
// Address Range: [[004189b0, 00418abc]]
// Convention: __cdecl
// Signature: int core_biggs.cpp_CBiggs_renderOpaque_FUN_004189b0(CBiggs * this_ptr)

#include "nocturne.h"

int __cdecl core_biggs_cpp_CBiggs_renderOpaque_FUN_004189b0(CBiggs *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  int iVar2;
  
  if (*(int *)(this_ptr->base_enemy).base_character.field2_0x240c != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
  this_ptr_00 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->getBoundingBox)
                          ((CDemonActor *)this_ptr,(CBoundingBox3D *)&stack0xffffffe0);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 != 0) {
    iVar2 = this_ptr->morphing;
    (this_ptr->base_enemy).base_character.field13_0x2620[0] = '\x01';
    (this_ptr->base_enemy).base_character.field13_0x2620[1] = '\0';
    (this_ptr->base_enemy).base_character.field13_0x2620[2] = '\0';
    (this_ptr->base_enemy).base_character.field13_0x2620[3] = '\0';
    if (iVar2 == 0) {
      core_charactr_cpp_CCharacter_FUN_00429aa0((CCharacter *)this_ptr);
    }
    else {
      core_morph_cpp_FUN_0052b600();
      core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                ((CKeyFramedModelInstance *)(this_ptr->field1_0xbeb4 + 8));
      core_morph_cpp_FUN_0052b640();
      core_morph_cpp_CMorphModel_FUN_0052bae0((CMorphModel *)this_ptr->field4_0xc040);
    }
    if (DAT_02f43978 != 0) {
      iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
      if (iVar2 == 0) {
        core_motion_cpp_CMotionController_render_FUN_0052e700
                  (&(this_ptr->base_enemy).base_character.model.motion_controller,
                   (CDemonActor *)this_ptr);
        (*((this_ptr->base_enemy).base_character.base_actor.vtable)->renderTargetPoints)
                  ((CDemonActor *)this_ptr);
      }
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  return iVar1;
}
