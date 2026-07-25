// Name: FUN_004116e0
// Address: 004116e0
// Address Range: [[004116e0, 004116fb]]
// Convention: unknown
// Signature: void FUN_004116e0(void)

#include "nocturne.h"

void FUN_004116e0(void)

{
  int iVar1;
  
  iVar1 = FUN_0056497c(0x228);
  if (iVar1 == 0) {
    return;
  }
  core_barrier_cpp_CBarrier_ctor_FUN_00411710(iVar1);
  return;
}
