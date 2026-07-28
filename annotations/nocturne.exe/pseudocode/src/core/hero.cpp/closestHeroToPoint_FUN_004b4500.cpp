// Name: core_hero.cpp_closestHeroToPoint_FUN_004b4500
// Address: 004b4500
// Address Range: [[004b4500, 004b45ae]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_closestHeroToPoint_FUN_004b4500(CLocation *location)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CHero * __cdecl core_hero_cpp_closestHeroToPoint_FUN_004b4500(CLocation *location)

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
  if (0 < _DAT_01cae0d4) {
    iVar5 = 0;
    do {
      pCVar1 = *(CHero **)(iVar5 + 0x1cae0d8);
      if ((pCVar1 != (CHero *)0x0) &&
         (fVar2 = (pCVar1->base).base.location.position.x - (location->position).x,
         fVar4 = (pCVar1->base).base.location.position.y - (location->position).y,
         fVar3 = (pCVar1->base).base.location.position.z - (location->position).z,
         fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2, fVar2 < local_1c)) {
        pCVar6 = pCVar1;
        local_1c = fVar2;
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < _DAT_01cae0d4 * 4);
  }
  if (pCVar6 != (CHero *)0x0) {
    return pCVar6;
  }
  PTR_01cc4800 = "..\\core\\hero.cpp";
  INT_01cc4804 = 0x34;
  core_main_c_FUN_004c8440("closestHeroToPoint - no heros!");
  return (CHero *)0x0;
}
