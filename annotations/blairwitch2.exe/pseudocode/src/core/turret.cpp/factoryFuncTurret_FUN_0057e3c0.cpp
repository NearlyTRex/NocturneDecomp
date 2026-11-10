// Name: core_turret.cpp_factoryFuncTurret_FUN_0057e3c0
// Address: 0057e3c0
// Address Range: [[0057e3c0, 0057e3db]]
// Convention: unknown
// Signature: void core_turret_cpp_factoryFuncTurret_FUN_0057e3c0(void)

#include "nocturne.h"

void core_turret_cpp_factoryFuncTurret_FUN_0057e3c0(void)

{
  CTurret *this_ptr;
  
  this_ptr = (CTurret *)debugAllocTracked1(0xa18);
  if (this_ptr == (CTurret *)0x0) {
    return;
  }
  core_turret_cpp_CTurret_ctor_FUN_0057e3f0(this_ptr);
  return;
}
