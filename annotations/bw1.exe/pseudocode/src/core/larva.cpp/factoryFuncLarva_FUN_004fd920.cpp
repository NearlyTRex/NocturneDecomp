// Name: core_larva.cpp_factoryFuncLarva_FUN_004fd920
// Address: 004fd920
// Address Range: [[004fd920, 004fd93b]]
// Convention: unknown
// Signature: void core_larva_cpp_factoryFuncLarva_FUN_004fd920(void)

#include "nocturne.h"

void core_larva_cpp_factoryFuncLarva_FUN_004fd920(void)

{
  CLarva *this_ptr;
  
  this_ptr = (CLarva *)debugAllocTracked1(0xc274);
  if (this_ptr == (CLarva *)0x0) {
    return;
  }
  core_larva_cpp_CLarva_ctor_FUN_004fd950(this_ptr);
  return;
}
