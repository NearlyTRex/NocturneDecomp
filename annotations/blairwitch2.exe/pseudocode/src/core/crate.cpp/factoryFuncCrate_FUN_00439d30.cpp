// Name: core_crate.cpp_factoryFuncCrate_FUN_00439d30
// Address: 00439d30
// Address Range: [[00439d30, 00439d4b]]
// Convention: unknown
// Signature: void core_crate_cpp_factoryFuncCrate_FUN_00439d30(void)

#include "nocturne.h"

void core_crate_cpp_factoryFuncCrate_FUN_00439d30(void)

{
  CCrate *this_ptr;
  
  this_ptr = (CCrate *)operator_new(0x458);
  if (this_ptr == (CCrate *)0x0) {
    return;
  }
  core_crate_cpp_CCrate_ctor_FUN_00439d60(this_ptr);
  return;
}
