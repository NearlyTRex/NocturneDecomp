// Name: core_shadow.cpp_FUN_00545f90
// Address: 00545f90
// Address Range: [[00545f90, 00545fab]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_00545f90(void)

#include "nocturne.h"

void core_shadow_cpp_FUN_00545f90(void)

{
  CDemonShadow *this_ptr;
  
  this_ptr = (CDemonShadow *)FUN_005a3cb2(0xd0e8);
  if (this_ptr == (CDemonShadow *)0x0) {
    return;
  }
  core_shadow_cpp_CDemonShadow_ctor_FUN_00545fc0(this_ptr);
  return;
}
