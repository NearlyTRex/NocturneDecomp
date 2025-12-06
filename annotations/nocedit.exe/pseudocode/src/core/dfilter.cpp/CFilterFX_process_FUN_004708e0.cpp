// Name: core_dfilter.cpp_CFilterFX_process_FUN_004708e0
// Address: 004708e0
// Address Range: [[004708e0, 00470970]]
// Convention: __cdecl
// Signature: void core_dfilter.cpp_CFilterFX_process_FUN_004708e0(CFilterFx * this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CFilterFX_process_FUN_004708e0(CFilterFx *this_ptr)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  CDemonFilter *pCVar4;
  uint extraout_ECX;
  uint uVar5;
  uint extraout_EDX;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
  
  bVar8 = 0;
  pCVar4 = core_dfilter_cpp_CFilterCache_findFilter_FUN_004701a0
                     (g_CFilterCachePtr,"movscrn.raw");
  if ((pCVar4 != (CDemonFilter *)0x0) && (this_ptr->movie_data != (void *)0x0)) {
    piVar1 = &this_ptr->current_frame;
    *piVar1 = (int)(g_CGamePtr->delta_time_float * (float)30 +
                   (float)*piVar1);
    fVar3 = (float)this_ptr->frame_count;
    fVar2 = (float)this_ptr->current_frame;
    if (fVar3 < fVar2 || (fVar3 == fVar2) != 0) {
      this_ptr->current_frame = 0;
    }
    fVar9 = (float10)(float)this_ptr->current_frame;
    crt_math_c_round_FUN_005fe6b0
              ((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,
                                CONCAT22 /* combine 2-byte values */((short)((uint)piVar1 >> 0x10),
                                         (ushort)(fVar3 < fVar2) << 8 |
                                         (ushort)(NAN(fVar3) || NAN(fVar2)) << 10 |
                                         (ushort)(fVar3 == fVar2) << 0xe)));
    puVar6 = (uint *)((int)this_ptr->movie_data + (int)ROUND(fVar9) * 0x2000);
    puVar7 = (uint *)((int)pCVar4->data_buffer + 0x1000);
    for (uVar5 = extraout_ECX >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    for (uVar5 = extraout_ECX & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(byte *)puVar7 = *(byte *)puVar6;
      puVar6 = (uint *)((int)puVar6 + (uint)bVar8 * -2 + 1);
      puVar7 = (uint *)((int)puVar7 + (uint)bVar8 * -2 + 1);
    }
  }
  return;
}
