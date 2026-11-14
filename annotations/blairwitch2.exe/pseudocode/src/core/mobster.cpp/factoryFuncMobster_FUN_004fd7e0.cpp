// Name: core_mobster.cpp_factoryFuncMobster_FUN_004fd7e0
// Address: 004fd7e0
// Address Range: [[004fd7e0, 004fd7fb]]
// Convention: __cdecl
// Signature: CMobster * __cdecl core_mobster_cpp_factoryFuncMobster_FUN_004fd7e0(void)

#include "nocturne.h"

CMobster * __cdecl core_mobster_cpp_factoryFuncMobster_FUN_004fd7e0(void)

{
  CMobster *pCVar1;
  
  pCVar1 = (CMobster *)operator_new(0x10bd0);
  if (pCVar1 == (CMobster *)0x0) {
    return (CMobster *)0x0;
  }
  pCVar1 = core_mobster_cpp_CMobster_ctor_FUN_004fd810(pCVar1);
  return pCVar1;
}
