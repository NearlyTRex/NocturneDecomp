// Name: core_colonel.cpp_factoryFuncColonel_FUN_00444300
// Address: 00444300
// Address Range: [[00444300, 0044431b]]
// Convention: unknown
// Signature: void core_colonel_cpp_factoryFuncColonel_FUN_00444300(void)

#include "nocturne.h"

void core_colonel_cpp_factoryFuncColonel_FUN_00444300(void)

{
  CColonel *this_ptr;
  
  this_ptr = (CColonel *)operator_new(0x1ffc4);
  if (this_ptr == (CColonel *)0x0) {
    return;
  }
  core_colonel_cpp_CColonel_ctor_FUN_00444330(this_ptr);
  return;
}
