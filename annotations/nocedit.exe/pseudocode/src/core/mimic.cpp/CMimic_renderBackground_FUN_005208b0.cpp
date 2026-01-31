// Name: core_mimic.cpp_CMimic_renderBackground_FUN_005208b0
// Address: 005208b0
// Address Range: [[005208b0, 0052092d]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_renderBackground_FUN_005208b0(CMimic *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_renderBackground_FUN_005208b0(CMimic *this_ptr,int layer_flag)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  
  if ((this_ptr->base).pool_me != 0) {
    if (layer_flag != 0) {
      (this_ptr->base).base.unk1[0] = '\x01';
      (this_ptr->base).base.unk1[1] = '\0';
      (this_ptr->base).base.unk1[2] = '\0';
      (this_ptr->base).base.unk1[3] = '\0';
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    this_ptr_00 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                            ((CDemonActor *)this_ptr,(CBoundingBox3D *)&stack0xffffffe4);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iVar1 != 0) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                (&(this_ptr->base).base.model,-1,0xffffffff,1,0);
      core_cloth_cpp_FUN_0043bae0();
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  }
  return;
}
