// Name: core_prye.cpp_factoryFuncPrye_FUN_00517f50
// Address: 00517f50
// Address Range: [[00517f50, 00517f6b]]
// Convention: unknown
// Signature: void core_prye_cpp_factoryFuncPrye_FUN_00517f50(void)

#include "nocturne.h"

void core_prye_cpp_factoryFuncPrye_FUN_00517f50(void)

{
  CPrye *this_ptr;
  
  this_ptr = (CPrye *)operator_new(0x20d04);
  if (this_ptr == (CPrye *)0x0) {
    return;
  }
  core_prye_cpp_CPrye_ctor_FUN_00517f80(this_ptr);
  return;
}
