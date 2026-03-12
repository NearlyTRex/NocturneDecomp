// Name: core_hero.cpp_isAnyHeroWithinCylinder_FUN_004f22a0
// Address: 004f22a0
// Address Range: [[004f22a0, 004f2339]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_isAnyHeroWithinCylinder_FUN_004f22a0(CVector3f *point,float horizontal_radius,float vertical_tolerance)

#include "nocturne.h"

int __cdecl core_hero_cpp_isAnyHeroWithinCylinder_FUN_004f22a0(CVector3f *point,float horizontal_radius,float vertical_tolerance)

{
  int iVar4;
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (0 < g_HeroCount) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)((int)g_HeroActors + iVar4);
      if (iVar1 != 0) {
        fVar2 = *(float *)(iVar1 + 0x20) - point->x;
        fVar3 = *(float *)(iVar1 + 0x28) - point->z;
        if (ABS(*(float *)(iVar1 + 0x24) - point->y) <= vertical_tolerance) {
          if (fVar2 * fVar2 + fVar3 * fVar3 < horizontal_radius * horizontal_radius) {
            return 1;
          }
        }
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 < g_HeroCount * 4);
  }
  return 0;
}
