// Name: core_barrier.cpp_FUN_004116e0
// Address: 004116e0
// Address Range: [[004116e0, 004116fb]]
// Convention: unknown
// Signature: void core_barrier_cpp_FUN_004116e0(void)

#include "nocturne.h"

void core_barrier_cpp_FUN_004116e0(void)

{
  CBarrier *this_ptr;
  
  this_ptr = (CBarrier *)FUN_0056497c(0x228);
  if (this_ptr == (CBarrier *)0x0) {
    return;
  }
  core_barrier_cpp_CBarrier_ctor_FUN_00411710(this_ptr);
  return;
}
