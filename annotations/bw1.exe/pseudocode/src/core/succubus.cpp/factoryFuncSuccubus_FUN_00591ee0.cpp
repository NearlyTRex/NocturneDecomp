// Name: core_succubus.cpp_factoryFuncSuccubus_FUN_00591ee0
// Address: 00591ee0
// Address Range: [[00591ee0, 00591efb]]
// Convention: unknown
// Signature: void core_succubus_cpp_factoryFuncSuccubus_FUN_00591ee0(void)

#include "nocturne.h"

void core_succubus_cpp_factoryFuncSuccubus_FUN_00591ee0(void)

{
  CSuccubus *this_ptr;
  
  this_ptr = (CSuccubus *)operator_new(0xf404);
  if (this_ptr == (CSuccubus *)0x0) {
    return;
  }
  core_succubus_cpp_CSuccubus_ctor_FUN_00591f10(this_ptr);
  return;
}
