// Name: core_mimic.cpp_CMimic_renderBackground_FUN_004d5b20
// Address: 004d5b20
// Address Range: [[004d5b20, 004d5ba1]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_renderBackground_FUN_004d5b20(CMimic *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_renderBackground_FUN_004d5b20(CMimic *this_ptr,int layer_flag)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CBoundingBox3D local_1c;
  
  if ((this_ptr->base).pool_me != 0) {
    if (layer_flag != 0) {
      (this_ptr->base).base.render_active = 1;
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20((CDemonActor *)this_ptr);
    this_ptr_00 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                            ((CDemonActor *)this_ptr,&local_1c);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
    if (iVar1 != 0) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
                (&(this_ptr->base).base.model,-1,0xffffffff,1,0);
      core_cloth_cpp_CCloth_render_FUN_00437db0(&this_ptr->cloth,(CDeformableModelInstance *)0x0);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)this_ptr);
  }
  return;
}
