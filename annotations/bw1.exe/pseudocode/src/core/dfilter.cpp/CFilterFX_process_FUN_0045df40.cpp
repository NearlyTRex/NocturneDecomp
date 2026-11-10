// Name: core_dfilter.cpp_CFilterFX_process_FUN_0045df40
// Address: 0045df40
// Address Range: [[0045df40, 0045dfd0]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterFX_process_FUN_0045df40(CFilterFX *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfilter_cpp_CFilterFX_process_FUN_0045df40(CFilterFX *this_ptr)

{
  CDemonFilter *pCVar1;
  uint extraout_ECX;
  uint uVar2;
  SMovieFrame *pSVar3;
  SMovieFrame *pSVar4;
  byte bVar5;
  float10 fVar6;
  
  bVar5 = 0;
  pCVar1 = core_dfilter_cpp_CFilterCache_findFilter_FUN_0045d900
                     (g_CFilterCachePtr,"movscrn.raw");
  if ((pCVar1 != (CDemonFilter *)0x0) && (this_ptr->movie_data != (SMovieFrame *)0x0)) {
    this_ptr->current_frame =
         g_CGamePtr->delta_time_float * (float)_DAT_005d8649 + this_ptr->current_frame;
    if ((float)this_ptr->frame_count <= this_ptr->current_frame) {
      this_ptr->current_frame = 0.0;
    }
    fVar6 = (float10)this_ptr->current_frame;
    round();
    pSVar3 = this_ptr->movie_data + (int)ROUND(fVar6) * 0x2000;
    pSVar4 = (SMovieFrame *)(pCVar1->data_buffer + 0x1000);
    for (uVar2 = extraout_ECX >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(uint *)pSVar4 = *(uint *)pSVar3;
      pSVar3 = pSVar3 + (uint)bVar5 * -8 + 4;
      pSVar4 = pSVar4 + (uint)bVar5 * -8 + 4;
    }
    for (uVar2 = extraout_ECX & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pSVar4 = *pSVar3;
      pSVar3 = pSVar3 + (uint)bVar5 * -2 + 1;
      pSVar4 = pSVar4 + (uint)bVar5 * -2 + 1;
    }
  }
  return;
}
