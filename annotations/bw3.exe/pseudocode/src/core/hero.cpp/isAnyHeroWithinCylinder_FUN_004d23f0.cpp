// Name: core_hero.cpp_isAnyHeroWithinCylinder_FUN_004d23f0
// Address: 004d23f0
// Address Range: [[004d23f0, 004d24a1]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_isAnyHeroWithinCylinder_FUN_004d23f0(CVector3f *point,float horizontal_radius,float vertical_tolerance)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hero_cpp_isAnyHeroWithinCylinder_FUN_004d23f0(CVector3f *point,float horizontal_radius,float vertical_tolerance)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  if (0 < _DAT_01d5ba00) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(iVar4 + 0x1d5ba04);
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
    } while (iVar4 < _DAT_01d5ba00 * 4);
  }
  return 0;
}
