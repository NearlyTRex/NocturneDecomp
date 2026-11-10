// Name: core_dracbrid.cpp_factoryFuncDraculaBride_FUN_0047b080
// Address: 0047b080
// Address Range: [[0047b080, 0047b09b]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_factoryFuncDraculaBride_FUN_0047b080(void)

#include "nocturne.h"

void core_dracbrid_cpp_factoryFuncDraculaBride_FUN_0047b080(void)

{
  CDraculaBride *this_ptr;
  
  this_ptr = (CDraculaBride *)debugAllocTracked1(0xc410);
  if (this_ptr == (CDraculaBride *)0x0) {
    return;
  }
  core_dracbrid_cpp_CDraculaBride_ctor_FUN_0047b0b0(this_ptr);
  return;
}
