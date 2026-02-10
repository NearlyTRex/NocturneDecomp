// Name: core_charactr.cpp_CCharacter_shatter_FUN_0042b8e0
// Address: 0042b8e0
// Address Range: [[0042b8e0, 0042b92d]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_shatter_FUN_0042b8e0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_shatter_FUN_0042b8e0(CCharacter *this_ptr)

{
  (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,"glass-1.wav@2.0");
  if ((this_ptr->model).model_name[0] == '\0') {
    (this_ptr->base).was_created = 2;
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_shatter_FUN_005a14b0
            (&this_ptr->model,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec,0);
  (this_ptr->base).was_created = 2;
  return;
}
