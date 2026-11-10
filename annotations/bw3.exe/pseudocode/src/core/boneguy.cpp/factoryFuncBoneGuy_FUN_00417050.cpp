// Name: core_boneguy.cpp_factoryFuncBoneGuy_FUN_00417050
// Address: 00417050
// Address Range: [[00417050, 0041706b]]
// Convention: unknown
// Signature: void core_boneguy_cpp_factoryFuncBoneGuy_FUN_00417050(void)

#include "nocturne.h"

void core_boneguy_cpp_factoryFuncBoneGuy_FUN_00417050(void)

{
  CBoneGuy *this_ptr;
  
  this_ptr = (CBoneGuy *)debugAllocTracked1(0xd698);
  if (this_ptr == (CBoneGuy *)0x0) {
    return;
  }
  core_boneguy_cpp_CBoneGuy_ctor_FUN_00417400(this_ptr);
  return;
}
