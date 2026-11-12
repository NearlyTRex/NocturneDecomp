// Name: core_muzzle.cpp_FUN_0059dc00
// Address: 0059dc00
// Address Range: [[0059dc00, 0059dc20]]
// Convention: unknown
// Signature: int core_muzzle_cpp_FUN_0059dc00(int param_1,int param_2)

#include "nocturne.h"

int core_muzzle_cpp_FUN_0059dc00(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x838) != 0) {
    return param_2 * 0x20 + param_1 + 500;
  }
  return 0;
}
