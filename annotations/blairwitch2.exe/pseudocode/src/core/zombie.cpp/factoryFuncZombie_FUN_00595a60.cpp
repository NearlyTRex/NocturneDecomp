// Name: core_zombie.cpp_factoryFuncZombie_FUN_00595a60
// Address: 00595a60
// Address Range: [[00595a60, 00595a7b]]
// Convention: unknown
// Signature: void core_zombie_cpp_factoryFuncZombie_FUN_00595a60(void)

#include "nocturne.h"

void core_zombie_cpp_factoryFuncZombie_FUN_00595a60(void)

{
  CZombie *this_ptr;
  
  this_ptr = (CZombie *)debugAllocTracked1(0x10be8);
  if (this_ptr == (CZombie *)0x0) {
    return;
  }
  core_zombie_cpp_CZombie_ctor_FUN_00595a90(this_ptr);
  return;
}
