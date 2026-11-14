// Name: core_dimage.cpp_CDemonImage_dtor_FUN_00448f20
// Address: 00448f20
// Address Range: [[00448f20, 00448f31]]
// Convention: __cdecl
// Signature: CDemonImage * __cdecl core_dimage_cpp_CDemonImage_dtor_FUN_00448f20(CDemonImage *this_ptr,uint flags)

#include "nocturne.h"

CDemonImage * __cdecl core_dimage_cpp_CDemonImage_dtor_FUN_00448f20(CDemonImage *this_ptr,uint flags)

{
  core_dimage_cpp_CDemonImage_freeMemory_FUN_00448fa0(this_ptr);
  return this_ptr;
}
