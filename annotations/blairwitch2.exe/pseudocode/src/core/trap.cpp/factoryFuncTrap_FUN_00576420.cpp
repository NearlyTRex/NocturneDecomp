// Name: core_trap.cpp_factoryFuncTrap_FUN_00576420
// Address: 00576420
// Address Range: [[00576420, 0057643b]]
// Convention: unknown
// Signature: void core_trap_cpp_factoryFuncTrap_FUN_00576420(void)

#include "nocturne.h"

void core_trap_cpp_factoryFuncTrap_FUN_00576420(void)

{
  CTrap *this_ptr;
  
  this_ptr = (CTrap *)operator_new(0x438);
  if (this_ptr == (CTrap *)0x0) {
    return;
  }
  core_trap_cpp_CTrap_ctor_FUN_00576450(this_ptr);
  return;
}
