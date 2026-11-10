// Name: core_drip.cpp_factoryFuncDrip_FUN_0046ce40
// Address: 0046ce40
// Address Range: [[0046ce40, 0046ce5b]]
// Convention: unknown
// Signature: void core_drip_cpp_factoryFuncDrip_FUN_0046ce40(void)

#include "nocturne.h"

void core_drip_cpp_factoryFuncDrip_FUN_0046ce40(void)

{
  CDrip *this_ptr;
  
  this_ptr = (CDrip *)debugAllocTracked1(0x498);
  if (this_ptr == (CDrip *)0x0) {
    return;
  }
  core_drip_cpp_CDrip_ctor_FUN_0046ce70(this_ptr);
  return;
}
