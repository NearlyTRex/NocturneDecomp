// Name: core_actor.cpp_CVector_copy_FUN_004104a0
// Address: 004104a0
// Address Range: [[004104a0, 004104c6]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CVector_copy_FUN_004104a0(CVector3f *this_ptr,CVector3f *other)

#include "nocturne.h"

void __cdecl core_actor_cpp_CVector_copy_FUN_004104a0(CVector3f *this_ptr,CVector3f *other)

{
  this_ptr->x = other->x;
  this_ptr->y = other->y;
  this_ptr->z = other->z;
  return;
}
