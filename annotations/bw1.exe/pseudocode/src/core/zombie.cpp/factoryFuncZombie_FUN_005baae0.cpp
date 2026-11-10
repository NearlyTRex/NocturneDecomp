// Name: core_zombie.cpp_factoryFuncZombie_FUN_005baae0
// Address: 005baae0
// Address Range: [[005baae0, 005baafb]]
// Convention: unknown
// Signature: void core_zombie_cpp_factoryFuncZombie_FUN_005baae0(void)

#include "nocturne.h"

void core_zombie_cpp_factoryFuncZombie_FUN_005baae0(void)

{
  CZombie *this_ptr;
  
  this_ptr = (CZombie *)debugAllocTracked1(0xc358);
  if (this_ptr == (CZombie *)0x0) {
    return;
  }
  core_zombie_cpp_CZombie_ctor_FUN_005bab10(this_ptr);
  return;
}
