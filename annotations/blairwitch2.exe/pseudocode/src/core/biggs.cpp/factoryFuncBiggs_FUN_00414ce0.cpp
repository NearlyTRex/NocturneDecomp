// Name: core_biggs.cpp_factoryFuncBiggs_FUN_00414ce0
// Address: 00414ce0
// Address Range: [[00414ce0, 00414cfb]]
// Convention: unknown
// Signature: void core_biggs_cpp_factoryFuncBiggs_FUN_00414ce0(void)

#include "nocturne.h"

void core_biggs_cpp_factoryFuncBiggs_FUN_00414ce0(void)

{
  CBiggs *this_ptr;
  
  this_ptr = (CBiggs *)FUN_005b8be2(0x1190c);
  if (this_ptr == (CBiggs *)0x0) {
    return;
  }
  core_biggs_cpp_CBiggs_ctor_FUN_00414d10(this_ptr);
  return;
}
