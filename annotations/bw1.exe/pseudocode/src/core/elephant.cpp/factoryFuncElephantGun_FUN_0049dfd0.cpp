// Name: core_elephant.cpp_factoryFuncElephantGun_FUN_0049dfd0
// Address: 0049dfd0
// Address Range: [[0049dfd0, 0049dfeb]]
// Convention: unknown
// Signature: void core_elephant_cpp_factoryFuncElephantGun_FUN_0049dfd0(void)

#include "nocturne.h"

void core_elephant_cpp_factoryFuncElephantGun_FUN_0049dfd0(void)

{
  CElephantGun *this_ptr;
  
  this_ptr = (CElephantGun *)FUN_005c0f32(0x584);
  if (this_ptr == (CElephantGun *)0x0) {
    return;
  }
  core_elephant_cpp_CElephantGun_ctor_FUN_0049e000(this_ptr);
  return;
}
