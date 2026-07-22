// Name: FUN_004eece0
// Address: 004eece0
// Address Range: [[004eece0, 004eed09]]
// Convention: unknown
// Signature: void FUN_004eece0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004eece0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1f56c) != 0) {
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x2404) = 1;
    }
    core_charactr_cpp_FUN_00426510(param_1,param_2);
  }
  return;
}
