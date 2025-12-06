// Name: core_dtri.cpp_copyVector3_FUN_0049b6a0
// Address: 0049b6a0
// Address Range: [[0049b6a0, 0049b6bd]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_copyVector3_FUN_0049b6a0(CVector3f * dest_ptr, CVector3f * src_ptr)

#include "nocturne.h"

void __cdecl core_dtri_cpp_copyVector3_FUN_0049b6a0(CVector3f *dest_ptr,CVector3f *src_ptr)

{
  if (dest_ptr == src_ptr) {
    return;
  }
  dest_ptr->x = src_ptr->x;
  dest_ptr->y = src_ptr->y;
  dest_ptr->z = src_ptr->z;
  return;
}
