// Name: core_hero.cpp_CHero_executeLeverPull_FUN_004b5490
// Address: 004b5490
// Address Range: [[004b5490, 004b54bc]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(int param_1)

#include "nocturne.h"

uint __cdecl core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(int param_1)

{
  if (*(int *)(param_1 + 0x1fa10) == 0) {
    return 0;
  }
  core_lever_cpp_CLever_activate_FUN_004c6500(*(int *)(param_1 + 0x1fa10));
  *(uint *)(param_1 + 0x1fa10) = 0;
  return 1;
}
