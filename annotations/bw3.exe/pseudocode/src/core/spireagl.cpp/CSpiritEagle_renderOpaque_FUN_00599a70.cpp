// Name: core_spireagl.cpp_CSpiritEagle_renderOpaque_FUN_00599a70
// Address: 00599a70
// Address Range: [[00599a70, 00599b14]]
// Convention: __cdecl
// Signature: int __cdecl core_spireagl_cpp_CSpiritEagle_renderOpaque_FUN_00599a70(CSpiritEagle *this_ptr)

#include "nocturne.h"

int __cdecl core_spireagl_cpp_CSpiritEagle_renderOpaque_FUN_00599a70(CSpiritEagle *this_ptr)

{
  byte *this_ptr_00;
  
  if ((*(float *)&this_ptr->field_0x214a0 <= 1.0) && (*(int *)&this_ptr->field_0x24fc == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    if ((*(uint *)&this_ptr->field_0x214a0 & 0x7fffffff) == 0) {
      core_charactr_cpp_FUN_0042d8e0(this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
      return 1;
    }
    this_ptr_00 = &this_ptr->field_0x20874;
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004fab90
              ((CMorph *)this_ptr_00,0,(CDeformableModelInstance *)&this_ptr->field_0x158,0);
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004fab90
              ((CMorph *)this_ptr_00,1,
               (CDeformableModelInstance *)(*(int *)&this_ptr->field_0x20870 + 0x158),0);
    core_morph_cpp_CMorph_render_FUN_004fb0e0
              ((CMorph *)this_ptr_00,*(float *)&this_ptr->field_0x214a0);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
    return 1;
  }
  return 0;
}
