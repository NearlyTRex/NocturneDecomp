// Name: core_boneguy.cpp_FUN_0041a3e0
// Address: 0041a3e0
// Address Range: [[0041a3e0, 0041a3fe]]
// Convention: unknown
// Signature: undefined4 core_boneguy_cpp_FUN_0041a3e0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint core_boneguy_cpp_FUN_0041a3e0(int param_1,uint param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xc344) != 0) {
    return 0;
  }
  uVar1 = core_charactr_cpp_CCharacter_getCollisionType_FUN_00427da0(param_1,param_2);
  return uVar1;
}
