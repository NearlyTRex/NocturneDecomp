// Name: core_passngr.cpp_CPassenger_renderOpaque_FUN_004efa60
// Address: 004efa60
// Address Range: [[004efa60, 004efb2f]]
// Convention: __cdecl
// Signature: int __cdecl core_passngr_cpp_CPassenger_renderOpaque_FUN_004efa60(CPassenger *this_ptr)

#include "nocturne.h"

int __cdecl core_passngr_cpp_CPassenger_renderOpaque_FUN_004efa60(CPassenger *this_ptr)

{
  CMorph *this_ptr_00;
  CBoundingBox3D *this_ptr_01;
  int iVar1;
  CBoundingBox3D local_1c;
  
  if ((this_ptr->morph_time <= 1.0) && ((this_ptr->base).base.render_active == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20((CDemonActor *)this_ptr);
    this_ptr_01 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                            ((CDemonActor *)this_ptr,&local_1c);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_01);
    if (iVar1 != 0) {
      if (ABS(this_ptr->morph_time) != 0.0) {
        this_ptr_00 = &this_ptr->morph;
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340
                  (this_ptr_00,0,&(this_ptr->base).base.model,0);
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340
                  (this_ptr_00,1,&(this_ptr->werewolf_actor->base).base.model,0);
        core_morph_cpp_CMorph_render_FUN_004e0820(this_ptr_00,this_ptr->morph_time);
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)this_ptr);
        return iVar1;
      }
      core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20((CCharacter *)this_ptr);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)this_ptr);
    return iVar1;
  }
  return 0;
}
