// Name: core_teleport.cpp_factoryFuncTeleportDest_FUN_00594e40
// Address: 00594e40
// Address Range: [[00594e40, 00594e5b]]
// Convention: unknown
// Signature: void core_teleport_cpp_factoryFuncTeleportDest_FUN_00594e40(void)

#include "nocturne.h"

void core_teleport_cpp_factoryFuncTeleportDest_FUN_00594e40(void)

{
  CTeleportDest *this_ptr;
  
  this_ptr = (CTeleportDest *)debugAllocTracked1(0x158);
  if (this_ptr == (CTeleportDest *)0x0) {
    return;
  }
  core_teleport_cpp_CTeleportDest_ctor_FUN_00594e70(this_ptr);
  return;
}
