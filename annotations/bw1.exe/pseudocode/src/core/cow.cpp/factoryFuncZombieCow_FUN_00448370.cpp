// Name: core_cow.cpp_factoryFuncZombieCow_FUN_00448370
// Address: 00448370
// Address Range: [[00448370, 0044838b]]
// Convention: unknown
// Signature: void core_cow_cpp_factoryFuncZombieCow_FUN_00448370(void)

#include "nocturne.h"

void core_cow_cpp_factoryFuncZombieCow_FUN_00448370(void)

{
  CZombieCow *this_ptr;
  
  this_ptr = (CZombieCow *)debugAllocTracked1(0xc29c);
  if (this_ptr == (CZombieCow *)0x0) {
    return;
  }
  core_cow_cpp_CZombieCow_ctor_FUN_004483a0(this_ptr);
  return;
}
