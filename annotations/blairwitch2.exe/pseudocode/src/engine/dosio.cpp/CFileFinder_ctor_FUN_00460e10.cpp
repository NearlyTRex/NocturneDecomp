// Name: engine_dosio.cpp_CFileFinder_ctor_FUN_00460e10
// Address: 00460e10
// Address Range: [[00460e10, 00460e2b]]
// Convention: __cdecl
// Signature: CFileFinder * __cdecl engine_dosio_cpp_CFileFinder_ctor_FUN_00460e10(CFileFinder *this_ptr)

#include "nocturne.h"

CFileFinder * __cdecl engine_dosio_cpp_CFileFinder_ctor_FUN_00460e10(CFileFinder *this_ptr)

{
  *(uint *)&this_ptr->field_0x10c = 0;
  engine_dosio_cpp_CFileFinder_reset_FUN_00460f90(this_ptr);
  return this_ptr;
}
