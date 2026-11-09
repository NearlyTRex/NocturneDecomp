// Name: core_barrier.cpp_factoryFuncBarrier_FUN_0040ea90
// Address: 0040ea90
// Address Range: [[0040ea90, 0040eaab]]
// Convention: unknown
// Signature: void core_barrier_cpp_factoryFuncBarrier_FUN_0040ea90(void)

#include "nocturne.h"

void core_barrier_cpp_factoryFuncBarrier_FUN_0040ea90(void)

{
  CBarrier *this_ptr;
  
  this_ptr = (CBarrier *)FUN_005a3cb2(0x230);
  if (this_ptr == (CBarrier *)0x0) {
    return;
  }
  core_barrier_cpp_CBarrier_ctor_FUN_0040eac0(this_ptr);
  return;
}
