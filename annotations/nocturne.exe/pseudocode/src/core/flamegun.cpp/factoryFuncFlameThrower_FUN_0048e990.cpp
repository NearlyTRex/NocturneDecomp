// Name: core_flamegun.cpp_factoryFuncFlameThrower_FUN_0048e990
// Address: 0048e990
// Address Range: [[0048e990, 0048e9ab]]
// Convention: __cdecl
// Signature: CFlameThrower * __cdecl core_flamegun_cpp_factoryFuncFlameThrower_FUN_0048e990(void)

#include "nocturne.h"

CFlameThrower * __cdecl core_flamegun_cpp_factoryFuncFlameThrower_FUN_0048e990(void)

{
  CFlameThrower *pCVar1;
  
  pCVar1 = operator_new(0x580);
  if (pCVar1 == (CFlameThrower *)0x0) {
    return (CFlameThrower *)0x0;
  }
  pCVar1 = core_flamegun_cpp_CFlameThrower_ctor_FUN_0048e9c0(pCVar1);
  return pCVar1;
}
