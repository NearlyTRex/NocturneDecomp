// Name: core_barrier.cpp_factoryFuncBarrier_FUN_00410800
// Address: 00410800
// Address Range: [[00410800, 0041081b]]
// Convention: __cdecl
// Signature: CBarrier * __cdecl core_barrier_cpp_factoryFuncBarrier_FUN_00410800(void)

#include "nocturne.h"

CBarrier * __cdecl core_barrier_cpp_factoryFuncBarrier_FUN_00410800(void)

{
  CBarrier *pCVar1;
  
  pCVar1 = (CBarrier *)operator_new(0x230);
  if (pCVar1 == (CBarrier *)0x0) {
    return (CBarrier *)0x0;
  }
  pCVar1 = core_barrier_cpp_CBarrier_ctor_FUN_00410830(pCVar1);
  return pCVar1;
}
