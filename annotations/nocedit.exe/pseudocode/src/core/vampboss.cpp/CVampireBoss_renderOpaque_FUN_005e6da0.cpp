// Name: core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_005e6da0
// Address: 005e6da0
// Address Range: [[005e6da0, 005e6f46]]
// Convention: __cdecl
// Signature: int core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_005e6da0(CVampireBoss * this_ptr)

#include "nocturne.h"

int __cdecl core_vampboss_cpp_CVampireBoss_renderOpaque_FUN_005e6da0(CVampireBoss *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CBoundingBox3D local_2c;
  int iStack_c;
  
  if (*(int *)(this_ptr->base_enemy).base_character.field2_0x240c != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
  this_ptr_00 = (*((this_ptr->base_enemy).base_character.base_actor.vtable._ub)->getBoundingBox)
                          ((CDemonActor *)this_ptr,&local_2c);
  iStack_c = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iStack_c == 0) goto LAB_005e6e6c;
  if (this_ptr->form == 0) {
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
              (&(this_ptr->base_enemy).base_character.model,-1,0xffffffff,1,0);
    core_cloth_cpp_FUN_0043bae0();
LAB_005e6e2e:
    core_cloth_cpp_FUN_0043bae0();
  }
  else {
    if (this_ptr->form == 2) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8),-1,0xffffffff,1,0);
      goto LAB_005e6e2e;
    }
    core_morph_cpp_FUN_0052b600();
    core_morph_cpp_FUN_0052b640();
    core_morph_cpp_FUN_0052b640();
    core_morph_cpp_FUN_0052b640();
    core_morph_cpp_FUN_0052b640();
    core_morph_cpp_FUN_0052b600();
    core_morph_cpp_FUN_0052b640();
    core_morph_cpp_FUN_0052b640();
    core_morph_cpp_CMorphModel_FUN_0052bae0((CMorphModel *)this_ptr->field3_0xcdcc4);
  }
  core_charactr_cpp_CCharacter_FUN_0042a420((CCharacter *)this_ptr);
  if (DAT_02f43978 != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if (iVar1 == 0) {
      core_motion_cpp_CMotionController_render_FUN_0052e700
                (&(this_ptr->base_enemy).base_character.model.motion_controller,
                 (CDemonActor *)this_ptr);
    }
  }
LAB_005e6e6c:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  return iStack_c;
}
