// Name: core_dfilter.cpp_CFilterFX_free_FUN_00447c30
// Address: 00447c30
// Address Range: [[00447c30, 00447c4f]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterFX_free_FUN_00447c30(CFilterFX *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CFilterFX_free_FUN_00447c30(CFilterFX *this_ptr)

{
  if (this_ptr->movie_data == (SMovieFrame *)0x0) {
    return;
  }
  FUN_005b86a0(this_ptr->movie_data);
  this_ptr->movie_data = (SMovieFrame *)0x0;
  return;
}
