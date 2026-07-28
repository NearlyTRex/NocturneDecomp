// Name: engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00
// Address: 00456c00
// Address Range: [[00456c00, 00456c1b]]
// Convention: __cdecl
// Signature: CFileFinder * __cdecl engine_dosio_cpp_CFileFinder_ctor_FUN_00456c00(CFileFinder *this_ptr)

#include "nocturne.h"

CFileFinder * __cdecl engine_dosio_cpp_CFileFinder_ctor_FUN_00456c00(CFileFinder *this_ptr)

{
  this_ptr->has_results = 0;
  engine_dosio_cpp_CFileFinder_reset_FUN_00456d80(this_ptr);
  return this_ptr;
}
