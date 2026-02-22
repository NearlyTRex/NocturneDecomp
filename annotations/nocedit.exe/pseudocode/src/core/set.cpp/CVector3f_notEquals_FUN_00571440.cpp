// Name: core_set.cpp_CVector3f_notEquals_FUN_00571440
// Address: 00571440
// Address Range: [[00571440, 0057146f]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CVector3f_notEquals_FUN_00571440(CVector3f *a,CVector3f *b)

#include "nocturne.h"

int __cdecl core_set_cpp_CVector3f_notEquals_FUN_00571440(CVector3f *a,CVector3f *b)

{
  if (((a->x == b->x) && (a->y == b->y)) && (a->z == b->z)) {
    return 0;
  }
  return 1;
}
