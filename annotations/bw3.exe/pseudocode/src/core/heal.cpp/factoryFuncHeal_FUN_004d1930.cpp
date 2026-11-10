// Name: core_heal.cpp_factoryFuncHeal_FUN_004d1930
// Address: 004d1930
// Address Range: [[004d1930, 004d194b]]
// Convention: unknown
// Signature: void core_heal_cpp_factoryFuncHeal_FUN_004d1930(void)

#include "nocturne.h"

void core_heal_cpp_factoryFuncHeal_FUN_004d1930(void)

{
  CHeal *this_ptr;
  
  this_ptr = (CHeal *)debugAllocTracked1(0x59c);
  if (this_ptr == (CHeal *)0x0) {
    return;
  }
  core_heal_cpp_CHeal_ctor_FUN_004d1960(this_ptr);
  return;
}
