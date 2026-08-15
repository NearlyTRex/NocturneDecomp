// Name: core_actor.cpp_CVector3f_copy_FUN_004104a0
// Address: 004104a0
// MANUAL RECONSTRUCTION
// Address Range: [[004104a0, 004104c6]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_actor_cpp_CVector3f_copy_FUN_004104a0(CVector3f *this_ptr,CVector3f *other)

#include "nocturne.h"

CVector3f * __cdecl core_actor_cpp_CVector3f_copy_FUN_004104a0(CVector3f *this_ptr,CVector3f *other)

{
  *this_ptr = *other;
  return this_ptr;
}
