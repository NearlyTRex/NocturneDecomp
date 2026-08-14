// Name: core_set.cpp_CVector3f_notEquals_FUN_00571440
// Address: 00571440
// Address Range: [[00571440, 0057146f]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CVector3f_notEquals_FUN_00571440(CVector3f *this_ptr,CVector3f *b)

#include "nocturne.h"

int __cdecl core_set_cpp_CVector3f_notEquals_FUN_00571440(CVector3f *this_ptr,CVector3f *b)

{
  if (((this_ptr->x == b->x) && (this_ptr->y == b->y)) && (this_ptr->z == b->z)) {
    return 0;
  }
  return 1;
}
