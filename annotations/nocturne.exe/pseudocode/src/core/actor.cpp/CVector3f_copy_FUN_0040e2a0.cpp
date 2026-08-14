// Name: core_actor.cpp_CVector3f_copy_FUN_0040e2a0
// Address: 0040e2a0
// Address Range: [[0040e2a0, 0040e2c6]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_actor_cpp_CVector3f_copy_FUN_0040e2a0(CVector3f *this_ptr,CVector3f *other)

#include "nocturne.h"

CVector3f * __cdecl core_actor_cpp_CVector3f_copy_FUN_0040e2a0(CVector3f *this_ptr,CVector3f *other)

{
  this_ptr->x = other->x;
  this_ptr->y = other->y;
  this_ptr->z = other->z;
  return this_ptr;
}
