// Name: core_simbox.cpp_factoryFuncSimBox_FUN_0053ff80
// Address: 0053ff80
// Address Range: [[0053ff80, 0053ff9b]]
// Convention: unknown
// Signature: void core_simbox_cpp_factoryFuncSimBox_FUN_0053ff80(void)

#include "nocturne.h"

void core_simbox_cpp_factoryFuncSimBox_FUN_0053ff80(void)

{
  CSimBox *this_ptr;
  
  this_ptr = (CSimBox *)operator_new(0x728);
  if (this_ptr == (CSimBox *)0x0) {
    return;
  }
  core_simbox_cpp_CSimBox_ctor_FUN_0053ffb0(this_ptr);
  return;
}
