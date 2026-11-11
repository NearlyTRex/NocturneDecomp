// Name: core_boneguy.cpp_factoryFuncBoneGuy_FUN_00417f20
// Address: 00417f20
// Address Range: [[00417f20, 00417f3b]]
// Convention: unknown
// Signature: void core_boneguy_cpp_factoryFuncBoneGuy_FUN_00417f20(void)

#include "nocturne.h"

void core_boneguy_cpp_factoryFuncBoneGuy_FUN_00417f20(void)

{
  CBoneGuy *this_ptr;
  
  this_ptr = (CBoneGuy *)operator_new(0x11120);
  if (this_ptr == (CBoneGuy *)0x0) {
    return;
  }
  core_boneguy_cpp_CBoneGuy_ctor_FUN_004182d0(this_ptr);
  return;
}
