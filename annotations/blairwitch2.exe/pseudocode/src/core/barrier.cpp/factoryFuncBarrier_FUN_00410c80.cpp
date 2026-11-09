// Name: core_barrier.cpp_factoryFuncBarrier_FUN_00410c80
// Address: 00410c80
// Address Range: [[00410c80, 00410c9b]]
// Convention: unknown
// Signature: void core_barrier_cpp_factoryFuncBarrier_FUN_00410c80(void)

#include "nocturne.h"

void core_barrier_cpp_factoryFuncBarrier_FUN_00410c80(void)

{
  CBarrier *this_ptr;
  
  this_ptr = (CBarrier *)FUN_005b8be2(0x38c);
  if (this_ptr == (CBarrier *)0x0) {
    return;
  }
  core_barrier_cpp_CBarrier_ctor_FUN_00410cb0(this_ptr);
  return;
}
