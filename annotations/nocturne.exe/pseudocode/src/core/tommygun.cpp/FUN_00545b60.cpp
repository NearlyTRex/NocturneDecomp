// Name: core_tommygun.cpp_FUN_00545b60
// Address: 00545b60
// Address Range: [[00545b60, 00545b7b]]
// Convention: unknown
// Signature: void core_tommygun_cpp_FUN_00545b60(void)

#include "nocturne.h"

void core_tommygun_cpp_FUN_00545b60(void)

{
  CTommyGun *this_ptr;
  
  this_ptr = (CTommyGun *)FUN_0056497c(0x57c);
  if (this_ptr == (CTommyGun *)0x0) {
    return;
  }
  core_tommygun_cpp_CTommyGun_ctor_FUN_00545b90(this_ptr);
  return;
}
