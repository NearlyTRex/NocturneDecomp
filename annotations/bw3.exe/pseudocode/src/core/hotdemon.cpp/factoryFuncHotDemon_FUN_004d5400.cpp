// Name: core_hotdemon.cpp_factoryFuncHotDemon_FUN_004d5400
// Address: 004d5400
// Address Range: [[004d5400, 004d541b]]
// Convention: unknown
// Signature: void core_hotdemon_cpp_factoryFuncHotDemon_FUN_004d5400(void)

#include "nocturne.h"

void core_hotdemon_cpp_factoryFuncHotDemon_FUN_004d5400(void)

{
  CHotDemon *this_ptr;
  
  this_ptr = (CHotDemon *)operator_new(0xd088);
  if (this_ptr == (CHotDemon *)0x0) {
    return;
  }
  core_hotdemon_cpp_CHotDemon_ctor_FUN_004d5430(this_ptr);
  return;
}
