// Name: core_dfilter.cpp_CFilterFX_ctor_FUN_004706c0
// Address: 004706c0
// Address Range: [[004706c0, 004706d8]]
// Convention: __cdecl
// Signature: CFilterFx * core_dfilter.cpp_CFilterFX_ctor_FUN_004706c0(CFilterFx * this_ptr)
// Cross-references:
//   core_dfilter.cpp_staticInit_FUN_0046ff50 (0046ff50) at 0046ffb1 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CFilterFx * __cdecl core_dfilter_cpp_CFilterFX_ctor_FUN_004706c0(CFilterFx *this_ptr)

{
  this_ptr->frame_count = 0;
  this_ptr->current_frame = 0;
  this_ptr->movie_data = (void *)0x0;
  return this_ptr;
}


// Assembly code:
// 004706c0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dfilter.cpp_CFilterFX_ctor_FUN_004706c0
//   XREF to: Stack[0x4] (READ)
// 004706c4: MOV dword ptr [EAX],0x0
// 004706ca: MOV dword ptr [EAX + 0x8],0x0
// 004706d1: MOV dword ptr [EAX + 0x4],0x0
// 004706d8: RET
