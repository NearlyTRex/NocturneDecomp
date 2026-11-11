// Name: core_holycrss.cpp_factoryFuncHolycross_FUN_004d50a0
// Address: 004d50a0
// Address Range: [[004d50a0, 004d50bb]]
// Convention: unknown
// Signature: void core_holycrss_cpp_factoryFuncHolycross_FUN_004d50a0(void)

#include "nocturne.h"

void core_holycrss_cpp_factoryFuncHolycross_FUN_004d50a0(void)

{
  CHolycross *this_ptr;
  
  this_ptr = (CHolycross *)operator_new(0x594);
  if (this_ptr == (CHolycross *)0x0) {
    return;
  }
  core_holycrss_cpp_CHolycross_ctor_FUN_004d50d0(this_ptr);
  return;
}
