// Name: core_baron.cpp_constructor_FUN_00413d00
// Address: 00413d00
// Address Range: [[00413d00, 00413d25]]
// Convention: unknown
// Signature: undefined core_baron.cpp_constructor_FUN_00413d00()

#include "nocturne.h"

void core_baron_cpp_constructor_FUN_00413d00(void)

{
  CBaronWeapon *this_ptr;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x57c,"..\\core\\baron.cpp",0x2ab);
  if (this_ptr == (CBaronWeapon *)0x0) {
    return;
  }
  core_baron_cpp_CBaronWeapon_ctor_FUN_00413d40(this_ptr);
  return;
}
