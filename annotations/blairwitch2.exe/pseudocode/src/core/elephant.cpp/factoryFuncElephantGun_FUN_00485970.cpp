// Name: core_elephant.cpp_factoryFuncElephantGun_FUN_00485970
// Address: 00485970
// Address Range: [[00485970, 0048598b]]
// Convention: unknown
// Signature: void core_elephant_cpp_factoryFuncElephantGun_FUN_00485970(void)

#include "nocturne.h"

void core_elephant_cpp_factoryFuncElephantGun_FUN_00485970(void)

{
  CElephantGun *this_ptr;
  
  this_ptr = (CElephantGun *)operator_new(0x6e0);
  if (this_ptr == (CElephantGun *)0x0) {
    return;
  }
  core_elephant_cpp_CElephantGun_ctor_FUN_004859a0(this_ptr);
  return;
}
