// Name: core_set.cpp_CVector3f_copy_FUN_005714c0
// Address: 005714c0
// Address Range: [[005714c0, 00571504]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_set_cpp_CVector3f_copy_FUN_005714c0(CVector3f *a,CVector3f *b)

#include "nocturne.h"

CVector3f * __cdecl core_set_cpp_CVector3f_copy_FUN_005714c0(CVector3f *a,CVector3f *b)

{
  if (a == b) {
    if (a + 1 == b + 1) {
      return a;
    }
  }
  else {
    a->x = b->x;
    a->y = b->y;
    a->z = b->z;
    if (a + 1 == b + 1) {
      return a;
    }
  }
  a[1].x = b[1].x;
  a[1].y = b[1].y;
  a[1].z = b[1].z;
  return a;
}
