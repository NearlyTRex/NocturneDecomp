// Name: core_ghoul.cpp_factoryFuncGhoul_FUN_004c15b0
// Address: 004c15b0
// Address Range: [[004c15b0, 004c15cb]]
// Convention: __cdecl
// Signature: CGhoul * __cdecl core_ghoul_cpp_factoryFuncGhoul_FUN_004c15b0(void)

#include "nocturne.h"

CGhoul * __cdecl core_ghoul_cpp_factoryFuncGhoul_FUN_004c15b0(void)

{
  CGhoul *pCVar1;
  
  pCVar1 = (CGhoul *)operator_new(0x10b74);
  if (pCVar1 == (CGhoul *)0x0) {
    return (CGhoul *)0x0;
  }
  pCVar1 = core_ghoul_cpp_CGhoul_ctor_FUN_004c15e0(pCVar1);
  return pCVar1;
}
