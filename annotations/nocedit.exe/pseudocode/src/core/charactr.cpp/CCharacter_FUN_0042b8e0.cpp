// Name: core_charactr.cpp_CCharacter_FUN_0042b8e0
// Address: 0042b8e0
// Address Range: [[0042b8e0, 0042b92d]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042b8e0(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b8e0(CCharacter *this_ptr)

{
  (*((this_ptr->base_actor).vtable)->playSound)(&this_ptr->base_actor,"glass-1.wav@2.0");
  if ((this_ptr->model).model_name[0] == '\0') {
    (this_ptr->base_actor).was_created = 2;
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_shatter_FUN_005a14b0
            (&this_ptr->model,&(this_ptr->base_actor).location.position,
             (CVector3f *)&(this_ptr->base_actor).orient,0);
  (this_ptr->base_actor).was_created = 2;
  return;
}
