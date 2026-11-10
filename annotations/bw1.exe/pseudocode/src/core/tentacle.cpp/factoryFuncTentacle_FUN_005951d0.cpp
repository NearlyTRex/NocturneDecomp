// Name: core_tentacle.cpp_factoryFuncTentacle_FUN_005951d0
// Address: 005951d0
// Address Range: [[005951d0, 005951eb]]
// Convention: unknown
// Signature: void core_tentacle_cpp_factoryFuncTentacle_FUN_005951d0(void)

#include "nocturne.h"

void core_tentacle_cpp_factoryFuncTentacle_FUN_005951d0(void)

{
  CTentacle *this_ptr;
  
  this_ptr = (CTentacle *)debugAllocTracked1(0xc2d8);
  if (this_ptr == (CTentacle *)0x0) {
    return;
  }
  core_tentacle_cpp_CTentacle_ctor_FUN_00595200(this_ptr);
  return;
}
