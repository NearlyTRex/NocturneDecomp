// Name: core_charactr.cpp_CCharacter_renderBackground_FUN_00426510
// Address: 00426510
// Address Range: [[00426510, 00426566]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderBackground_FUN_00426510(CCharacter *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderBackground_FUN_00426510(CCharacter *this_ptr,int layer_flag)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CBoundingBox3D local_1c;
  
  if (this_ptr->render_active == 0) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_1c);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
  if (iVar1 != 0) {
    core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20(this_ptr);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
  return;
}
