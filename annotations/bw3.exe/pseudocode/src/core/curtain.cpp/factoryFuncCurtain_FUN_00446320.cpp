// Name: core_curtain.cpp_factoryFuncCurtain_FUN_00446320
// Address: 00446320
// Address Range: [[00446320, 0044633b]]
// Convention: unknown
// Signature: void core_curtain_cpp_factoryFuncCurtain_FUN_00446320(void)

#include "nocturne.h"

void core_curtain_cpp_factoryFuncCurtain_FUN_00446320(void)

{
  CCurtain *this_ptr;
  
  this_ptr = (CCurtain *)debugAllocTracked1(0x65b38);
  if (this_ptr == (CCurtain *)0x0) {
    return;
  }
  core_curtain_cpp_CCurtain_ctor_FUN_00446350(this_ptr);
  return;
}
