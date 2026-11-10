// Name: core_hpriest.cpp_factoryFuncHighPriestOfGardath_FUN_004d4750
// Address: 004d4750
// Address Range: [[004d4750, 004d476b]]
// Convention: unknown
// Signature: void core_hpriest_cpp_factoryFuncHighPriestOfGardath_FUN_004d4750(void)

#include "nocturne.h"

void core_hpriest_cpp_factoryFuncHighPriestOfGardath_FUN_004d4750(void)

{
  CHighPriestOfGardath *this_ptr;
  
  this_ptr = (CHighPriestOfGardath *)debugAllocTracked1(0x243ac);
  if (this_ptr == (CHighPriestOfGardath *)0x0) {
    return;
  }
  core_hpriest_cpp_CHighPriestOfGardath_ctor_FUN_004d4780(this_ptr);
  return;
}
