// Name: core_turret.cpp_factoryFuncTurret_FUN_005a2010
// Address: 005a2010
// Address Range: [[005a2010, 005a202b]]
// Convention: unknown
// Signature: void core_turret_cpp_factoryFuncTurret_FUN_005a2010(void)

#include "nocturne.h"

void core_turret_cpp_factoryFuncTurret_FUN_005a2010(void)

{
  CTurret *this_ptr;
  
  this_ptr = (CTurret *)debugAllocTracked1(0x8bc);
  if (this_ptr == (CTurret *)0x0) {
    return;
  }
  core_turret_cpp_CTurret_ctor_FUN_005a2040(this_ptr);
  return;
}
