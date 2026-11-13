// Name: core_flintlck.cpp_factoryFuncFlintlock_FUN_004ae7b0
// Address: 004ae7b0
// Address Range: [[004ae7b0, 004ae7cb]]
// Convention: __cdecl
// Signature: CFlintlock * __cdecl core_flintlck_cpp_factoryFuncFlintlock_FUN_004ae7b0(void)

#include "nocturne.h"

CFlintlock * __cdecl core_flintlck_cpp_factoryFuncFlintlock_FUN_004ae7b0(void)

{
  CFlintlock *pCVar1;
  
  pCVar1 = (CFlintlock *)operator_new(0x594);
  if (pCVar1 == (CFlintlock *)0x0) {
    return (CFlintlock *)0x0;
  }
  pCVar1 = core_flintlck_cpp_CFlintlock_ctor_FUN_004ae7e0(pCVar1);
  return pCVar1;
}
