// Name: core_teleport.cpp_factoryFuncTeleport_FUN_00594ef0
// Address: 00594ef0
// Address Range: [[00594ef0, 00594f0b]]
// Convention: unknown
// Signature: void core_teleport_cpp_factoryFuncTeleport_FUN_00594ef0(void)

#include "nocturne.h"

void core_teleport_cpp_factoryFuncTeleport_FUN_00594ef0(void)

{
  CTeleport *this_ptr;
  
  this_ptr = (CTeleport *)debugAllocTracked1(0x168);
  if (this_ptr == (CTeleport *)0x0) {
    return;
  }
  core_teleport_cpp_CTeleport_ctor_FUN_00594f20(this_ptr);
  return;
}
