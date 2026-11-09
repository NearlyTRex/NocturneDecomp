// Name: core_ammobox.cpp_factoryFuncAmmoBox_FUN_0040e080
// Address: 0040e080
// Address Range: [[0040e080, 0040e09b]]
// Convention: unknown
// Signature: void core_ammobox_cpp_factoryFuncAmmoBox_FUN_0040e080(void)

#include "nocturne.h"

void core_ammobox_cpp_factoryFuncAmmoBox_FUN_0040e080(void)

{
  CAmmoBox *this_ptr;
  
  this_ptr = (CAmmoBox *)FUN_005c0f32(0x34c);
  if (this_ptr == (CAmmoBox *)0x0) {
    return;
  }
  core_ammobox_cpp_CAmmoBox_ctor_FUN_0040e0b0(this_ptr);
  return;
}
