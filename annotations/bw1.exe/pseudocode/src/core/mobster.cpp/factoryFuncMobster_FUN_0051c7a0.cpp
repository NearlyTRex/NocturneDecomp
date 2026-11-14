// Name: core_mobster.cpp_factoryFuncMobster_FUN_0051c7a0
// Address: 0051c7a0
// Address Range: [[0051c7a0, 0051c7bb]]
// Convention: __cdecl
// Signature: CMobster * __cdecl core_mobster_cpp_factoryFuncMobster_FUN_0051c7a0(void)

#include "nocturne.h"

CMobster * __cdecl core_mobster_cpp_factoryFuncMobster_FUN_0051c7a0(void)

{
  CMobster *pCVar1;
  
  pCVar1 = (CMobster *)operator_new(0xc340);
  if (pCVar1 == (CMobster *)0x0) {
    return (CMobster *)0x0;
  }
  pCVar1 = core_mobster_cpp_CMobster_ctor_FUN_0051c7d0(pCVar1);
  return pCVar1;
}
