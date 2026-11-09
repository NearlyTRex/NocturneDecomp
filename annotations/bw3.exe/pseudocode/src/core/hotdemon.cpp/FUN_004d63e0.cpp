// Name: core_hotdemon.cpp_FUN_004d63e0
// Address: 004d63e0
// Address Range: [[004d63e0, 004d63fb]]
// Convention: unknown
// Signature: void core_hotdemon_cpp_FUN_004d63e0(void)

#include "nocturne.h"

void core_hotdemon_cpp_FUN_004d63e0(void)

{
  CAngelDemon *this_ptr;
  
  this_ptr = (CAngelDemon *)FUN_005a3cb2(0xd088);
  if (this_ptr == (CAngelDemon *)0x0) {
    return;
  }
  core_hotdemon_cpp_CAngelDemon_ctor_FUN_004d6410(this_ptr);
  return;
}
