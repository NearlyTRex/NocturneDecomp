// Name: core_dimage.cpp_CDemonImage_dtor_FUN_0045b1f0
// Address: 0045b1f0
// Address Range: [[0045b1f0, 0045b201]]
// Convention: __cdecl
// Signature: CDemonImage * __cdecl core_dimage_cpp_CDemonImage_dtor_FUN_0045b1f0(CDemonImage *this_ptr,uint flags)

#include "nocturne.h"

CDemonImage * __cdecl core_dimage_cpp_CDemonImage_dtor_FUN_0045b1f0(CDemonImage *this_ptr,uint flags)

{
  core_dimage_cpp_CDemonImage_freeMemory_FUN_0045b270(this_ptr);
  return this_ptr;
}
