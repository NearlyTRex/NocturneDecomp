// Name: core_charactr.cpp_CCharacter_shatter_FUN_00427210
// Address: 00427210
// Address Range: [[00427210, 0042725d]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_shatter_FUN_00427210(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_shatter_FUN_00427210(CCharacter *this_ptr)

{
  (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,"glass-1.wav@2.0");
  if ((this_ptr->model).field_0x2260 == '\0') {
    (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_shatter_FUN_005485c0
            (&this_ptr->model,(CVector3f *)&(this_ptr->base).field_0x20,&(this_ptr->base).orient.vec
             ,0);
  (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
  return;
}
