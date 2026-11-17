// Name: core_hero.cpp_isAnyHeroWithinRadius_FUN_004d2370
// Address: 004d2370
// Address Range: [[004d2370, 004d23e3]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_isAnyHeroWithinRadius_FUN_004d2370(CVector3f *point,float radius)

#include "nocturne.h"

int __cdecl core_hero_cpp_isAnyHeroWithinRadius_FUN_004d2370(CVector3f *point,float radius)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  if (0 < g_INT_01d5ba00) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)((int)g_CHero_PTR_ARRAY_01d5ba04 + iVar5);
      if (iVar1 != 0) {
        fVar2 = *(float *)(iVar1 + 0x20) - point->x;
        fVar4 = *(float *)(iVar1 + 0x24) - point->y;
        fVar3 = *(float *)(iVar1 + 0x28) - point->z;
        if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 < radius * radius) {
          return 1;
        }
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < g_INT_01d5ba00 * 4);
  }
  return 0;
}
