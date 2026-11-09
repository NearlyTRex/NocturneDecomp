// Name: core_imp.cpp_factoryFuncImp_FUN_004d65c0
// Address: 004d65c0
// Address Range: [[004d65c0, 004d65db]]
// Convention: unknown
// Signature: void core_imp_cpp_factoryFuncImp_FUN_004d65c0(void)

#include "nocturne.h"

void core_imp_cpp_factoryFuncImp_FUN_004d65c0(void)

{
  CImp *this_ptr;
  
  this_ptr = (CImp *)FUN_005b8be2(0x10b30);
  if (this_ptr == (CImp *)0x0) {
    return;
  }
  core_imp_cpp_CImp_ctor_FUN_004d65f0(this_ptr);
  return;
}
