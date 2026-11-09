// Name: unkaddr_0059d350.cpp_FUN_0059dc00
// Address: 0059dc00
// Address Range: [[0059dc00, 0059dc20]]
// Convention: unknown
// Signature: int unkaddr_0059d350_cpp_FUN_0059dc00(int param_1,int param_2)

#include "nocturne.h"

int unkaddr_0059d350_cpp_FUN_0059dc00(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x838) != 0) {
    return param_2 * 0x20 + param_1 + 500;
  }
  return 0;
}
