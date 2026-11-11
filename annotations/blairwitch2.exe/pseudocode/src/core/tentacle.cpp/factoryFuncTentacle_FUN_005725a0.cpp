// Name: core_tentacle.cpp_factoryFuncTentacle_FUN_005725a0
// Address: 005725a0
// Address Range: [[005725a0, 005725bb]]
// Convention: unknown
// Signature: void core_tentacle_cpp_factoryFuncTentacle_FUN_005725a0(void)

#include "nocturne.h"

void core_tentacle_cpp_factoryFuncTentacle_FUN_005725a0(void)

{
  CTentacle *this_ptr;
  
  this_ptr = (CTentacle *)operator_new(0x10b68);
  if (this_ptr == (CTentacle *)0x0) {
    return;
  }
  core_tentacle_cpp_CTentacle_ctor_FUN_005725d0(this_ptr);
  return;
}
