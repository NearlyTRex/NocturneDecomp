// Name: core_charactr.cpp_CCharacter_renderBackground_FUN_0042a390
// Address: 0042a390
// Address Range: [[0042a390, 0042a3e2]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderBackground_FUN_0042a390(CCharacter *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderBackground_FUN_0042a390(CCharacter *this_ptr,int layer_flag)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CBoundingBox3D CStack_1c;
  
  if (this_ptr->render_active == 0) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_1c);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 != 0) {
    core_charactr_cpp_CCharacter_renderCharacter_FUN_00429aa0(this_ptr);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return;
}
