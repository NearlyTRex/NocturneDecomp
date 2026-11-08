// Name: FUN_004455d0
// Address: 004455d0
// Address Range: [[004455d0, 0044560a]]
// Convention: unknown
// Signature: void FUN_004455d0(int param_1)

#include "nocturne.h"

void FUN_004455d0(int param_1)

{
  FUN_005bfb70(param_1 + 8,0,4000);
  *(uint *)(param_1 + 0xfa8) = 0;
  *(uint *)(param_1 + 0xfac) = 0;
  FUN_00479950("console.txt");
  return;
}
