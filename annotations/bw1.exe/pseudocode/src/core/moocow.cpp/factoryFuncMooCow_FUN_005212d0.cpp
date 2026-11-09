// Name: core_moocow.cpp_factoryFuncMooCow_FUN_005212d0
// Address: 005212d0
// Address Range: [[005212d0, 005212eb]]
// Convention: unknown
// Signature: void core_moocow_cpp_factoryFuncMooCow_FUN_005212d0(void)

#include "nocturne.h"

void core_moocow_cpp_factoryFuncMooCow_FUN_005212d0(void)

{
  CMooCow *this_ptr;
  
  this_ptr = (CMooCow *)FUN_005c0f32(0xc1f4);
  if (this_ptr == (CMooCow *)0x0) {
    return;
  }
  core_moocow_cpp_CMooCow_ctor_FUN_00521300(this_ptr);
  return;
}
