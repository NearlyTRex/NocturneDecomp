// Name: core_zombie.cpp_FUN_0058cd20
// Address: 0058cd20
// Address Range: [[0058cd20, 0058cd3b]]
// Convention: unknown
// Signature: void core_zombie_cpp_FUN_0058cd20(void)

#include "nocturne.h"

void core_zombie_cpp_FUN_0058cd20(void)

{
  CZombieForest *this_ptr;
  
  this_ptr = (CZombieForest *)operator_new(0xd14c);
  if (this_ptr == (CZombieForest *)0x0) {
    return;
  }
  core_zombie_cpp_CZombieForest_ctor_FUN_0058cd50(this_ptr);
  return;
}
