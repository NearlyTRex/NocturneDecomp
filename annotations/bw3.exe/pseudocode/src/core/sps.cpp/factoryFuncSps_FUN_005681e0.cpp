// Name: core_sps.cpp_factoryFuncSps_FUN_005681e0
// Address: 005681e0
// Address Range: [[005681e0, 005681fb]]
// Convention: unknown
// Signature: void core_sps_cpp_factoryFuncSps_FUN_005681e0(void)

#include "nocturne.h"

void core_sps_cpp_factoryFuncSps_FUN_005681e0(void)

{
  CSps *this_ptr;
  
  this_ptr = (CSps *)operator_new(0x594);
  if (this_ptr == (CSps *)0x0) {
    return;
  }
  core_sps_cpp_CSps_ctor_FUN_00568210(this_ptr);
  return;
}
