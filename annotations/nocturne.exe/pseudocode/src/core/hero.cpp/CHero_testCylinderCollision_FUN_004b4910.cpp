// Name: core_hero.cpp_CHero_testCylinderCollision_FUN_004b4910
// Address: 004b4910
// Address Range: [[004b4910, 004b4945]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_CHero_testCylinderCollision_FUN_004b4910(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint core_hero_cpp_CHero_testCylinderCollision_FUN_004b4910(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((*(int *)(0x01C775EC + 0x1d0) == 0) && ((*(uint *)(param_1 + 0xbc8c) & 0x7fffffff) == 0)) {
    uVar1 = core_actor_cpp_CDemonActor_testPointInCylinder_FUN_0040a390(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}
