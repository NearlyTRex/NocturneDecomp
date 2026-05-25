// Name: core_dfilter.cpp_CFilterFX_free_FUN_00470700
// Address: 00470700
// Address Range: [[00470700, 00470729]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterFX_free_FUN_00470700(CFilterFx *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CFilterFX_free_FUN_00470700(CFilterFx *this_ptr)

{
  if (this_ptr->movie_data == (uchar *)0x0) {
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->movie_data,"..\\core\\dfilter.cpp",0x13f);
  this_ptr->movie_data = (uchar *)0x0;
  return;
}
