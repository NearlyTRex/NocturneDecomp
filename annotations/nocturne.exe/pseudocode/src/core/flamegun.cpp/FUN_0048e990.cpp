// Name: core_flamegun.cpp_FUN_0048e990
// Address: 0048e990
// Address Range: [[0048e990, 0048e9ab]]
// Convention: unknown
// Signature: void core_flamegun_cpp_FUN_0048e990(void)

#include "nocturne.h"

void core_flamegun_cpp_FUN_0048e990(void)

{
  int iVar1;
  
  iVar1 = FUN_0056497c(0x580);
  if (iVar1 == 0) {
    return;
  }
  core_flamegun_cpp_CFlameThrower_ctor_FUN_0048e9c0(iVar1);
  return;
}
