// Name: core_dog.cpp_factoryFuncZombieDog_FUN_00476780
// Address: 00476780
// Address Range: [[00476780, 0047679b]]
// Convention: unknown
// Signature: void core_dog_cpp_factoryFuncZombieDog_FUN_00476780(void)

#include "nocturne.h"

void core_dog_cpp_factoryFuncZombieDog_FUN_00476780(void)

{
  CZombieDog *this_ptr;
  
  this_ptr = (CZombieDog *)operator_new(0xc274);
  if (this_ptr == (CZombieDog *)0x0) {
    return;
  }
  core_dog_cpp_CZombieDog_ctor_FUN_004767b0(this_ptr);
  return;
}
