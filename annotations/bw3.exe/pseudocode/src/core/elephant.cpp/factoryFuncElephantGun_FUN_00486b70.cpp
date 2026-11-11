// Name: core_elephant.cpp_factoryFuncElephantGun_FUN_00486b70
// Address: 00486b70
// Address Range: [[00486b70, 00486b8b]]
// Convention: unknown
// Signature: void core_elephant_cpp_factoryFuncElephantGun_FUN_00486b70(void)

#include "nocturne.h"

void core_elephant_cpp_factoryFuncElephantGun_FUN_00486b70(void)

{
  CElephantGun *this_ptr;
  
  this_ptr = (CElephantGun *)operator_new(0x5a0);
  if (this_ptr == (CElephantGun *)0x0) {
    return;
  }
  core_elephant_cpp_CElephantGun_ctor_FUN_00486ba0(this_ptr);
  return;
}
