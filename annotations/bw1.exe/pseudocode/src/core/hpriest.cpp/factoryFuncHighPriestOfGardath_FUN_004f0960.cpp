// Name: core_hpriest.cpp_factoryFuncHighPriestOfGardath_FUN_004f0960
// Address: 004f0960
// Address Range: [[004f0960, 004f097b]]
// Convention: unknown
// Signature: void core_hpriest_cpp_factoryFuncHighPriestOfGardath_FUN_004f0960(void)

#include "nocturne.h"

void core_hpriest_cpp_factoryFuncHighPriestOfGardath_FUN_004f0960(void)

{
  CHighPriestOfGardath *this_ptr;
  
  this_ptr = (CHighPriestOfGardath *)operator_new(0x1fb1c);
  if (this_ptr == (CHighPriestOfGardath *)0x0) {
    return;
  }
  core_hpriest_cpp_CHighPriestOfGardath_ctor_FUN_004f0990(this_ptr);
  return;
}
