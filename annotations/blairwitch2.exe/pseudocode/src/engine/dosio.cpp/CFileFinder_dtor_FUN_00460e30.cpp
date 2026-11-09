// Name: engine_dosio.cpp_CFileFinder_dtor_FUN_00460e30
// Address: 00460e30
// Address Range: [[00460e30, 00460e41]]
// Convention: __cdecl
// Signature: CFileFinder * __cdecl engine_dosio_cpp_CFileFinder_dtor_FUN_00460e30(CFileFinder *this_ptr,uint flags)

#include "nocturne.h"

CFileFinder * __cdecl engine_dosio_cpp_CFileFinder_dtor_FUN_00460e30(CFileFinder *this_ptr,uint flags)

{
  engine_dosio_cpp_CFileFinder_closeSearch_FUN_00460f50(this_ptr);
  return this_ptr;
}
