// Name: core_dfilter.cpp_FUN_00459e90
// Address: 00459e90
// Address Range: [[00459e90, 00459f20]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_FUN_00459e90(CFilterFX *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfilter_cpp_FUN_00459e90(CFilterFX *this_ptr)

{
  CDemonFilter *pCVar1;
  uint extraout_ECX;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  
  bVar5 = 0;
  pCVar1 = core_dfilter_cpp_CFilterCache_findFilter_FUN_00459850
                     (g_CFilterCachePtr,"movscrn.raw");
  if ((pCVar1 != (CDemonFilter *)0x0) && (*(int *)&this_ptr->field_0x4 != 0)) {
    *(float *)&this_ptr->field_0x8 =
         *(float *)&g_CGamePtr->field_0x314 * (float)_DAT_005baca2 + *(float *)&this_ptr->field_0x8;
    if ((float)*(int *)this_ptr <= *(float *)&this_ptr->field_0x8) {
      *(uint *)&this_ptr->field_0x8 = 0;
    }
    fVar6 = (float10)*(float *)&this_ptr->field_0x8;
    round();
    puVar3 = (uint *)(*(int *)&this_ptr->field_0x4 + (int)ROUND(fVar6) * 0x2000);
    puVar4 = (uint *)(*(int *)&pCVar1->field_0x48 + 0x1000);
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
