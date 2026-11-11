// Name: core_zombie.cpp_FUN_0058cc90
// Address: 0058cc90
// Address Range: [[0058cc90, 0058ccab]]
// Convention: unknown
// Signature: void core_zombie_cpp_FUN_0058cc90(void)

#include "nocturne.h"

void core_zombie_cpp_FUN_0058cc90(void)

{
  CZombieCemetery *this_ptr;
  
  this_ptr = (CZombieCemetery *)operator_new(0xd14c);
  if (this_ptr == (CZombieCemetery *)0x0) {
    return;
  }
  core_zombie_cpp_CZombieCemetery_ctor_FUN_0058ccc0(this_ptr);
  return;
}
