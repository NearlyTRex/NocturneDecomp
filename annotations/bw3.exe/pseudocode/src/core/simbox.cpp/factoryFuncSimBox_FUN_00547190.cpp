// Name: core_simbox.cpp_factoryFuncSimBox_FUN_00547190
// Address: 00547190
// Address Range: [[00547190, 005471ab]]
// Convention: unknown
// Signature: void core_simbox_cpp_factoryFuncSimBox_FUN_00547190(void)

#include "nocturne.h"

void core_simbox_cpp_factoryFuncSimBox_FUN_00547190(void)

{
  CSimBox *this_ptr;
  
  this_ptr = (CSimBox *)debugAllocTracked1(0x5cc);
  if (this_ptr == (CSimBox *)0x0) {
    return;
  }
  core_simbox_cpp_CSimBox_ctor_FUN_005471c0(this_ptr);
  return;
}
