// Name: core_dfilter.cpp_CFilterFX_process_FUN_00447de0
// Address: 00447de0
// Address Range: [[00447de0, 00447e70]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterFX_process_FUN_00447de0(CFilterFX *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfilter_cpp_CFilterFX_process_FUN_00447de0(CFilterFX *this_ptr)

{
  CDemonFilter *pCVar1;
  int iVar2;
  SMovieFrame *pSVar3;
  uchar *puVar4;
  byte bVar5;
  double dVar6;
  
  bVar5 = 0;
  pCVar1 = core_dfilter_cpp_CFilterCache_findFilter_FUN_004477a0
                     (g_CFilterCachePtr,"movscrn.raw");
  if ((pCVar1 != (CDemonFilter *)0x0) && (this_ptr->movie_data != (SMovieFrame *)0x0)) {
    this_ptr->current_frame =
         g_CGamePtr->delta_time_float * (float)_DAT_005ced50 + this_ptr->current_frame;
    if ((float)this_ptr->frame_count <= this_ptr->current_frame) {
      this_ptr->current_frame = 0.0;
    }
    dVar6 = round((double)this_ptr->current_frame);
    pSVar3 = this_ptr->movie_data + (int)ROUND(dVar6);
    puVar4 = pCVar1->data_buffer + 0x1000;
    for (iVar2 = 0x800; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)puVar4 = *(uint *)pSVar3->pixels;
      pSVar3 = (SMovieFrame *)((int)pSVar3 + (uint)bVar5 * -8 + 4);
      puVar4 = puVar4 + (uint)bVar5 * -8 + 4;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = pSVar3->pixels[0];
      pSVar3 = (SMovieFrame *)((int)pSVar3 + (uint)bVar5 * -2 + 1);
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
  }
  return;
}
