// Name: core_twigzomb.cpp_factoryFuncTwigZombie_FUN_005a26a0
// Address: 005a26a0
// Address Range: [[005a26a0, 005a26bb]]
// Convention: unknown
// Signature: void core_twigzomb_cpp_factoryFuncTwigZombie_FUN_005a26a0(void)

#include "nocturne.h"

void core_twigzomb_cpp_factoryFuncTwigZombie_FUN_005a26a0(void)

{
  CTwigZombie *this_ptr;
  
  this_ptr = (CTwigZombie *)debugAllocTracked1(0x11858);
  if (this_ptr == (CTwigZombie *)0x0) {
    return;
  }
  core_twigzomb_cpp_CTwigZombie_ctor_FUN_005a26d0(this_ptr);
  return;
}
