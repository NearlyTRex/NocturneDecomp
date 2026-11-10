// Name: core_shadow.cpp_FUN_00545f00
// Address: 00545f00
// Address Range: [[00545f00, 00545f1b]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_00545f00(void)

#include "nocturne.h"

void core_shadow_cpp_FUN_00545f00(void)

{
  CSpiritShadow *this_ptr;
  
  this_ptr = (CSpiritShadow *)debugAllocTracked1(0xd0e8);
  if (this_ptr == (CSpiritShadow *)0x0) {
    return;
  }
  core_shadow_cpp_CSpiritShadow_ctor_FUN_00545f30(this_ptr);
  return;
}
