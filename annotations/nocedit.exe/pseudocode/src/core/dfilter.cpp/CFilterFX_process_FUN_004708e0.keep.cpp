// Name: core_dfilter.cpp_CFilterFX_process_FUN_004708e0
// Address: 004708e0
// MANUAL RECONSTRUCTION
// Address Range: [[004708e0, 00470970]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterFX_process_FUN_004708e0(CFilterFx *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dfilter_cpp_CFilterFX_process_FUN_004708e0(CFilterFx *this_ptr)

{
  CDemonFilter *pCVar1;
  byte bVar5;
  
  bVar5 = 0;
  pCVar1 = core_dfilter_cpp_CFilterCache_findFilter_FUN_004701a0
                     (g_CFilterCachePtr,"movscrn.raw");
  if ((pCVar1 != (CDemonFilter *)0x0) && (this_ptr->movie_data != (void *)0x0)) {
    this_ptr->current_frame =
         (int)(g_CGamePtr->delta_time_float * (float)30 +
              (float)this_ptr->current_frame);
    if ((float)this_ptr->frame_count <= (float)this_ptr->current_frame) {
      this_ptr->current_frame = 0;
    }
    memcpy((char *)pCVar1->data_buffer + 0x1000,
           (char *)this_ptr->movie_data + (int)ROUND(ROUND((float)this_ptr->current_frame)) * 0x2000,
           0x2000);
  }
  return;
}
