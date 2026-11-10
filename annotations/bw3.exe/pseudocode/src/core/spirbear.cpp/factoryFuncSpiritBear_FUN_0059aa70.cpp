// Name: core_spirbear.cpp_factoryFuncSpiritBear_FUN_0059aa70
// Address: 0059aa70
// Address Range: [[0059aa70, 0059aa8b]]
// Convention: unknown
// Signature: void core_spirbear_cpp_factoryFuncSpiritBear_FUN_0059aa70(void)

#include "nocturne.h"

void core_spirbear_cpp_factoryFuncSpiritBear_FUN_0059aa70(void)

{
  CSpiritBear *this_ptr;
  
  this_ptr = (CSpiritBear *)debugAllocTracked1(0x34da4);
  if (this_ptr == (CSpiritBear *)0x0) {
    return;
  }
  core_spirbear_cpp_CSpiritBear_ctor_FUN_0059aaa0(this_ptr);
  return;
}
