// Name: engine_dosio.cpp_CFileFinder_closeSearch_FUN_00479460
// Address: 00479460
// Address Range: [[00479460, 0047949b]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_CFileFinder_closeSearch_FUN_00479460(CFileFinder *this_ptr)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_CFileFinder_closeSearch_FUN_00479460(CFileFinder *this_ptr)

{
  if (this_ptr->has_results == 0) {
    engine_dosio_cpp_CFileFinder_reset_FUN_004794a0(this_ptr);
    return;
  }
  FindClose(this_ptr->search_handle);
  this_ptr->has_results = 0;
  engine_dosio_cpp_CFileFinder_reset_FUN_004794a0(this_ptr);
  return;
}
