// Name: core_drip.cpp_factoryFuncDrip_FUN_0046ea20
// Address: 0046ea20
// Address Range: [[0046ea20, 0046ea3b]]
// Convention: unknown
// Signature: void core_drip_cpp_factoryFuncDrip_FUN_0046ea20(void)

#include "nocturne.h"

void core_drip_cpp_factoryFuncDrip_FUN_0046ea20(void)

{
  CDrip *this_ptr;
  
  this_ptr = (CDrip *)debugAllocTracked1(0x33c);
  if (this_ptr == (CDrip *)0x0) {
    return;
  }
  core_drip_cpp_CDrip_ctor_FUN_0046ea50(this_ptr);
  return;
}
