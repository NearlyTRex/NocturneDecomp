// Name: core_dfilter.cpp_CFilterFX_process_FUN_004708e0
// Address: 004708e0
// Address Range: [[004708e0, 00470970]]
// Convention: __cdecl
// Signature: void core_dfilter.cpp_CFilterFX_process_FUN_004708e0(CFilterFx * this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CFilterFX_process_FUN_004708e0(CFilterFx *this_ptr)

{
  CDemonFilter *pCVar1;
  uint extraout_ECX;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  double dVar6;
  
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
    dVar6 = crt_math_c_round_FUN_005fe6b0((double)(float)this_ptr->current_frame);
    puVar3 = (uint *)((int)this_ptr->movie_data + (int)ROUND(dVar6) * 0x2000);
    puVar4 = (uint *)((int)pCVar1->data_buffer + 0x1000);
    for (uVar2 = extraout_ECX >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    for (uVar2 = extraout_ECX & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(byte *)puVar4 = *(byte *)puVar3;
      puVar3 = (uint *)((int)puVar3 + (uint)bVar5 * -2 + 1);
      puVar4 = (uint *)((int)puVar4 + (uint)bVar5 * -2 + 1);
    }
  }
  return;
}
