// Name: core_scat.cpp_factoryFuncScat_FUN_00540aa0
// Address: 00540aa0
// Address Range: [[00540aa0, 00540abb]]
// Convention: unknown
// Signature: void core_scat_cpp_factoryFuncScat_FUN_00540aa0(void)

#include "nocturne.h"

void core_scat_cpp_factoryFuncScat_FUN_00540aa0(void)

{
  CScat *this_ptr;
  
  this_ptr = (CScat *)debugAllocTracked1(0x1ffd8);
  if (this_ptr == (CScat *)0x0) {
    return;
  }
  core_scat_cpp_CScat_ctor_FUN_00540ad0(this_ptr);
  return;
}
