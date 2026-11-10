// Name: core_dog.cpp_factoryFuncZombieDog_FUN_0045e240
// Address: 0045e240
// Address Range: [[0045e240, 0045e25b]]
// Convention: unknown
// Signature: void core_dog_cpp_factoryFuncZombieDog_FUN_0045e240(void)

#include "nocturne.h"

void core_dog_cpp_factoryFuncZombieDog_FUN_0045e240(void)

{
  CZombieDog *this_ptr;
  
  this_ptr = (CZombieDog *)debugAllocTracked1(0x10b04);
  if (this_ptr == (CZombieDog *)0x0) {
    return;
  }
  core_dog_cpp_CZombieDog_ctor_FUN_0045e270(this_ptr);
  return;
}
