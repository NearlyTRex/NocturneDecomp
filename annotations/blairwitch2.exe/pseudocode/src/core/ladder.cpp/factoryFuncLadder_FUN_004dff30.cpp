// Name: core_ladder.cpp_factoryFuncLadder_FUN_004dff30
// Address: 004dff30
// Address Range: [[004dff30, 004dff4b]]
// Convention: __cdecl
// Signature: CLadder * __cdecl core_ladder_cpp_factoryFuncLadder_FUN_004dff30(void)

#include "nocturne.h"

CLadder * __cdecl core_ladder_cpp_factoryFuncLadder_FUN_004dff30(void)

{
  CLadder *pCVar1;
  
  pCVar1 = (CLadder *)operator_new(0x45c);
  if (pCVar1 == (CLadder *)0x0) {
    return (CLadder *)0x0;
  }
  pCVar1 = core_ladder_cpp_CLadder_ctor_FUN_004dff60(pCVar1);
  return pCVar1;
}
