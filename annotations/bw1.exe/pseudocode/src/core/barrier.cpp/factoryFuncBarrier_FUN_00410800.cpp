// Name: core_barrier.cpp_factoryFuncBarrier_FUN_00410800
// Address: 00410800
// Address Range: [[00410800, 0041081b]]
// Convention: unknown
// Signature: void core_barrier_cpp_factoryFuncBarrier_FUN_00410800(void)

#include "nocturne.h"

void core_barrier_cpp_factoryFuncBarrier_FUN_00410800(void)

{
  CBarrier *this_ptr;
  
  this_ptr = (CBarrier *)debugAllocTracked1(0x230);
  if (this_ptr == (CBarrier *)0x0) {
    return;
  }
  core_barrier_cpp_CBarrier_ctor_FUN_00410830(this_ptr);
  return;
}
