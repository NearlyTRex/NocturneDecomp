// Name: core_dfilter.cpp_CFilterFX_process_FUN_0044c4a0
// Address: 0044c4a0
// Address Range: [[0044c4a0, 0044c530]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterFX_process_FUN_0044c4a0(CFilterFx *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CFilterFX_process_FUN_0044c4a0(CFilterFx *this_ptr)

{
  CDemonFilter *pCVar1;
  int iVar2;
  SMovieFrame *pSVar3;
  uchar *puVar4;
  byte bVar5;
  double dVar6;
  
  bVar5 = 0;
  pCVar1 = core_dfilter_cpp_CFilterCache_findFilter_FUN_0044be60
                     (0x014B8DE8,"movscrn.raw");
  if ((pCVar1 != (CDemonFilter *)0x0) && (this_ptr->movie_data != (SMovieFrame *)0x0)) {
    this_ptr->current_frame =
         *(float *)(0x01C775EC + 0x264) * (float)30 + this_ptr->current_frame;
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
