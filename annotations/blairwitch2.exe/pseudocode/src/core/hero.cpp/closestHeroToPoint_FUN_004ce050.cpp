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
  float fVar3;
  float fVar4;
  int iVar5;
  CHero *pCVar6;
  float local_1c;
  
  pCVar6 = (CHero *)0x0;
  local_1c = 1e+30;
  if (0 < _DAT_01cedee0) {
    iVar5 = 0;
    do {
      pCVar1 = *(CHero **)(iVar5 + 0x1cedee4);
      if ((pCVar1 != (CHero *)0x0) &&
         (fVar2 = (pCVar1->base).base.location.position.x - (location->position).x,
         fVar4 = (pCVar1->base).base.location.position.y - (location->position).y,
         fVar3 = (pCVar1->base).base.location.position.z - (location->position).z,
         fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2, fVar2 < local_1c)) {
        pCVar6 = pCVar1;
        local_1c = fVar2;
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < _DAT_01cedee0 * 4);
  }
  if (pCVar6 != (CHero *)0x0) {
    return pCVar6;
  }
  _DAT_01d046a0 = "..\\core\\hero.cpp";
  _DAT_01d046a4 = 0x3a;
  core_main_c_FUN_004e4500("closestHeroToPoint - no heros!");
  return (CHero *)0x0;
}
