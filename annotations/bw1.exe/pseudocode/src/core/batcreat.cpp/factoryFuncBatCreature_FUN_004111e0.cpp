// Name: core_batcreat.cpp_factoryFuncBatCreature_FUN_004111e0
// Address: 004111e0
// Address Range: [[004111e0, 004111fb]]
// Convention: unknown
// Signature: void core_batcreat_cpp_factoryFuncBatCreature_FUN_004111e0(void)

#include "nocturne.h"

void core_batcreat_cpp_factoryFuncBatCreature_FUN_004111e0(void)

{
  CBatCreature *this_ptr;
  
  this_ptr = (CBatCreature *)debugAllocTracked1(0xc2b4);
  if (this_ptr == (CBatCreature *)0x0) {
    return;
  }
  core_batcreat_cpp_CBatCreature_ctor_FUN_00411210(this_ptr);
  return;
}
