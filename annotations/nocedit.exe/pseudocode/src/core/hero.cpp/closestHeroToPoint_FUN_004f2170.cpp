// Name: core_hero.cpp_closestHeroToPoint_FUN_004f2170
// Address: 004f2170
// Address Range: [[004f2170, 004f221e]]
// Convention: unknown
// Signature: undefined core_hero.cpp_closestHeroToPoint_FUN_004f2170()

#include "nocturne.h"

/* Signature: byte actors_hero_hero.cpp_closestHeroToPoint(uint param_1) */

int core_hero_cpp_closestHeroToPoint_FUN_004f2170(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float *in_stack_00000004;
  float local_1c;
  
  iVar6 = 0;
  local_1c = 1e+30;
  if (0 < g_HeroCount) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)((int)g_HeroActors + iVar5);
      if ((iVar1 != 0) &&
         (fVar2 = *(float *)(iVar1 + 0x20) - *in_stack_00000004,
         fVar4 = *(float *)(iVar1 + 0x24) - in_stack_00000004[1],
         fVar3 = *(float *)(iVar1 + 0x28) - in_stack_00000004[2],
         fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2, fVar2 < local_1c)) {
        iVar6 = iVar1;
        local_1c = fVar2;
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < g_HeroCount * 4);
  }
  if (iVar6 != 0) {
    return iVar6;
  }
  g_CurrentFilename = "..\\core\\hero.cpp";
  g_CurrentLineNumber = 0x34;
  core_main_c_displayErrorAndQuit_FUN_00506f10("closestHeroToPoint - no heros!");
  return 0;
}
