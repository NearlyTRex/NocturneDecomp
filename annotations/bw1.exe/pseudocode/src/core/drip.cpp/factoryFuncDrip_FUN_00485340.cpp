// Name: core_drip.cpp_factoryFuncDrip_FUN_00485340
// Address: 00485340
// Address Range: [[00485340, 0048535b]]
// Convention: unknown
// Signature: void core_drip_cpp_factoryFuncDrip_FUN_00485340(void)

#include "nocturne.h"

void core_drip_cpp_factoryFuncDrip_FUN_00485340(void)

{
  CDrip *this_ptr;
  
  this_ptr = (CDrip *)FUN_005c0f32(0x33c);
  if (this_ptr == (CDrip *)0x0) {
    return;
  }
  core_drip_cpp_CDrip_ctor_FUN_00485370(this_ptr);
  return;
}
