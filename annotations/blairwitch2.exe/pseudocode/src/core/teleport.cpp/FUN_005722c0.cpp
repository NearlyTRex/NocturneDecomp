// Name: core_teleport.cpp_FUN_005722c0
// Address: 005722c0
// Address Range: [[005722c0, 005722db]]
// Convention: unknown
// Signature: void core_teleport_cpp_FUN_005722c0(void)

#include "nocturne.h"

void core_teleport_cpp_FUN_005722c0(void)

{
  CTeleport *this_ptr;
  
  this_ptr = (CTeleport *)FUN_005b8be2(0x2c4);
  if (this_ptr == (CTeleport *)0x0) {
    return;
  }
  core_teleport_cpp_CTeleport_ctor_FUN_005722f0(this_ptr);
  return;
}
