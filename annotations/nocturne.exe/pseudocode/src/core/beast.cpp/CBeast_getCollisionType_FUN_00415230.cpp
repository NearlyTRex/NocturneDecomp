// Name: core_beast.cpp_CBeast_getCollisionType_FUN_00415230
// Address: 00415230
// Address Range: [[00415230, 0041524e]]
// Convention: unknown
// Signature: undefined4 core_beast_cpp_CBeast_getCollisionType_FUN_00415230(int param_1,int *param_2)

#include "nocturne.h"

uint core_beast_cpp_CBeast_getCollisionType_FUN_00415230(int param_1,int *param_2)

{
  if (*param_2 != 1) {
    return 0;
  }
  param_2[8] = param_1 + 0x150;
  return 1;
}
