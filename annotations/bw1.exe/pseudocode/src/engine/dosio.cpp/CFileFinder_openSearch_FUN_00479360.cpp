// Name: engine_dosio.cpp_CFileFinder_openSearch_FUN_00479360
// Address: 00479360
// Address Range: [[00479360, 004793d9]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_cpp_CFileFinder_openSearch_FUN_00479360(CFileFinder *this_ptr,char *search_pattern)

#include "nocturne.h"

int __cdecl engine_dosio_cpp_CFileFinder_openSearch_FUN_00479360(CFileFinder *this_ptr,char *search_pattern)

{
  HANDLE pvVar1;
  _WIN32_FIND_DATAA _Stack_144;
  
  engine_dosio_cpp_CFileFinder_closeSearch_FUN_00479460(this_ptr);
  pvVar1 = FindFirstFileA(search_pattern,&_Stack_144);
  if (pvVar1 == (HANDLE)0xffffffff) {
    if (this_ptr->has_results == 0) {
      engine_dosio_cpp_CFileFinder_reset_FUN_004794a0(this_ptr);
      return this_ptr->has_results;
    }
  }
  else {
    this_ptr->search_handle = pvVar1;
    engine_dosio_cpp_CFileFinder_convertStruct_FUN_004794b0(this_ptr,(byte *)&_Stack_144);
    this_ptr->has_results = 1;
  }
  return this_ptr->has_results;
}
