// Name: engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40
// Address: 00456c40
// Address Range: [[00456c40, 00456cb9]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_CFileFinder_openSearch_FUN_00456c40(CFileFinder *this_ptr,char *search_pattern)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_CFileFinder_openSearch_FUN_00456c40(CFileFinder *this_ptr,char *search_pattern)

{
  HANDLE pvVar1;
  _WIN32_FIND_DATAA _Stack_144;
  
  engine_dosio_cpp_CFileFinder_closeSearch_FUN_00456d40(this_ptr);
  pvVar1 = FindFirstFileA(search_pattern,&_Stack_144);
  if (pvVar1 == (HANDLE)0xffffffff) {
    if (this_ptr->has_results == 0) {
      engine_dosio_cpp_CFileFinder_reset_FUN_00456d80(this_ptr);
      return this_ptr->has_results;
    }
  }
  else {
    this_ptr->search_handle = pvVar1;
    engine_dosio_cpp_CFileFinder_convertStruct_FUN_00456d90(this_ptr,&_Stack_144);
    this_ptr->has_results = 1;
  }
  return this_ptr->has_results;
}
