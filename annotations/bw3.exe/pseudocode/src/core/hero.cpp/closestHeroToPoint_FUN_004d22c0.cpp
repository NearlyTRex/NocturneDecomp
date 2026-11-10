// Name: core_hero.cpp_closestHeroToPoint_FUN_004d22c0
// Address: 004d22c0
// Address Range: [[004d22c0, 004d236e]]
// Convention: __cdecl
// Signature: CHero * __cdecl core_hero_cpp_closestHeroToPoint_FUN_004d22c0(CLocation *location)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CHero * __cdecl core_hero_cpp_closestHeroToPoint_FUN_004d22c0(CLocation *location)

{
  CHero *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CHero *pCVar6;
  float fStack_1c;
  
  pCVar6 = (CHero *)0x0;
  fStack_1c = 1e+30;
  if (0 < _DAT_01d5ba00) {
    iVar5 = 0;
    do {
      pCVar1 = *(CHero **)(iVar5 + 0x1d5ba04);
      if ((pCVar1 != (CHero *)0x0) &&
         (fVar2 = *(float *)(pCVar1 + 0x20) - (location->position).x,
         fVar4 = *(float *)(pCVar1 + 0x24) - (location->position).y,
         fVar3 = *(float *)(pCVar1 + 0x28) - (location->position).z,
         fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2, fVar2 < fStack_1c)) {
        pCVar6 = pCVar1;
        fStack_1c = fVar2;
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < _DAT_01d5ba00 * 4);
  }
  if (pCVar6 != (CHero *)0x0) {
    return pCVar6;
  }
  _DAT_01d71de0 = "..\\core\\hero.cpp";
  _DAT_01d71de4 = 0x3a;
  core_main_c_FUN_004e4330("closestHeroToPoint - no heros!");
  return (CHero *)0x0;
}
