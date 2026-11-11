// Name: core_larva.cpp_factoryFuncLarva_FUN_004e0550
// Address: 004e0550
// Address Range: [[004e0550, 004e056b]]
// Convention: unknown
// Signature: void core_larva_cpp_factoryFuncLarva_FUN_004e0550(void)

#include "nocturne.h"

void core_larva_cpp_factoryFuncLarva_FUN_004e0550(void)

{
  CLarva *this_ptr;
  
  this_ptr = (CLarva *)operator_new(0x10b04);
  if (this_ptr == (CLarva *)0x0) {
    return;
  }
  core_larva_cpp_CLarva_ctor_FUN_004e0580(this_ptr);
  return;
}
