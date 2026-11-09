// Name: core_hag.cpp_factoryFuncHag_FUN_005aa5d0
// Address: 005aa5d0
// Address Range: [[005aa5d0, 005aa5eb]]
// Convention: unknown
// Signature: void core_hag_cpp_factoryFuncHag_FUN_005aa5d0(void)

#include "nocturne.h"

void core_hag_cpp_factoryFuncHag_FUN_005aa5d0(void)

{
  CHag *this_ptr;
  
  this_ptr = (CHag *)FUN_005b8be2(0x11860);
  if (this_ptr == (CHag *)0x0) {
    return;
  }
  core_hag_cpp_CHag_ctor_FUN_005aa600(this_ptr);
  return;
}
