// Name: core_dtri.cpp_copyVector3_FUN_0046d4c0
// Address: 0046d4c0
// Address Range: [[0046d4c0, 0046d4dd]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_copyVector3_FUN_0046d4c0(CVector3f *dest_ptr,CVector3f *src_ptr)

#include "nocturne.h"

void __cdecl core_dtri_cpp_copyVector3_FUN_0046d4c0(CVector3f *dest_ptr,CVector3f *src_ptr)

{
  if (dest_ptr == src_ptr) {
    return;
  }
  dest_ptr->x = src_ptr->x;
  dest_ptr->y = src_ptr->y;
  dest_ptr->z = src_ptr->z;
  return;
}
