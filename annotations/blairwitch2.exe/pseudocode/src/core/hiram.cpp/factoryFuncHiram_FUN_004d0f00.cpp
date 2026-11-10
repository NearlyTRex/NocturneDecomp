// Name: core_hiram.cpp_factoryFuncHiram_FUN_004d0f00
// Address: 004d0f00
// Address Range: [[004d0f00, 004d0f1b]]
// Convention: unknown
// Signature: void core_hiram_cpp_factoryFuncHiram_FUN_004d0f00(void)

#include "nocturne.h"

void core_hiram_cpp_factoryFuncHiram_FUN_004d0f00(void)

{
  CHiram *this_ptr;
  
  this_ptr = (CHiram *)debugAllocTracked1(0x243ac);
  if (this_ptr == (CHiram *)0x0) {
    return;
  }
  core_hiram_cpp_CHiram_ctor_FUN_004d0f30(this_ptr);
  return;
}
