// Name: core_meleeaxe.cpp_factoryFuncMeleeAxe_FUN_0059d1f0
// Address: 0059d1f0
// Address Range: [[0059d1f0, 0059d20b]]
// Convention: unknown
// Signature: void core_meleeaxe_cpp_factoryFuncMeleeAxe_FUN_0059d1f0(void)

#include "nocturne.h"

void core_meleeaxe_cpp_factoryFuncMeleeAxe_FUN_0059d1f0(void)

{
  CMeleeAxe *this_ptr;
  
  this_ptr = (CMeleeAxe *)FUN_005b8be2(0x828);
  if (this_ptr == (CMeleeAxe *)0x0) {
    return;
  }
  core_meleeaxe_cpp_CMeleeAxe_ctor_FUN_0059d220(this_ptr);
  return;
}
