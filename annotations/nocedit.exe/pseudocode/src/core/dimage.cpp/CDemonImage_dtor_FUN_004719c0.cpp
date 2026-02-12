// Name: core_dimage.cpp_CDemonImage_dtor_FUN_004719c0
// Address: 004719c0
// Address Range: [[004719c0, 004719d1]]
// Convention: __cdecl
// Signature: CDemonImage * __cdecl core_dimage_cpp_CDemonImage_dtor_FUN_004719c0(CDemonImage *this_ptr,uint flags)

#include "nocturne.h"

CDemonImage * __cdecl
core_dimage_cpp_CDemonImage_dtor_FUN_004719c0(CDemonImage *this_ptr,uint flags)

{
  core_dimage_cpp_CDemonImage_freeMemory_FUN_00471a40(this_ptr);
  return this_ptr;
}
