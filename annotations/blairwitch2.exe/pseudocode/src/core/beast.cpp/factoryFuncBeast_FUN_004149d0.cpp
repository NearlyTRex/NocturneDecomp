// Name: core_beast.cpp_factoryFuncBeast_FUN_004149d0
// Address: 004149d0
// Address Range: [[004149d0, 004149eb]]
// Convention: unknown
// Signature: void core_beast_cpp_factoryFuncBeast_FUN_004149d0(void)

#include "nocturne.h"

void core_beast_cpp_factoryFuncBeast_FUN_004149d0(void)

{
  CBeast *this_ptr;
  
  this_ptr = (CBeast *)FUN_005b8be2(0x10af8);
  if (this_ptr == (CBeast *)0x0) {
    return;
  }
  core_beast_cpp_CBeast_ctor_FUN_00414a00(this_ptr);
  return;
}
