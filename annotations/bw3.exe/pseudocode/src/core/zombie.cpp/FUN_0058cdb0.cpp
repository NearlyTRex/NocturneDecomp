// Name: core_zombie.cpp_FUN_0058cdb0
// Address: 0058cdb0
// Address Range: [[0058cdb0, 0058cdcb]]
// Convention: unknown
// Signature: void core_zombie_cpp_FUN_0058cdb0(void)

#include "nocturne.h"

void core_zombie_cpp_FUN_0058cdb0(void)

{
  CZombieSpirit *this_ptr;
  
  this_ptr = (CZombieSpirit *)operator_new(0xd14c);
  if (this_ptr == (CZombieSpirit *)0x0) {
    return;
  }
  core_zombie_cpp_CZombieSpirit_ctor_FUN_0058cde0(this_ptr);
  return;
}
