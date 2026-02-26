// Name: core_hero.cpp_isAnyHeroWithinRadius_FUN_004f2220
// Address: 004f2220
// Address Range: [[004f2220, 004f2293]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_isAnyHeroWithinRadius_FUN_004f2220(CVector3f *point,float radius)

#include "nocturne.h"

int __cdecl core_hero_cpp_isAnyHeroWithinRadius_FUN_004f2220(CVector3f *point,float radius)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  if (0 < g_HeroCount) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)((int)g_HeroActors + iVar5);
      if (iVar1 != 0) {
        fVar2 = *(float *)(iVar1 + 0x20) - point->x;
        fVar4 = *(float *)(iVar1 + 0x24) - point->y;
        fVar3 = *(float *)(iVar1 + 0x28) - point->z;
        if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 < radius * radius) {
          return 1;
        }
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < g_HeroCount * 4);
  }
  return 0;
}
