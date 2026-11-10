// Name: core_tvbat.cpp_factoryFuncTVBat_FUN_00580290
// Address: 00580290
// Address Range: [[00580290, 005802ab]]
// Convention: unknown
// Signature: void core_tvbat_cpp_factoryFuncTVBat_FUN_00580290(void)

#include "nocturne.h"

void core_tvbat_cpp_factoryFuncTVBat_FUN_00580290(void)

{
  CTVBat *this_ptr;
  
  this_ptr = (CTVBat *)debugAllocTracked1(0x10d30);
  if (this_ptr == (CTVBat *)0x0) {
    return;
  }
  core_tvbat_cpp_CTVBat_ctor_FUN_005802f0(this_ptr);
  return;
}
