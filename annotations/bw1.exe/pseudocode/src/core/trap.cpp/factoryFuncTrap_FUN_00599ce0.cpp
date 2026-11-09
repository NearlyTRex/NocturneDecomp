// Name: core_trap.cpp_factoryFuncTrap_FUN_00599ce0
// Address: 00599ce0
// Address Range: [[00599ce0, 00599cfb]]
// Convention: unknown
// Signature: void core_trap_cpp_factoryFuncTrap_FUN_00599ce0(void)

#include "nocturne.h"

void core_trap_cpp_factoryFuncTrap_FUN_00599ce0(void)

{
  CTrap *this_ptr;
  
  this_ptr = (CTrap *)FUN_005c0f32(0x2dc);
  if (this_ptr == (CTrap *)0x0) {
    return;
  }
  core_trap_cpp_CTrap_ctor_FUN_00599d10(this_ptr);
  return;
}
