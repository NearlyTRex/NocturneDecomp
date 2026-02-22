// Name: core_set.cpp_CVector3f_equals_FUN_00571410
// Address: 00571410
// Address Range: [[00571410, 0057143f]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CVector3f_equals_FUN_00571410(CVector3f *a,CVector3f *b)

#include "nocturne.h"

int __cdecl core_set_cpp_CVector3f_equals_FUN_00571410(CVector3f *a,CVector3f *b)

{
  if (((a->x == b->x) && (a->y == b->y)) && (a->z == b->z)) {
    return 1;
  }
  return 0;
}
