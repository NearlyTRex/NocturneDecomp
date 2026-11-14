// Name: core_dimage.cpp_CDemonImage_dtor_FUN_0045f080
// Address: 0045f080
// Address Range: [[0045f080, 0045f091]]
// Convention: __cdecl
// Signature: CDemonImage * __cdecl core_dimage_cpp_CDemonImage_dtor_FUN_0045f080(CDemonImage *this_ptr,uint flags)

#include "nocturne.h"

CDemonImage * __cdecl core_dimage_cpp_CDemonImage_dtor_FUN_0045f080(CDemonImage *this_ptr,uint flags)

{
  core_dimage_cpp_CDemonImage_freeMemory_FUN_0045f100(this_ptr);
  return this_ptr;
}
