// Name: core_tvbat.cpp_factoryFuncTVBat_FUN_00575000
// Address: 00575000
// Address Range: [[00575000, 0057501b]]
// Convention: unknown
// Signature: void core_tvbat_cpp_factoryFuncTVBat_FUN_00575000(void)

#include "nocturne.h"

void core_tvbat_cpp_factoryFuncTVBat_FUN_00575000(void)

{
  CTVBat *this_ptr;
  
  this_ptr = (CTVBat *)operator_new(0xd28c);
  if (this_ptr == (CTVBat *)0x0) {
    return;
  }
  core_tvbat_cpp_CTVBat_ctor_FUN_00575060(this_ptr);
  return;
}
