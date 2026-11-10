// Name: core_zombie.cpp_factoryFuncZombie_FUN_005888a0
// Address: 005888a0
// Address Range: [[005888a0, 005888bb]]
// Convention: unknown
// Signature: void core_zombie_cpp_factoryFuncZombie_FUN_005888a0(void)

#include "nocturne.h"

void core_zombie_cpp_factoryFuncZombie_FUN_005888a0(void)

{
  CZombie *this_ptr;
  
  this_ptr = (CZombie *)debugAllocTracked1(0xd14c);
  if (this_ptr == (CZombie *)0x0) {
    return;
  }
  core_zombie_cpp_CZombie_ctor_FUN_005888d0(this_ptr);
  return;
}
