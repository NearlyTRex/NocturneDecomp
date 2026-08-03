// Name: core_dfilter.cpp_CFilterFX_process_FUN_004708e0
// Address: 004708e0
// MANUAL RECONSTRUCTION
// Address Range: [[004708e0, 00470970]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterFX_process_FUN_004708e0(CFilterFX *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CFilterFX_process_FUN_004708e0(CFilterFX *this_ptr)

{
  CDemonFilter *pCVar1;

  pCVar1 = core_dfilter_cpp_CFilterCache_findFilter_FUN_004701a0
                     (g_CFilterCachePtr,"movscrn.raw");
  if ((pCVar1 != (CDemonFilter *)0x0) && (this_ptr->movie_data != (SMovieFrame *)0x0)) {
    this_ptr->current_frame =
         g_CGamePtr->delta_time_float * (float)30 + this_ptr->current_frame;
    if ((float)this_ptr->frame_count <= this_ptr->current_frame) {
      this_ptr->current_frame = 0.0;
    }
    memcpy((char *)pCVar1->data_buffer + 0x1000,
           &this_ptr->movie_data[(int)ROUND(ROUND(this_ptr->current_frame))],
           sizeof(SMovieFrame));
  }
  return;
}
