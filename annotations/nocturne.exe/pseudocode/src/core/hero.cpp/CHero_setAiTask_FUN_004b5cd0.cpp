// Name: core_hero.cpp_CHero_setAiTask_FUN_004b5cd0
// Address: 004b5cd0
// Address Range: [[004b5cd0, 004b5cf0]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_setAiTask_FUN_004b5cd0(int param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_setAiTask_FUN_004b5cd0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x1fa38) = param_2;
  memset(param_1 + 0xbc94,0,0x2c);
  return;
}
