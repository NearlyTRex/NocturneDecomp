// Name: core_tommygun.cpp_factoryFuncTommyGun_FUN_00575730
// Address: 00575730
// Address Range: [[00575730, 0057574b]]
// Convention: unknown
// Signature: void core_tommygun_cpp_factoryFuncTommyGun_FUN_00575730(void)

#include "nocturne.h"

void core_tommygun_cpp_factoryFuncTommyGun_FUN_00575730(void)

{
  CTommyGun *this_ptr;
  
  this_ptr = (CTommyGun *)debugAllocTracked1(0x6e0);
  if (this_ptr == (CTommyGun *)0x0) {
    return;
  }
  core_tommygun_cpp_CTommyGun_ctor_FUN_00575760(this_ptr);
  return;
}
