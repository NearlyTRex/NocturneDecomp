// Name: core_charactr.cpp_CCharacter_FUN_0042a390
// Address: 0042a390
// Address Range: [[0042a390, 0042a3e2]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042a390(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042a390(CCharacter *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  float fStack_1c;
  
  if (*(int *)this_ptr->field2_0x240c == 0) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
  this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                          (&this_ptr->base_actor,(CBoundingBox3D *)&fStack_1c);
  fStack_1c = 6.119892e-39;
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 != 0) {
    fStack_1c = 6.11991e-39;
    core_charactr_cpp_CCharacter_FUN_00429aa0(this_ptr);
  }
  fStack_1c = 6.119923e-39;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
  return;
}
