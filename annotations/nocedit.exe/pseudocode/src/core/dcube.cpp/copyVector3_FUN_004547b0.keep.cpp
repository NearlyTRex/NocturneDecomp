// Name: core_dcube.cpp_copyVector3_FUN_004547b0
// Address: 004547b0
// MANUAL RECONSTRUCTION
// Address Range: [[004547b0, 004547cd]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_copyVector3_FUN_004547b0(CVector3f *dest,CVector3f *src)

#include "nocturne.h"

void __cdecl core_dcube_cpp_copyVector3_FUN_004547b0(CVector3f *dest,CVector3f *src)

{
  if (dest == src) {
    return;
  }
  *dest = *src;
  return;
}
