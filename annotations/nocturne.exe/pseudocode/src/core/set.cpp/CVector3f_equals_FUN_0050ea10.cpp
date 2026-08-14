// Name: core_set.cpp_CVector3f_equals_FUN_0050ea10
// Address: 0050ea10
// Address Range: [[0050ea10, 0050ea3f]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CVector3f_equals_FUN_0050ea10(CVector3f *this_ptr,CVector3f *b)

#include "nocturne.h"

int __cdecl core_set_cpp_CVector3f_equals_FUN_0050ea10(CVector3f *this_ptr,CVector3f *b)

{
  if (((this_ptr->x == b->x) && (this_ptr->y == b->y)) && (this_ptr->z == b->z)) {
    return 1;
  }
  return 0;
}
