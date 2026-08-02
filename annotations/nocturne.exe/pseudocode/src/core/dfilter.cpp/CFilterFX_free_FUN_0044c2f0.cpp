// Name: core_dfilter.cpp_CFilterFX_free_FUN_0044c2f0
// Address: 0044c2f0
// Address Range: [[0044c2f0, 0044c30f]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterFX_free_FUN_0044c2f0(CFilterFX *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CFilterFX_free_FUN_0044c2f0(CFilterFX *this_ptr)

{
  if (this_ptr->movie_data == (SMovieFrame *)0x0) {
    return;
  }
  FUN_005638d0(this_ptr->movie_data);
  this_ptr->movie_data = (SMovieFrame *)0x0;
  return;
}
