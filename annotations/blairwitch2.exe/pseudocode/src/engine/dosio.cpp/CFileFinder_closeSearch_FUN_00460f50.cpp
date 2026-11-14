// Name: engine_dosio.cpp_CFileFinder_closeSearch_FUN_00460f50
// Address: 00460f50
// Address Range: [[00460f50, 00460f8b]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_CFileFinder_closeSearch_FUN_00460f50(CFileFinder *this_ptr)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_CFileFinder_closeSearch_FUN_00460f50(CFileFinder *this_ptr)

{
  if (this_ptr->has_results == 0) {
    engine_dosio_cpp_CFileFinder_reset_FUN_00460f90(this_ptr);
    return;
  }
  FindClose(this_ptr->search_handle);
  this_ptr->has_results = 0;
  engine_dosio_cpp_CFileFinder_reset_FUN_00460f90(this_ptr);
  return;
}
