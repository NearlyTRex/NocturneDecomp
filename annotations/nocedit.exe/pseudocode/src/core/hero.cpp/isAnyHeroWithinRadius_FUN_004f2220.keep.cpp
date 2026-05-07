// Name: core_hero.cpp_isAnyHeroWithinRadius_FUN_004f2220
// Address: 004f2220
// MANUAL RECONSTRUCTION
// Address Range: [[004f2220, 004f2293]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_isAnyHeroWithinRadius_FUN_004f2220(CVector3f *point,float radius)

#include "nocturne.h"

int __cdecl core_hero_cpp_isAnyHeroWithinRadius_FUN_004f2220(CVector3f *point,float radius)

{
  CHero *hero;
  float fVar2;
  float fVar3;
  float fVar4;
  int i;

  for (i = 0; i < g_HeroCount; i = i + 1) {
    hero = g_HeroActors[i];
    if (hero != (CHero *)0x0) {
      fVar2 = (hero->base).base.location.position.x - point->x;
      fVar4 = (hero->base).base.location.position.y - point->y;
      fVar3 = (hero->base).base.location.position.z - point->z;
      if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 < radius * radius) {
        return 1;
      }
    }
  }
  return 0;
}
