// Name: core_hellhag.cpp_factoryFuncHag_FUN_005aa5d0
// Address: 005aa5d0
// Address Range: [[005aa5d0, 005aa5eb]]
// Convention: unknown
// Signature: void core_hellhag_cpp_factoryFuncHag_FUN_005aa5d0(void)

#include "nocturne.h"

void core_hellhag_cpp_factoryFuncHag_FUN_005aa5d0(void)

{
  CHag *this_ptr;
  
  this_ptr = (CHag *)operator_new(0x11860);
  if (this_ptr == (CHag *)0x0) {
    return;
  }
  core_hellhag_cpp_CHag_ctor_FUN_005aa600(this_ptr);
  return;
}
