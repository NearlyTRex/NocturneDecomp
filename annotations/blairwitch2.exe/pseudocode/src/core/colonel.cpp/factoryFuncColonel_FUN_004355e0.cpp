// Name: core_colonel.cpp_factoryFuncColonel_FUN_004355e0
// Address: 004355e0
// Address Range: [[004355e0, 004355fb]]
// Convention: unknown
// Signature: void core_colonel_cpp_factoryFuncColonel_FUN_004355e0(void)

#include "nocturne.h"

void core_colonel_cpp_factoryFuncColonel_FUN_004355e0(void)

{
  CColonel *this_ptr;
  
  this_ptr = (CColonel *)operator_new(0x25658);
  if (this_ptr == (CColonel *)0x0) {
    return;
  }
  core_colonel_cpp_CColonel_ctor_FUN_00435610(this_ptr);
  return;
}
