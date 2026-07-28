// Name: core_lightgun.cpp_FUN_004c6e00
// Address: 004c6e00
// Address Range: [[004c6e00, 004c6e1b]]
// Convention: unknown
// Signature: void core_lightgun_cpp_FUN_004c6e00(void)

#include "nocturne.h"

void core_lightgun_cpp_FUN_004c6e00(void)

{
  CLightGun *this_ptr;
  
  this_ptr = (CLightGun *)FUN_0056497c(0x588);
  if (this_ptr == (CLightGun *)0x0) {
    return;
  }
  core_lightgun_cpp_CLightGun_ctor_FUN_004c6e30(this_ptr);
  return;
}
