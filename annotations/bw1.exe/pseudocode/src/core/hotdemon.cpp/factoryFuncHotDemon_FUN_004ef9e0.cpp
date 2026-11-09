// Name: core_hotdemon.cpp_factoryFuncHotDemon_FUN_004ef9e0
// Address: 004ef9e0
// Address Range: [[004ef9e0, 004ef9fb]]
// Convention: unknown
// Signature: void core_hotdemon_cpp_factoryFuncHotDemon_FUN_004ef9e0(void)

#include "nocturne.h"

void core_hotdemon_cpp_factoryFuncHotDemon_FUN_004ef9e0(void)

{
  CHotDemon *this_ptr;
  
  this_ptr = (CHotDemon *)FUN_005c0f32(0xc29c);
  if (this_ptr == (CHotDemon *)0x0) {
    return;
  }
  core_hotdemon_cpp_CHotDemon_ctor_FUN_004efa10(this_ptr);
  return;
}
