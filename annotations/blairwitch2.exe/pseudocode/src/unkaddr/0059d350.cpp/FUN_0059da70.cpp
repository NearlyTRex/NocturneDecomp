// Name: unkaddr_0059d350.cpp_FUN_0059da70
// Address: 0059da70
// Address Range: [[0059da70, 0059da9a]]
// Convention: unknown
// Signature: void unkaddr_0059d350_cpp_FUN_0059da70(int param_1)

#include "nocturne.h"

void unkaddr_0059d350_cpp_FUN_0059da70(int param_1)

{
  if (*(int *)(param_1 + 0x844) != 0) {
    *(int *)(param_1 + 0x840) = *(int *)(param_1 + 0x844);
  }
  *(uint *)(param_1 + 0x848) = 0;
  *(uint *)(param_1 + 0x844) = 0;
  return;
}
