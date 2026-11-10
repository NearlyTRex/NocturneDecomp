// Name: core_hero.cpp_closestHeroToPoint_FUN_004ce050
// Address: 004ce050
// Address Range: [[004ce050, 004ce0fe]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_closestHeroToPoint_FUN_004ce050(CLocation *location)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CHero * __cdecl core_hero_cpp_closestHeroToPoint_FUN_004ce050(CLocation *location)

{
  CHero *pCVar1;
  float fVar2;
  int iVar3;
  CHero *pCVar4;
  float local_1c;
  
  pCVar4 = (CHero *)0x0;
  local_1c = 1e+30;
  if (0 < _DAT_01cedee0) {
    iVar3 = 0;
    do {
      pCVar1 = *(CHero **)(iVar3 + 0x1cedee4);
      if ((pCVar1 != (CHero *)0x0) &&
         (fVar2 = (*(float *)(pCVar1 + 0x28) - *(float *)(location + 8)) *
                  (*(float *)(pCVar1 + 0x28) - *(float *)(location + 8)) +
                  (*(float *)(pCVar1 + 0x24) - *(float *)(location + 4)) *
                  (*(float *)(pCVar1 + 0x24) - *(float *)(location + 4)) +
                  (*(float *)(pCVar1 + 0x20) - *(float *)location) *
                  (*(float *)(pCVar1 + 0x20) - *(float *)location), fVar2 < local_1c)) {
        pCVar4 = pCVar1;
        local_1c = fVar2;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < _DAT_01cedee0 * 4);
  }
  if (pCVar4 != (CHero *)0x0) {
    return pCVar4;
  }
  _DAT_01d046a0 = "..\\core\\hero.cpp";
  _DAT_01d046a4 = 0x3a;
  core_main_c_FUN_004e4500("closestHeroToPoint - no heros!");
  return (CHero *)0x0;
}
