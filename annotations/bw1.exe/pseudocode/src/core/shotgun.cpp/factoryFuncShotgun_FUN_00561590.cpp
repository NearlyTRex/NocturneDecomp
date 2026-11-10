// Name: core_shotgun.cpp_factoryFuncShotgun_FUN_00561590
// Address: 00561590
// Address Range: [[00561590, 005615ab]]
// Convention: unknown
// Signature: void core_shotgun_cpp_factoryFuncShotgun_FUN_00561590(void)

#include "nocturne.h"

void core_shotgun_cpp_factoryFuncShotgun_FUN_00561590(void)

{
  CShotgun *this_ptr;
  
  this_ptr = (CShotgun *)debugAllocTracked1(0x584);
  if (this_ptr == (CShotgun *)0x0) {
    return;
  }
  core_shotgun_cpp_CShotgun_ctor_FUN_005615c0(this_ptr);
  return;
}
