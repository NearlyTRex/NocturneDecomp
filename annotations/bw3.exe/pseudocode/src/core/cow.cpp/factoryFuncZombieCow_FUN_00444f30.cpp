// Name: core_cow.cpp_factoryFuncZombieCow_FUN_00444f30
// Address: 00444f30
// Address Range: [[00444f30, 00444f4b]]
// Convention: unknown
// Signature: void core_cow_cpp_factoryFuncZombieCow_FUN_00444f30(void)

#include "nocturne.h"

void core_cow_cpp_factoryFuncZombieCow_FUN_00444f30(void)

{
  CZombieCow *this_ptr;
  
  this_ptr = (CZombieCow *)FUN_005a3cb2(0xd088);
  if (this_ptr == (CZombieCow *)0x0) {
    return;
  }
  core_cow_cpp_CZombieCow_ctor_FUN_00444f60(this_ptr);
  return;
}
