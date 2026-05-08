// Name: core_dtri.cpp_copyVector3_FUN_0049b6a0
// Address: 0049b6a0
// MANUAL RECONSTRUCTION
// Address Range: [[0049b6a0, 0049b6bd]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_copyVector3_FUN_0049b6a0(CVector3f *dest_ptr,CVector3f *src_ptr)

#include "nocturne.h"

void __cdecl core_dtri_cpp_copyVector3_FUN_0049b6a0(CVector3f *dest_ptr,CVector3f *src_ptr)

{
  if (dest_ptr == src_ptr) {
    return;
  }
  *dest_ptr = *src_ptr;
  return;
}
