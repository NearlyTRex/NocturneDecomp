// Name: core_dfilter.cpp_CFilterFX_free_FUN_0045dd90
// Address: 0045dd90
// Address Range: [[0045dd90, 0045ddaf]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterFX_free_FUN_0045dd90(CFilterFX *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CFilterFX_free_FUN_0045dd90(CFilterFX *this_ptr)

{
  if (this_ptr->movie_data == (SMovieFrame *)0x0) {
    return;
  }
  FUN_005c09f0(this_ptr->movie_data);
  this_ptr->movie_data = (SMovieFrame *)0x0;
  return;
}
