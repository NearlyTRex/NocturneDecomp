// Name: core_hero.cpp_FUN_004f22a0
// Address: 004f22a0
// Address Range: [[004f22a0, 004f2339]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004f22a0(void)

#include "nocturne.h"

/* Signature: byte actors_hero_hero.cpp_FUN_004f22a0(uint param_1, uint param_2,
   uint param_3) */

uint core_hero_cpp_FUN_004f22a0(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  if (0 < g_HeroCount) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)((int)g_HeroActors + iVar4);
      if (iVar1 != 0) {
        fVar2 = *(float *)(iVar1 + 0x20) - *in_stack_00000004;
        fVar3 = *(float *)(iVar1 + 0x28) - in_stack_00000004[2];
        if (ABS(*(float *)(iVar1 + 0x24) - in_stack_00000004[1]) <= in_stack_0000000c) {
          if (fVar2 * fVar2 + fVar3 * fVar3 < in_stack_00000008 * in_stack_00000008) {
            return 1;
          }
        }
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 < g_HeroCount * 4);
  }
  return 0;
}
