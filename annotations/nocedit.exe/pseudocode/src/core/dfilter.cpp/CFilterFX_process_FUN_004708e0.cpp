// Name: core_dfilter.cpp_CFilterFX_process_FUN_004708e0
// Address: 004708e0
// Address Range: [[004708e0, 00470970]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterFX_process_FUN_004708e0(CFilterFX *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dfilter_cpp_CFilterFX_process_FUN_004708e0(CFilterFX *this_ptr)

{
  CDemonFilter *pCVar1;
  int iVar2;
  int iVar1;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  pCVar1 = core_dfilter_cpp_CFilterCache_findFilter_FUN_004701a0
                     (g_CFilterCachePtr,"movscrn.raw");
  if ((pCVar1 != (CDemonFilter *)0x0) && (this_ptr->movie_data != (SMovieFrame *)0x0)) {
    this_ptr->current_frame =
         g_CGamePtr->delta_time_float * (float)30 + this_ptr->current_frame;
    if ((float)this_ptr->frame_count <= this_ptr->current_frame) {
      this_ptr->current_frame = 0.0;
    }
    puVar3 = (uint *)(this_ptr->movie_data + (int)ROUND(ROUND(this_ptr->current_frame)));
    puVar4 = (uint *)(pCVar1->data_buffer + 0x1000);
    for (iVar2 = 0x800; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *(uint *)((SMovieFrame *)puVar3)->pixels;
      puVar3 = (uint *)((int)puVar3 + (uint)bVar5 * -8 + 4);
      puVar4 = (uint *)((int)puVar4 + (uint)bVar5 * -8 + 4);
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      puVar4 = (uint *)((int)puVar4 + (uint)bVar5 * -2 + 1);
      puVar3 = (uint *)((int)puVar3 + (uint)bVar5 * -2 + 1);
      *(byte *)puVar4 = *(byte *)puVar3;
      puVar3 = puVar3;
      puVar4 = puVar4;
    }
  }
  return;
}
