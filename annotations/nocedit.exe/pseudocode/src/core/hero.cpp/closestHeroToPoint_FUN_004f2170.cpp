// Name: core_hero.cpp_closestHeroToPoint_FUN_004f2170
// Address: 004f2170
// Address Range: [[004f2170, 004f221e]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_closestHeroToPoint_FUN_004f2170(CLocation *location)

#include "nocturne.h"

CHero * __cdecl core_hero_cpp_closestHeroToPoint_FUN_004f2170(CLocation *location)

{
  CHero *pCVar1;
  float fVar5;
  int iVar5;
  CHero *iVar6;
  float local_1c;
  float fVar4;
  float fVar3;
  float fVar2;
  
  iVar6 = (CHero *)0x0;
  local_1c = 1e+30;
  if (0 < g_HeroCount) {
    iVar5 = 0;
    do {
      pCVar1 = *(CHero **)((int)g_HeroActors + iVar5);
      if ((pCVar1 != (CHero *)0x0) &&
         (fVar2 = (pCVar1->base).base.location.position.x - (location->position).x,
         fVar4 = (pCVar1->base).base.location.position.y - (location->position).y,
         fVar3 = (pCVar1->base).base.location.position.z - (location->position).z,
         fVar5 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2, fVar5 < local_1c)) {
        iVar6 = pCVar1;
        local_1c = fVar5;
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < g_HeroCount * 4);
  }
  if (iVar6 != (CHero *)0x0) {
    return iVar6;
  }
  g_CurrentFilename = "..\\core\\hero.cpp";
  g_CurrentLineNumber = 52;
  core_main_c_displayErrorAndQuit_FUN_00506f10("closestHeroToPoint - no heros!");
  return (CHero *)0x0;
}
