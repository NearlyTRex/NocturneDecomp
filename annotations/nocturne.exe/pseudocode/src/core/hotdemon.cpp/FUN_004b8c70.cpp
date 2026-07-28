// Name: core_hotdemon.cpp_FUN_004b8c70
// Address: 004b8c70
// Address Range: [[004b8c70, 004b8c8b]]
// Convention: unknown
// Signature: void core_hotdemon_cpp_FUN_004b8c70(void)

#include "nocturne.h"

void core_hotdemon_cpp_FUN_004b8c70(void)

{
  CHotDemon *this_ptr;
  
  this_ptr = (CHotDemon *)FUN_0056497c(0xbd58);
  if (this_ptr == (CHotDemon *)0x0) {
    return;
  }
  core_hotdemon_cpp_CHotDemon_ctor_FUN_004b8ca0(this_ptr);
  return;
}
