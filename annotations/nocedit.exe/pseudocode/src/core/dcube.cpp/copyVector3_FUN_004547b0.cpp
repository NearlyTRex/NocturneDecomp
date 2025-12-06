// Name: core_dcube.cpp_copyVector3_FUN_004547b0
// Address: 004547b0
// Address Range: [[004547b0, 004547cd]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_copyVector3_FUN_004547b0(CVector3f * dest, CVector3f * src)

#include "nocturne.h"

void __cdecl core_dcube_cpp_copyVector3_FUN_004547b0(CVector3f *dest,CVector3f *src)

{
  if (dest == src) {
    return;
  }
  dest->x = src->x;
  dest->y = src->y;
  dest->z = src->z;
  return;
}
