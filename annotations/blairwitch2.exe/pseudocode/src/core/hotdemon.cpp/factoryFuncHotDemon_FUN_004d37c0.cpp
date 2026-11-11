// Name: core_hotdemon.cpp_factoryFuncHotDemon_FUN_004d37c0
// Address: 004d37c0
// Address Range: [[004d37c0, 004d37db]]
// Convention: unknown
// Signature: void core_hotdemon_cpp_factoryFuncHotDemon_FUN_004d37c0(void)

#include "nocturne.h"

void core_hotdemon_cpp_factoryFuncHotDemon_FUN_004d37c0(void)

{
  CHotDemon *this_ptr;
  
  this_ptr = (CHotDemon *)operator_new(0x10b2c);
  if (this_ptr == (CHotDemon *)0x0) {
    return;
  }
  core_hotdemon_cpp_CHotDemon_ctor_FUN_004d37f0(this_ptr);
  return;
}
