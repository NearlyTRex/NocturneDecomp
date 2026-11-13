// Name: core_blundrbs.cpp_factoryFuncBlunderbus_FUN_004103c0
// Address: 004103c0
// Address Range: [[004103c0, 004103db]]
// Convention: __cdecl
// Signature: CBlunderbus * __cdecl core_blundrbs_cpp_factoryFuncBlunderbus_FUN_004103c0(void)

#include "nocturne.h"

CBlunderbus * __cdecl core_blundrbs_cpp_factoryFuncBlunderbus_FUN_004103c0(void)

{
  CBlunderbus *pCVar1;
  
  pCVar1 = (CBlunderbus *)operator_new(0x598);
  if (pCVar1 == (CBlunderbus *)0x0) {
    return (CBlunderbus *)0x0;
  }
  pCVar1 = core_blundrbs_cpp_CBlunderbus_ctor_FUN_004103f0(pCVar1);
  return pCVar1;
}
