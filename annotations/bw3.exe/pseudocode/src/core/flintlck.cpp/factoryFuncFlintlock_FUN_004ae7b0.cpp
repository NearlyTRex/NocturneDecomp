// Name: core_flintlck.cpp_factoryFuncFlintlock_FUN_004ae7b0
// Address: 004ae7b0
// Address Range: [[004ae7b0, 004ae7cb]]
// Convention: unknown
// Signature: void core_flintlck_cpp_factoryFuncFlintlock_FUN_004ae7b0(void)

#include "nocturne.h"

void core_flintlck_cpp_factoryFuncFlintlock_FUN_004ae7b0(void)

{
  CFlintlock *this_ptr;
  
  this_ptr = (CFlintlock *)operator_new(0x594);
  if (this_ptr == (CFlintlock *)0x0) {
    return;
  }
  core_flintlck_cpp_CFlintlock_ctor_FUN_004ae7e0(this_ptr);
  return;
}
