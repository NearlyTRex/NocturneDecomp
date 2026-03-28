// Name: core_flamegun.cpp_factoryFunc_FUN_004cb840
// Address: 004cb840
// Address Range: [[004cb840, 004cb862]]
// Convention: __cdecl
// Signature: CFlameThrower * __cdecl core_flamegun_cpp_factoryFunc_FUN_004cb840(void)

#include "nocturne.h"

CFlameThrower * __cdecl core_flamegun_cpp_factoryFunc_FUN_004cb840(void)

{
  CFlameThrower *pCVar1;
  
  pCVar1 = (CFlameThrower *)shape_memdbg_cpp_debugAllocTracked_FUN_0050f1b0(0x588,"..\\core\\flamegun.cpp",0x2a);
  if (pCVar1 == (CFlameThrower *)0x0) {
    return (CFlameThrower *)0x0;
  }
  pCVar1 = core_flamegun_cpp_CFlameThrower_ctor_FUN_004cb880(pCVar1);
  return pCVar1;
}
