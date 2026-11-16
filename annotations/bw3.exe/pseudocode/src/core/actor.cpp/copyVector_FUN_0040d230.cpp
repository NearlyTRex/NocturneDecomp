// Name: core_actor.cpp_copyVector_FUN_0040d230
// Address: 0040d230
// Address Range: [[0040d230, 0040d24d]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_copyVector_FUN_0040d230(CVector3f *dst_ptr,CVector3f *src_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_copyVector_FUN_0040d230(CVector3f *dst_ptr,CVector3f *src_ptr)

{
  if (dst_ptr == src_ptr) {
    return;
  }
  dst_ptr->x = src_ptr->x;
  dst_ptr->y = src_ptr->y;
  dst_ptr->z = src_ptr->z;
  return;
}
