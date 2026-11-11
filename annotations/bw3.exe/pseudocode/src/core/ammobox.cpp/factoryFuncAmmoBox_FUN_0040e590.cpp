// Name: core_ammobox.cpp_factoryFuncAmmoBox_FUN_0040e590
// Address: 0040e590
// Address Range: [[0040e590, 0040e5ab]]
// Convention: unknown
// Signature: void core_ammobox_cpp_factoryFuncAmmoBox_FUN_0040e590(void)

#include "nocturne.h"

void core_ammobox_cpp_factoryFuncAmmoBox_FUN_0040e590(void)

{
  CAmmoBox *this_ptr;
  
  this_ptr = (CAmmoBox *)operator_new(0x34c);
  if (this_ptr == (CAmmoBox *)0x0) {
    return;
  }
  core_ammobox_cpp_CAmmoBox_ctor_FUN_0040e5c0(this_ptr);
  return;
}
