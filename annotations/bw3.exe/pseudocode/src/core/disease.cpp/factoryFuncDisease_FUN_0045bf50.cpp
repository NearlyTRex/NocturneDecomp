// Name: core_disease.cpp_factoryFuncDisease_FUN_0045bf50
// Address: 0045bf50
// Address Range: [[0045bf50, 0045bf6b]]
// Convention: unknown
// Signature: void core_disease_cpp_factoryFuncDisease_FUN_0045bf50(void)

#include "nocturne.h"

void core_disease_cpp_factoryFuncDisease_FUN_0045bf50(void)

{
  CDisease *this_ptr;
  
  this_ptr = (CDisease *)debugAllocTracked1(0x5a4);
  if (this_ptr == (CDisease *)0x0) {
    return;
  }
  core_disease_cpp_CDisease_ctor_FUN_0045bf80(this_ptr);
  return;
}
