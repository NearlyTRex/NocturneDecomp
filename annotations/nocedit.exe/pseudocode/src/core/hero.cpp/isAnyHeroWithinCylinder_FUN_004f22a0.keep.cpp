// Name: core_hero.cpp_isAnyHeroWithinCylinder_FUN_004f22a0
// Address: 004f22a0
// MANUAL RECONSTRUCTION
// Address Range: [[004f22a0, 004f2339]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_isAnyHeroWithinCylinder_FUN_004f22a0(CVector3f *point,float horizontal_radius,float vertical_tolerance)

#include "nocturne.h"

int __cdecl core_hero_cpp_isAnyHeroWithinCylinder_FUN_004f22a0(CVector3f *point,float horizontal_radius,float vertical_tolerance)

{
  int i;
  CHero *hero;
  float fVar2;
  float fVar3;

  for (i = 0; i < g_HeroCount; i = i + 1) {
    hero = g_HeroActors[i];
    if (hero != (CHero *)0x0) {
      fVar2 = (hero->base).base.location.position.x - point->x;
      fVar3 = (hero->base).base.location.position.z - point->z;
      if (ABS((hero->base).base.location.position.y - point->y) <= vertical_tolerance) {
        if (fVar2 * fVar2 + fVar3 * fVar3 < horizontal_radius * horizontal_radius) {
          return 1;
        }
      }
    }
  }
  return 0;
}
