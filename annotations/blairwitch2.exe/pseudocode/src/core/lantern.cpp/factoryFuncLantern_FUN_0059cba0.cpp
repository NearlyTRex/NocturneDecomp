// Name: core_lantern.cpp_factoryFuncLantern_FUN_0059cba0
// Address: 0059cba0
// Address Range: [[0059cba0, 0059cbbb]]
// Convention: unknown
// Signature: void core_lantern_cpp_factoryFuncLantern_FUN_0059cba0(void)

#include "nocturne.h"

void core_lantern_cpp_factoryFuncLantern_FUN_0059cba0(void)

{
  CLantern *this_ptr;
  
  this_ptr = (CLantern *)debugAllocTracked1(0x708);
  if (this_ptr == (CLantern *)0x0) {
    return;
  }
  core_lantern_cpp_CLantern_ctor_FUN_0059cbd0(this_ptr);
  return;
}
