// Name: core_zombie.cpp_FUN_0058ced0
// Address: 0058ced0
// Address Range: [[0058ced0, 0058ceeb]]
// Convention: unknown
// Signature: void core_zombie_cpp_FUN_0058ced0(void)

#include "nocturne.h"

void core_zombie_cpp_FUN_0058ced0(void)

{
  CZombieDemon *this_ptr;
  
  this_ptr = (CZombieDemon *)operator_new(0xd14c);
  if (this_ptr == (CZombieDemon *)0x0) {
    return;
  }
  core_zombie_cpp_CZombieDemon_ctor_FUN_0058cf00(this_ptr);
  return;
}
