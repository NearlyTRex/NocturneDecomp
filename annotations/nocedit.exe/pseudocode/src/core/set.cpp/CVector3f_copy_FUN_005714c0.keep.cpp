// Name: core_set.cpp_CVector3f_copy_FUN_005714c0
// Address: 005714c0
// MANUAL RECONSTRUCTION
// Address Range: [[005714c0, 00571504]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_set_cpp_CVector3f_copy_FUN_005714c0(CVector3f *this_ptr,CVector3f *b)

#include "nocturne.h"

CVector3f * __cdecl core_set_cpp_CVector3f_copy_FUN_005714c0(CVector3f *this_ptr,CVector3f *b)

{
  if (this_ptr == b) {
    if (this_ptr + 1 == b + 1) {
      return this_ptr;
    }
  }
  else {
    *this_ptr = *b;
    if (this_ptr + 1 == b + 1) {
      return this_ptr;
    }
  }
  this_ptr[1] = b[1];
  return this_ptr;
}
