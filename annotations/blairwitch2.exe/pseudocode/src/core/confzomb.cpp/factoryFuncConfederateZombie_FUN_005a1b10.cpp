// Name: core_confzomb.cpp_factoryFuncConfederateZombie_FUN_005a1b10
// Address: 005a1b10
// Address Range: [[005a1b10, 005a1b2b]]
// Convention: unknown
// Signature: void core_confzomb_cpp_factoryFuncConfederateZombie_FUN_005a1b10(void)

#include "nocturne.h"

void core_confzomb_cpp_factoryFuncConfederateZombie_FUN_005a1b10(void)

{
  CConfederateZombie *this_ptr;
  
  this_ptr = (CConfederateZombie *)FUN_005b8be2(0x11858);
  if (this_ptr == (CConfederateZombie *)0x0) {
    return;
  }
  core_confzomb_cpp_CConfederateZombie_ctor_FUN_005a1b40(this_ptr);
  return;
}
