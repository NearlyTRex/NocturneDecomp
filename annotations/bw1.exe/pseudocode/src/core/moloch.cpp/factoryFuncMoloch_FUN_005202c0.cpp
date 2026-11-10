// Name: core_moloch.cpp_factoryFuncMoloch_FUN_005202c0
// Address: 005202c0
// Address Range: [[005202c0, 005202db]]
// Convention: unknown
// Signature: void core_moloch_cpp_factoryFuncMoloch_FUN_005202c0(void)

#include "nocturne.h"

void core_moloch_cpp_factoryFuncMoloch_FUN_005202c0(void)

{
  CMoloch *this_ptr;
  
  this_ptr = (CMoloch *)debugAllocTracked1(0x23060);
  if (this_ptr == (CMoloch *)0x0) {
    return;
  }
  core_moloch_cpp_CMoloch_ctor_FUN_005202f0(this_ptr);
  return;
}
