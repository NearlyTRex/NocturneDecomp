// Name: core_dcube.cpp_copyVector3_FUN_004484a0
// Address: 004484a0
// Address Range: [[004484a0, 004484bd]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_copyVector3_FUN_004484a0(CVector3f *dest,CVector3f *src)

#include "nocturne.h"

void __cdecl core_dcube_cpp_copyVector3_FUN_004484a0(CVector3f *dest,CVector3f *src)

{
  if (dest == src) {
    return;
  }
  dest->x = src->x;
  dest->y = src->y;
  dest->z = src->z;
  return;
}
