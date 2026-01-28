// Name: core_hero.cpp_FUN_004f2220
// Address: 004f2220
// Address Range: [[004f2220, 004f2293]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004f2220(void)

#include "nocturne.h"

/* Signature: byte actors_hero_hero.cpp_FUN_004f2220(uint param_1, uint param_2)
    */

uint core_hero_cpp_FUN_004f2220(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *in_stack_00000004;
  float in_stack_00000008;
  
  if (0 < g_HeroCount) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)((int)g_HeroActors + iVar5);
      if (iVar1 != 0) {
        fVar2 = *(float *)(iVar1 + 0x20) - *in_stack_00000004;
        fVar4 = *(float *)(iVar1 + 0x24) - in_stack_00000004[1];
        fVar3 = *(float *)(iVar1 + 0x28) - in_stack_00000004[2];
        if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 < in_stack_00000008 * in_stack_00000008) {
          return 1;
        }
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < g_HeroCount * 4);
  }
  return 0;
}
