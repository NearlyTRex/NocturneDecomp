// Name: core_ladder.cpp_factoryFuncLadder_FUN_004df620
// Address: 004df620
// Address Range: [[004df620, 004df63b]]
// Convention: __cdecl
// Signature: CLadder * __cdecl core_ladder_cpp_factoryFuncLadder_FUN_004df620(void)

#include "nocturne.h"

CLadder * __cdecl core_ladder_cpp_factoryFuncLadder_FUN_004df620(void)

{
  CLadder *pCVar1;
  
  pCVar1 = (CLadder *)operator_new(0x300);
  if (pCVar1 == (CLadder *)0x0) {
    return (CLadder *)0x0;
  }
  pCVar1 = core_ladder_cpp_CLadder_ctor_FUN_004df650(pCVar1);
  return pCVar1;
}
