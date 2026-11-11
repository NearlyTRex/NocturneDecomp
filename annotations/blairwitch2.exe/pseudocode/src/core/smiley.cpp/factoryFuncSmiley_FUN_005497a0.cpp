// Name: core_smiley.cpp_factoryFuncSmiley_FUN_005497a0
// Address: 005497a0
// Address Range: [[005497a0, 005497bb]]
// Convention: unknown
// Signature: void core_smiley_cpp_factoryFuncSmiley_FUN_005497a0(void)

#include "nocturne.h"

void core_smiley_cpp_factoryFuncSmiley_FUN_005497a0(void)

{
  CSmiley *this_ptr;
  
  this_ptr = (CSmiley *)operator_new(0x10b3c);
  if (this_ptr == (CSmiley *)0x0) {
    return;
  }
  core_smiley_cpp_CSmiley_ctor_FUN_005497d0(this_ptr);
  return;
}
