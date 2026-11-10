// Name: core_teleport.cpp_factoryFuncTeleportDest_FUN_00572210
// Address: 00572210
// Address Range: [[00572210, 0057222b]]
// Convention: unknown
// Signature: void core_teleport_cpp_factoryFuncTeleportDest_FUN_00572210(void)

#include "nocturne.h"

void core_teleport_cpp_factoryFuncTeleportDest_FUN_00572210(void)

{
  CTeleportDest *this_ptr;
  
  this_ptr = (CTeleportDest *)debugAllocTracked1(0x2b4);
  if (this_ptr == (CTeleportDest *)0x0) {
    return;
  }
  core_teleport_cpp_CTeleportDest_ctor_FUN_00572240(this_ptr);
  return;
}
