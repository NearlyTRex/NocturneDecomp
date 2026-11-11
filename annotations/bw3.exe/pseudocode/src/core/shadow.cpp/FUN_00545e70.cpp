// Name: core_shadow.cpp_FUN_00545e70
// Address: 00545e70
// Address Range: [[00545e70, 00545e8b]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_00545e70(void)

#include "nocturne.h"

void core_shadow_cpp_FUN_00545e70(void)

{
  CShadowForest *this_ptr;
  
  this_ptr = (CShadowForest *)operator_new(0xd0e8);
  if (this_ptr == (CShadowForest *)0x0) {
    return;
  }
  core_shadow_cpp_CShadowForest_ctor_FUN_00545ea0(this_ptr);
  return;
}
