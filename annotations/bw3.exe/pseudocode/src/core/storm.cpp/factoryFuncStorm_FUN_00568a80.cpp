// Name: core_storm.cpp_factoryFuncStorm_FUN_00568a80
// Address: 00568a80
// Address Range: [[00568a80, 00568a9b]]
// Convention: unknown
// Signature: void core_storm_cpp_factoryFuncStorm_FUN_00568a80(void)

#include "nocturne.h"

void core_storm_cpp_factoryFuncStorm_FUN_00568a80(void)

{
  CStorm *this_ptr;
  
  this_ptr = (CStorm *)operator_new(0x594);
  if (this_ptr == (CStorm *)0x0) {
    return;
  }
  core_storm_cpp_CStorm_ctor_FUN_00568ab0(this_ptr);
  return;
}
