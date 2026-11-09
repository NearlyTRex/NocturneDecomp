// Name: unkaddr_005a7eb0.cpp_FUN_005a80d0
// Address: 005a80d0
// Address Range: [[005a80d0, 005a80fc]]
// Convention: unknown
// Signature: void unkaddr_005a7eb0_cpp_FUN_005a80d0(int param_1,int param_2)

#include "nocturne.h"

void unkaddr_005a7eb0_cpp_FUN_005a80d0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    if (param_2 != 0) {
      unkafter_superopt_cpp_FUN_005a8160(param_1);
      *(uint *)(param_1 + 0x10) = 1;
      return;
    }
    *(uint *)(param_1 + 0x10) = 1;
  }
  return;
}
