// Name: core_flamegun.cpp_factoryFuncFlameThrower_FUN_004a0ce0
// Address: 004a0ce0
// Address Range: [[004a0ce0, 004a0cfb]]
// Convention: __cdecl
// Signature: CFlameThrower * __cdecl core_flamegun_cpp_factoryFuncFlameThrower_FUN_004a0ce0(void)

#include "nocturne.h"

CFlameThrower * __cdecl core_flamegun_cpp_factoryFuncFlameThrower_FUN_004a0ce0(void)

{
  CFlameThrower *pCVar1;
  
  pCVar1 = (CFlameThrower *)operator_new(0x6e4);
  if (pCVar1 == (CFlameThrower *)0x0) {
    return (CFlameThrower *)0x0;
  }
  pCVar1 = core_flamegun_cpp_CFlameThrower_ctor_FUN_004a0d10(pCVar1);
  return pCVar1;
}
