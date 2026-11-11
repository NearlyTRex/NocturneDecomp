// Name: core_teleport.cpp_factoryFuncTeleportDest_FUN_00568d20
// Address: 00568d20
// Address Range: [[00568d20, 00568d3b]]
// Convention: unknown
// Signature: void core_teleport_cpp_factoryFuncTeleportDest_FUN_00568d20(void)

#include "nocturne.h"

void core_teleport_cpp_factoryFuncTeleportDest_FUN_00568d20(void)

{
  CTeleportDest *this_ptr;
  
  this_ptr = (CTeleportDest *)operator_new(0x158);
  if (this_ptr == (CTeleportDest *)0x0) {
    return;
  }
  core_teleport_cpp_CTeleportDest_ctor_FUN_00568d50(this_ptr);
  return;
}
