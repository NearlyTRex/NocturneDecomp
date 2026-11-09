// Name: core_imp.cpp_factoryFuncImp_FUN_004f27c0
// Address: 004f27c0
// Address Range: [[004f27c0, 004f27db]]
// Convention: unknown
// Signature: void core_imp_cpp_factoryFuncImp_FUN_004f27c0(void)

#include "nocturne.h"

void core_imp_cpp_factoryFuncImp_FUN_004f27c0(void)

{
  CImp *this_ptr;
  
  this_ptr = (CImp *)FUN_005c0f32(0xc2a0);
  if (this_ptr == (CImp *)0x0) {
    return;
  }
  core_imp_cpp_CImp_ctor_FUN_004f27f0(this_ptr);
  return;
}
