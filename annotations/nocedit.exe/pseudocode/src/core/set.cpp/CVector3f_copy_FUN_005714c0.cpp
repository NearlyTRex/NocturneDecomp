// Name: core_set.cpp_CVector3f_copy_FUN_005714c0
// Address: 005714c0
// Address Range: [[005714c0, 00571504]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_set_cpp_CVector3f_copy_FUN_005714c0(CVector3f *this_ptr,CVector3f *b)

#include "nocturne.h"

CVector3f * __cdecl core_set_cpp_CVector3f_copy_FUN_005714c0(CVector3f *this_ptr,CVector3f *b)

{
  if (this_ptr == b) {
    if (this_ptr + 1 == b + 1) {
      return this_ptr;
    }
  }
  else {
    this_ptr->x = b->x;
    this_ptr->y = b->y;
    this_ptr->z = b->z;
    if (this_ptr + 1 == b + 1) {
      return this_ptr;
    }
  }
  this_ptr[1].x = b[1].x;
  this_ptr[1].y = b[1].y;
  this_ptr[1].z = b[1].z;
  return this_ptr;
}
