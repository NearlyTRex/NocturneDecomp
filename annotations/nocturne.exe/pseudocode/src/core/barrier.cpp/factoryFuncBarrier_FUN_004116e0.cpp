// Name: core_barrier.cpp_factoryFuncBarrier_FUN_004116e0
// Address: 004116e0
// Address Range: [[004116e0, 004116fb]]
// Convention: __cdecl
// Signature: CBarrier * __cdecl core_barrier_cpp_factoryFuncBarrier_FUN_004116e0(void)

#include "nocturne.h"

CBarrier * __cdecl core_barrier_cpp_factoryFuncBarrier_FUN_004116e0(void)

{
  CBarrier *pCVar1;
  
  pCVar1 = operator_new(0x228);
  if (pCVar1 == (CBarrier *)0x0) {
    return (CBarrier *)0x0;
  }
  pCVar1 = core_barrier_cpp_CBarrier_ctor_FUN_00411710(pCVar1);
  return pCVar1;
}
