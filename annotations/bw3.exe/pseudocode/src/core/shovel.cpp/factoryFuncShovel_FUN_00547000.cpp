// Name: core_shovel.cpp_factoryFuncShovel_FUN_00547000
// Address: 00547000
// Address Range: [[00547000, 0054701b]]
// Convention: unknown
// Signature: void core_shovel_cpp_factoryFuncShovel_FUN_00547000(void)

#include "nocturne.h"

void core_shovel_cpp_factoryFuncShovel_FUN_00547000(void)

{
  CShovel *this_ptr;
  
  this_ptr = (CShovel *)operator_new(0x594);
  if (this_ptr == (CShovel *)0x0) {
    return;
  }
  core_shovel_cpp_CShovel_ctor_FUN_00547030(this_ptr);
  return;
}
