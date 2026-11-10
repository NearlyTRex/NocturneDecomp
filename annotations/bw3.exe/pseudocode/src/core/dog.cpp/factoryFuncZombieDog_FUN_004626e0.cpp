// Name: core_dog.cpp_factoryFuncZombieDog_FUN_004626e0
// Address: 004626e0
// Address Range: [[004626e0, 004626fb]]
// Convention: unknown
// Signature: void core_dog_cpp_factoryFuncZombieDog_FUN_004626e0(void)

#include "nocturne.h"

void core_dog_cpp_factoryFuncZombieDog_FUN_004626e0(void)

{
  CZombieDog *this_ptr;
  
  this_ptr = (CZombieDog *)debugAllocTracked1(0xd064);
  if (this_ptr == (CZombieDog *)0x0) {
    return;
  }
  core_dog_cpp_CZombieDog_ctor_FUN_00462710(this_ptr);
  return;
}
