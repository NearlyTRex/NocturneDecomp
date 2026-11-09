// Name: core_tvbat.cpp_factoryFuncTVBat_FUN_005a3ee0
// Address: 005a3ee0
// Address Range: [[005a3ee0, 005a3efb]]
// Convention: unknown
// Signature: void core_tvbat_cpp_factoryFuncTVBat_FUN_005a3ee0(void)

#include "nocturne.h"

void core_tvbat_cpp_factoryFuncTVBat_FUN_005a3ee0(void)

{
  CTVBat *this_ptr;
  
  this_ptr = (CTVBat *)FUN_005c0f32(0xc4a0);
  if (this_ptr == (CTVBat *)0x0) {
    return;
  }
  core_tvbat_cpp_CTVBat_ctor_FUN_005a3f40(this_ptr);
  return;
}
