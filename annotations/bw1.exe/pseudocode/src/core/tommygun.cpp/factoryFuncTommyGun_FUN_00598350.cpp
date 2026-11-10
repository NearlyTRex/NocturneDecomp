// Name: core_tommygun.cpp_factoryFuncTommyGun_FUN_00598350
// Address: 00598350
// Address Range: [[00598350, 0059836b]]
// Convention: unknown
// Signature: void core_tommygun_cpp_factoryFuncTommyGun_FUN_00598350(void)

#include "nocturne.h"

void core_tommygun_cpp_factoryFuncTommyGun_FUN_00598350(void)

{
  CTommyGun *this_ptr;
  
  this_ptr = (CTommyGun *)debugAllocTracked1(0x584);
  if (this_ptr == (CTommyGun *)0x0) {
    return;
  }
  core_tommygun_cpp_CTommyGun_ctor_FUN_00598380(this_ptr);
  return;
}
