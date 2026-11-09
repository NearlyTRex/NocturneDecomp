// Name: core_hero.cpp_FUN_004ce050
// Address: 004ce050
// Address Range: [[004ce050, 004ce0fe]]
// Convention: unknown
// Signature: int core_hero_cpp_FUN_004ce050(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_hero_cpp_FUN_004ce050(float *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float local_1c;
  
  iVar6 = 0;
  local_1c = 1e+30;
  if (0 < _DAT_01cedee0) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(iVar5 + 0x1cedee4);
      if ((iVar1 != 0) &&
         (fVar2 = *(float *)(iVar1 + 0x20) - *param_1, fVar4 = *(float *)(iVar1 + 0x24) - param_1[1]
         , fVar3 = *(float *)(iVar1 + 0x28) - param_1[2],
         fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2, fVar2 < local_1c)) {
        iVar6 = iVar1;
        local_1c = fVar2;
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < _DAT_01cedee0 * 4);
  }
  if (iVar6 != 0) {
    return iVar6;
  }
  _DAT_01d046a0 = "..\\core\\hero.cpp";
  _DAT_01d046a4 = 0x3a;
  core_main_c_FUN_004e4500("closestHeroToPoint - no heros!");
  return 0;
}
