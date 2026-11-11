// Name: core_hiram.cpp_factoryFuncHiram_FUN_004ed160
// Address: 004ed160
// Address Range: [[004ed160, 004ed17b]]
// Convention: unknown
// Signature: void core_hiram_cpp_factoryFuncHiram_FUN_004ed160(void)

#include "nocturne.h"

void core_hiram_cpp_factoryFuncHiram_FUN_004ed160(void)

{
  CHiram *this_ptr;
  
  this_ptr = (CHiram *)operator_new(0x1fb1c);
  if (this_ptr == (CHiram *)0x0) {
    return;
  }
  core_hiram_cpp_CHiram_ctor_FUN_004ed190(this_ptr);
  return;
}
