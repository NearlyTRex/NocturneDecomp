// Name: core_barrier.cpp_factoryFuncBarrier_FUN_0040ea90
// Address: 0040ea90
// Address Range: [[0040ea90, 0040eaab]]
// Convention: __cdecl
// Signature: CBarrier * __cdecl core_barrier_cpp_factoryFuncBarrier_FUN_0040ea90(void)

#include "nocturne.h"

CBarrier * __cdecl core_barrier_cpp_factoryFuncBarrier_FUN_0040ea90(void)

{
  CBarrier *pCVar1;
  
  pCVar1 = (CBarrier *)operator_new(0x230);
  if (pCVar1 == (CBarrier *)0x0) {
    return (CBarrier *)0x0;
  }
  pCVar1 = core_barrier_cpp_CBarrier_ctor_FUN_0040eac0(pCVar1);
  return pCVar1;
}
