// Name: core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100
// Address: 004ce100
// Address Range: [[004ce100, 004ce173]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_hero_cpp_isAnyHeroWithinRadius_FUN_004ce100(float *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_hero_cpp_isAnyHeroWithinRadius_FUN_004ce100(float *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  if (0 < _DAT_01cedee0) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(iVar5 + 0x1cedee4);
      if (iVar1 != 0) {
        fVar2 = *(float *)(iVar1 + 0x20) - *param_1;
        fVar4 = *(float *)(iVar1 + 0x24) - param_1[1];
        fVar3 = *(float *)(iVar1 + 0x28) - param_1[2];
        if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 < param_2 * param_2) {
          return 1;
        }
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < _DAT_01cedee0 * 4);
  }
  return 0;
}
