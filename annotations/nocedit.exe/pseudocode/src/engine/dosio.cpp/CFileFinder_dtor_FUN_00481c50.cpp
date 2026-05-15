// Name: engine_dosio.cpp_CFileFinder_dtor_FUN_00481c50
// Address: 00481c50
// Address Range: [[00481c50, 00481c61]]
// Convention: __cdecl
// Signature: CFileFinder * __cdecl engine_dosio_cpp_CFileFinder_dtor_FUN_00481c50(CFileFinder *this_ptr,uint flags)

#include "nocturne.h"

CFileFinder * __cdecl engine_dosio_cpp_CFileFinder_dtor_FUN_00481c50(CFileFinder *this_ptr,uint flags)

{
  engine_dosio_cpp_CFileFinder_closeSearch_FUN_00481d70(this_ptr);
  return this_ptr;
}
