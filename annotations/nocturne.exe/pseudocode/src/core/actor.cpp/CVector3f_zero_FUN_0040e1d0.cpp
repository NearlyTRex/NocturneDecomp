// Name: core_actor.cpp_CVector3f_zero_FUN_0040e1d0
// Address: 0040e1d0
// Address Range: [[0040e1d0, 0040e1e6]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CVector3f_zero_FUN_0040e1d0(CVector3f *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CVector3f_zero_FUN_0040e1d0(CVector3f *this_ptr)

{
  this_ptr->z = 0.0;
  this_ptr->y = this_ptr->z;
  this_ptr->x = this_ptr->y;
  return;
}
