// Name: core_actor.cpp_copyVector_FUN_00410360
// Address: 00410360
// Address Range: [[00410360, 0041037d]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_copyVector_FUN_00410360(CVector3f *dst_ptr,CVector3f *src_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_copyVector_FUN_00410360(CVector3f *dst_ptr,CVector3f *src_ptr)

{
  if (dst_ptr == src_ptr) {
    return;
  }
  dst_ptr->x = src_ptr->x;
  dst_ptr->y = src_ptr->y;
  dst_ptr->z = src_ptr->z;
  return;
}
