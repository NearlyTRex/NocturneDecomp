// Name: core_spireagl.cpp_CSpiritEagle_renderOpaque_FUN_00599a70
// Address: 00599a70
// Address Range: [[00599a70, 00599b14]]
// Convention: __cdecl
// Signature: int __cdecl core_spireagl_cpp_CSpiritEagle_renderOpaque_FUN_00599a70(CSpiritEagle *this_ptr)

#include "nocturne.h"

int __cdecl core_spireagl_cpp_CSpiritEagle_renderOpaque_FUN_00599a70(CSpiritEagle *this_ptr)

{
  CMorph *this_ptr_00;
  
  if ((this_ptr->morph_time <= 1.0) && ((this_ptr->base).render_active == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    if (ABS(this_ptr->morph_time) == 0.0) {
      core_charactr_cpp_FUN_0042d8e0(this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
      return 1;
    }
    this_ptr_00 = &this_ptr->morph;
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004fab90
              (this_ptr_00,0,&(this_ptr->base).model,0);
    core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004fab90
              (this_ptr_00,1,&(this_ptr->morph_actor->base).base.model,0);
    core_morph_cpp_CMorph_render_FUN_004fb0e0(this_ptr_00,this_ptr->morph_time);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830((CDemonActor *)this_ptr);
    return 1;
  }
  return 0;
}
