// Name: core_ghoul.cpp_factoryFuncGhoul_FUN_004c68b0
// Address: 004c68b0
// Address Range: [[004c68b0, 004c68cb]]
// Convention: __cdecl
// Signature: CGhoul * __cdecl core_ghoul_cpp_factoryFuncGhoul_FUN_004c68b0(void)

#include "nocturne.h"

CGhoul * __cdecl core_ghoul_cpp_factoryFuncGhoul_FUN_004c68b0(void)

{
  CGhoul *pCVar1;
  
  pCVar1 = (CGhoul *)operator_new(0xd0d0);
  if (pCVar1 == (CGhoul *)0x0) {
    return (CGhoul *)0x0;
  }
  pCVar1 = core_ghoul_cpp_CGhoul_ctor_FUN_004c68e0(pCVar1);
  return pCVar1;
}
