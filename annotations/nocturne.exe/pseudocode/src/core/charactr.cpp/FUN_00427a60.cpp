// Name: core_charactr.cpp_FUN_00427a60
// Address: 00427a60
// Address Range: [[00427a60, 00427aad]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00427a60(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00427a60(CCharacter *this_ptr)

{
  (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,"glass-1.wav@2.0");
  if ((this_ptr->model).model_name[0] == '\0') {
    (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_shatter_FUN_0051ed30
            (&this_ptr->model,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec,0);
  (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
  return;
}
