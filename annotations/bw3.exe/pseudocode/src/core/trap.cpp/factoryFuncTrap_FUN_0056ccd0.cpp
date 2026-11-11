// Name: core_trap.cpp_factoryFuncTrap_FUN_0056ccd0
// Address: 0056ccd0
// Address Range: [[0056ccd0, 0056ccd0]]
// Convention: unknown
// Signature: void core_trap_cpp_factoryFuncTrap_FUN_0056ccd0(void)

#include "nocturne.h"

void core_trap_cpp_factoryFuncTrap_FUN_0056ccd0(void)

{
  CTrap *this_ptr;
  
  this_ptr = (CTrap *)operator_new(0x2dc);
  if (this_ptr == (CTrap *)0x0) {
    return;
  }
  core_trap_cpp_CTrap_ctor_FUN_0056cd00(this_ptr);
  return;
}
