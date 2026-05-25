// Name: core_dfilter.cpp_CFilterFX_ctor_FUN_004706c0
// Address: 004706c0
// Address Range: [[004706c0, 004706d8]]
// Convention: __cdecl
// Signature: CFilterFx * __cdecl core_dfilter_cpp_CFilterFX_ctor_FUN_004706c0(CFilterFx *this_ptr)

#include "nocturne.h"

CFilterFx * __cdecl core_dfilter_cpp_CFilterFX_ctor_FUN_004706c0(CFilterFx *this_ptr)

{
  this_ptr->frame_count = 0;
  this_ptr->current_frame = 0.0;
  this_ptr->movie_data = (SMovieFrame *)0x0;
  return this_ptr;
}
