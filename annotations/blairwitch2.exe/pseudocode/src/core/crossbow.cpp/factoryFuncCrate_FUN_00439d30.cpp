// Name: core_crossbow.cpp_factoryFuncCrate_FUN_00439d30
// Address: 00439d30
// Address Range: [[00439d30, 00439d4b]]
// Convention: unknown
// Signature: void core_crossbow_cpp_factoryFuncCrate_FUN_00439d30(void)

#include "nocturne.h"

void core_crossbow_cpp_factoryFuncCrate_FUN_00439d30(void)

{
  CCrate *this_ptr;
  
  this_ptr = (CCrate *)FUN_005b8be2(0x458);
  if (this_ptr == (CCrate *)0x0) {
    return;
  }
  core_crate_cpp_CCrate_ctor_FUN_00439d60(this_ptr);
  return;
}
