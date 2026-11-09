// Name: unkaddr_005a7eb0.cpp_FUN_005a8100
// Address: 005a8100
// Address Range: [[005a8100, 005a8129]]
// Convention: unknown
// Signature: void unkaddr_005a7eb0_cpp_FUN_005a8100(int param_1,int param_2)

#include "nocturne.h"

void unkaddr_005a7eb0_cpp_FUN_005a8100(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x34) = 1;
      unkafter_superopt_cpp_FUN_005a8160(param_1);
      return;
    }
    *(uint *)(param_1 + 0x34) = 0;
    *(uint *)(param_1 + 0x10) = 0;
  }
  return;
}
