// Name: core_ammobox.cpp_constructor_FUN_00411560
// Address: 00411560
// Address Range: [[00411560, 00411582]]
// Convention: unknown
// Signature: undefined core_ammobox.cpp_constructor_FUN_00411560()

#include "nocturne.h"

void core_ammobox_cpp_constructor_FUN_00411560(void)

{
  CAmmoBox *this_ptr;
  
  this_ptr = (CAmmoBox *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x34c,"..\\core\\ammobox.cpp",0x25);
  if (this_ptr == (CAmmoBox *)0x0) {
    return;
  }
  core_ammobox_cpp_CAmmoBox_ctor_FUN_004115a0(this_ptr);
  return;
}
