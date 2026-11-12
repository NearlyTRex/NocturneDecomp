// Name: core_flamegun.cpp_factoryFuncFlameThrower_FUN_004b9590
// Address: 004b9590
// Address Range: [[004b9590, 004b95ab]]
// Convention: __cdecl
// Signature: CFlameThrower * __cdecl core_flamegun_cpp_factoryFuncFlameThrower_FUN_004b9590(void)

#include "nocturne.h"

CFlameThrower * __cdecl core_flamegun_cpp_factoryFuncFlameThrower_FUN_004b9590(void)

{
  CFlameThrower *pCVar1;
  
  pCVar1 = (CFlameThrower *)operator_new(0x588);
  if (pCVar1 == (CFlameThrower *)0x0) {
    return (CFlameThrower *)0x0;
  }
  pCVar1 = core_flamegun_cpp_CFlameThrower_ctor_FUN_004b95c0(pCVar1);
  return pCVar1;
}
