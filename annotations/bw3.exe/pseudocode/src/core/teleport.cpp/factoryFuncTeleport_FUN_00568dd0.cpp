// Name: core_teleport.cpp_factoryFuncTeleport_FUN_00568dd0
// Address: 00568dd0
// Address Range: [[00568dd0, 00568deb]]
// Convention: unknown
// Signature: void core_teleport_cpp_factoryFuncTeleport_FUN_00568dd0(void)

#include "nocturne.h"

void core_teleport_cpp_factoryFuncTeleport_FUN_00568dd0(void)

{
  CTeleport *this_ptr;
  
  this_ptr = (CTeleport *)debugAllocTracked1(0x168);
  if (this_ptr == (CTeleport *)0x0) {
    return;
  }
  core_teleport_cpp_CTeleport_ctor_FUN_00568e00(this_ptr);
  return;
}
