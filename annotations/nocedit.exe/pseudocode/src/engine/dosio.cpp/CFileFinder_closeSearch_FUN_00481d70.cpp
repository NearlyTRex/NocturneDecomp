// Name: engine_dosio.cpp_CFileFinder_closeSearch_FUN_00481d70
// Address: 00481d70
// Address Range: [[00481d70, 00481dab]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_CFileFinder_closeSearch_FUN_00481d70(CFileFinder *this_ptr)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_CFileFinder_closeSearch_FUN_00481d70(CFileFinder *this_ptr)

{
  if (this_ptr->has_results == 0) {
    engine_dosio_cpp_CFileFinder_reset_FUN_00481db0(this_ptr);
    return;
  }
  (*g_FindCloseFunc)(this_ptr->search_handle);
  this_ptr->has_results = 0;
  engine_dosio_cpp_CFileFinder_reset_FUN_00481db0(this_ptr);
  return;
}
