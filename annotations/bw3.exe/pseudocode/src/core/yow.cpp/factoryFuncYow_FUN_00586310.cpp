// Name: core_yow.cpp_factoryFuncYow_FUN_00586310
// Address: 00586310
// Address Range: [[00586310, 0058632b]]
// Convention: unknown
// Signature: void core_yow_cpp_factoryFuncYow_FUN_00586310(void)

#include "nocturne.h"

void core_yow_cpp_factoryFuncYow_FUN_00586310(void)

{
  CYow *this_ptr;
  
  this_ptr = (CYow *)debugAllocTracked1(0xd078);
  if (this_ptr == (CYow *)0x0) {
    return;
  }
  core_xform_cpp_CYow_ctor_FUN_00586340(this_ptr);
  return;
}
