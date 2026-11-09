// Name: core_boneguy.cpp_factoryFuncBoneGuy_FUN_0041b3a0
// Address: 0041b3a0
// Address Range: [[0041b3a0, 0041b3bb]]
// Convention: unknown
// Signature: void core_boneguy_cpp_factoryFuncBoneGuy_FUN_0041b3a0(void)

#include "nocturne.h"

void core_boneguy_cpp_factoryFuncBoneGuy_FUN_0041b3a0(void)

{
  CBoneGuy *this_ptr;
  
  this_ptr = (CBoneGuy *)FUN_005c0f32(0xc890);
  if (this_ptr == (CBoneGuy *)0x0) {
    return;
  }
  core_boneguy_cpp_CBoneGuy_ctor_FUN_0041b750(this_ptr);
  return;
}
