// Name: core_zombiepriest.cpp_factoryFuncZombiePriest_FUN_0058d4b0
// Address: 0058d4b0
// Address Range: [[0058d4b0, 0058d4cb]]
// Convention: unknown
// Signature: void core_zombiepriest_cpp_factoryFuncZombiePriest_FUN_0058d4b0(void)

#include "nocturne.h"

void core_zombiepriest_cpp_factoryFuncZombiePriest_FUN_0058d4b0(void)

{
  CZombiePriest *this_ptr;
  
  this_ptr = (CZombiePriest *)debugAllocTracked1(0xd114);
  if (this_ptr == (CZombiePriest *)0x0) {
    return;
  }
  core_zombiepriest_cpp_CZombiePriest_ctor_FUN_0058d4e0(this_ptr);
  return;
}
