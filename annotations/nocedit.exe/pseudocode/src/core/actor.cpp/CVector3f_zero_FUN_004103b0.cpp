// Name: core_actor.cpp_CVector3f_zero_FUN_004103b0
// Address: 004103b0
// Address Range: [[004103b0, 004103c6]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CVector3f_zero_FUN_004103b0(CVector3f *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CVector3f_zero_FUN_004103b0(CVector3f *this_ptr)

{
  this_ptr->z = 0.0;
  this_ptr->y = this_ptr->z;
  this_ptr->x = this_ptr->y;
  return;
}
