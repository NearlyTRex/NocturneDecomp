// Name: core_ghoul.cpp_factoryFuncGhoul_FUN_004ddd30
// Address: 004ddd30
// Address Range: [[004ddd30, 004ddd4b]]
// Convention: __cdecl
// Signature: CGhoul * __cdecl core_ghoul_cpp_factoryFuncGhoul_FUN_004ddd30(void)

#include "nocturne.h"

CGhoul * __cdecl core_ghoul_cpp_factoryFuncGhoul_FUN_004ddd30(void)

{
  CGhoul *pCVar1;
  
  pCVar1 = (CGhoul *)operator_new(0xc2e4);
  if (pCVar1 == (CGhoul *)0x0) {
    return (CGhoul *)0x0;
  }
  pCVar1 = core_ghoul_cpp_CGhoul_ctor_FUN_004ddd60(pCVar1);
  return pCVar1;
}
