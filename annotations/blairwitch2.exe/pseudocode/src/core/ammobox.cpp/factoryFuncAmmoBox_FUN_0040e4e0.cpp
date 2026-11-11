// Name: core_ammobox.cpp_factoryFuncAmmoBox_FUN_0040e4e0
// Address: 0040e4e0
// Address Range: [[0040e4e0, 0040e4fb]]
// Convention: unknown
// Signature: void core_ammobox_cpp_factoryFuncAmmoBox_FUN_0040e4e0(void)

#include "nocturne.h"

void core_ammobox_cpp_factoryFuncAmmoBox_FUN_0040e4e0(void)

{
  CAmmoBox *this_ptr;
  
  this_ptr = (CAmmoBox *)operator_new(0x4a8);
  if (this_ptr == (CAmmoBox *)0x0) {
    return;
  }
  core_ammobox_cpp_CAmmoBox_ctor_FUN_0040e510(this_ptr);
  return;
}
