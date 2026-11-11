// Name: core_crate.cpp_factoryFuncCrate_FUN_00448fe0
// Address: 00448fe0
// Address Range: [[00448fe0, 00448ffb]]
// Convention: unknown
// Signature: void core_crate_cpp_factoryFuncCrate_FUN_00448fe0(void)

#include "nocturne.h"

void core_crate_cpp_factoryFuncCrate_FUN_00448fe0(void)

{
  CCrate *this_ptr;
  
  this_ptr = (CCrate *)operator_new(0x2fc);
  if (this_ptr == (CCrate *)0x0) {
    return;
  }
  core_crate_cpp_CCrate_ctor_FUN_00449010(this_ptr);
  return;
}
