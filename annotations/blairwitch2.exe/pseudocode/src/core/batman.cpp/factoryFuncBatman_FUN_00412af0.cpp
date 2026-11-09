// Name: core_batman.cpp_factoryFuncBatman_FUN_00412af0
// Address: 00412af0
// Address Range: [[00412af0, 00412b0b]]
// Convention: unknown
// Signature: void core_batman_cpp_factoryFuncBatman_FUN_00412af0(void)

#include "nocturne.h"

void core_batman_cpp_factoryFuncBatman_FUN_00412af0(void)

{
  CBatman *this_ptr;
  
  this_ptr = (CBatman *)FUN_005b8be2(0x10bb4);
  if (this_ptr == (CBatman *)0x0) {
    return;
  }
  core_batman_cpp_CBatman_ctor_FUN_00412b20(this_ptr);
  return;
}
