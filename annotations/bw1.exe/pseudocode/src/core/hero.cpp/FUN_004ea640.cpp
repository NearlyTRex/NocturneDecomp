// Name: core_hero.cpp_FUN_004ea640
// Address: 004ea640
// Address Range: [[004ea640, 004ea6ee]]
// Convention: unknown
// Signature: int core_hero_cpp_FUN_004ea640(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_hero_cpp_FUN_004ea640(float *param_1)

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
  if (0 < _DAT_01d06aa0) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(iVar5 + 0x1d06aa4);
      if ((iVar1 != 0) &&
         (fVar2 = *(float *)(iVar1 + 0x20) - *param_1, fVar4 = *(float *)(iVar1 + 0x24) - param_1[1]
         , fVar3 = *(float *)(iVar1 + 0x28) - param_1[2],
         fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2, fVar2 < local_1c)) {
        iVar6 = iVar1;
        local_1c = fVar2;
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < _DAT_01d06aa0 * 4);
  }
  if (iVar6 != 0) {
    return iVar6;
  }
  _DAT_01d1d400 = "..\\core\\hero.cpp";
  _DAT_01d1d404 = 0x38;
  core_main_c_FUN_005030e0("closestHeroToPoint - no heros!");
  return 0;
}
