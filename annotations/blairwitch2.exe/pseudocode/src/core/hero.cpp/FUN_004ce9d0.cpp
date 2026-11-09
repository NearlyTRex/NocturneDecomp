// Name: core_hero.cpp_FUN_004ce9d0
// Address: 004ce9d0
// Address Range: [[004ce9d0, 004ce9ff]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004ce9d0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint core_hero_cpp_FUN_004ce9d0(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CBasicEnemyClassInfo.name_hash);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x11344) != 0)) && (*(int *)(iVar1 + 0x11344) == 2)) {
    return 0;
  }
  return 1;
}
