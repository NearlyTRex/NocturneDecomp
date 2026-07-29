// Name: core_ammobox.cpp_FUN_0040f010
// Address: 0040f010
// Address Range: [[0040f010, 0040f02b]]
// Convention: unknown
// Signature: void core_ammobox_cpp_FUN_0040f010(void)

#include "nocturne.h"

void core_ammobox_cpp_FUN_0040f010(void)

{
  CAmmoBox *this_ptr;
  
  this_ptr = (CAmmoBox *)FUN_0056497c(0x344);
  if (this_ptr == (CAmmoBox *)0x0) {
    return;
  }
  core_ammobox_cpp_FUN_0040f040(this_ptr);
  return;
}
