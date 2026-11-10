// Name: core_hero.cpp_closestHeroToPoint_FUN_004ea640
// Address: 004ea640
// Address Range: [[004ea640, 004ea6ee]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_closestHeroToPoint_FUN_004ea640(CLocation *location)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CHero * __cdecl core_hero_cpp_closestHeroToPoint_FUN_004ea640(CLocation *location)

{
  CHero *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CHero *pCVar6;
  float local_1c;
  
  pCVar6 = (CHero *)0x0;
  local_1c = 1e+30;
  if (0 < _DAT_01d06aa0) {
    iVar5 = 0;
    do {
      pCVar1 = *(CHero **)(iVar5 + 0x1d06aa4);
      if ((pCVar1 != (CHero *)0x0) &&
         (fVar2 = *(float *)(pCVar1 + 0x20) - (location->position).x,
         fVar4 = *(float *)(pCVar1 + 0x24) - (location->position).y,
         fVar3 = *(float *)(pCVar1 + 0x28) - (location->position).z,
         fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2, fVar2 < local_1c)) {
        pCVar6 = pCVar1;
        local_1c = fVar2;
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < _DAT_01d06aa0 * 4);
  }
  if (pCVar6 != (CHero *)0x0) {
    return pCVar6;
  }
  _DAT_01d1d400 = "..\\core\\hero.cpp";
  _DAT_01d1d404 = 0x38;
  core_main_c_FUN_005030e0("closestHeroToPoint - no heros!");
  return (CHero *)0x0;
}
