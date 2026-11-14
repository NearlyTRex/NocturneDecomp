// Name: core_barrier.cpp_factoryFuncBarrier_FUN_00410c80
// Address: 00410c80
// Address Range: [[00410c80, 00410c9b]]
// Convention: __cdecl
// Signature: CBarrier * __cdecl core_barrier_cpp_factoryFuncBarrier_FUN_00410c80(void)

#include "nocturne.h"

CBarrier * __cdecl core_barrier_cpp_factoryFuncBarrier_FUN_00410c80(void)

{
  CBarrier *pCVar1;
  
  pCVar1 = (CBarrier *)operator_new(0x38c);
  if (pCVar1 == (CBarrier *)0x0) {
    return (CBarrier *)0x0;
  }
  pCVar1 = core_barrier_cpp_CBarrier_ctor_FUN_00410cb0(pCVar1);
  return pCVar1;
}
