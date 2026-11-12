// Name: core_cow.cpp_factoryFuncZombieCow_FUN_004390b0
// Address: 004390b0
// Address Range: [[004390b0, 004390cb]]
// Convention: unknown
// Signature: void core_cow_cpp_factoryFuncZombieCow_FUN_004390b0(void)

#include "nocturne.h"

void core_cow_cpp_factoryFuncZombieCow_FUN_004390b0(void)

{
  CZombieCow *this_ptr;
  
  this_ptr = (CZombieCow *)operator_new(0x10b2c);
  if (this_ptr == (CZombieCow *)0x0) {
    return;
  }
  core_cow_cpp_CZombieCow_ctor_FUN_004390e0(this_ptr);
  return;
}
