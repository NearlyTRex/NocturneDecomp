// Name: core_dfilter.cpp_CFilterFX_free_FUN_00459ce0
// Address: 00459ce0
// Address Range: [[00459ce0, 00459cff]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterFX_free_FUN_00459ce0(CFilterFX *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CFilterFX_free_FUN_00459ce0(CFilterFX *this_ptr)

{
  if (this_ptr->movie_data == (SMovieFrame *)0x0) {
    return;
  }
  FUN_005a3770(this_ptr->movie_data);
  this_ptr->movie_data = (SMovieFrame *)0x0;
  return;
}
