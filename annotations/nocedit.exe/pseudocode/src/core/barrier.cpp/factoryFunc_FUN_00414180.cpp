// Name: core_barrier.cpp_factoryFunc_FUN_00414180
// Address: 00414180
// Address Range: [[00414180, 004141a2]]
// Convention: __cdecl
// Signature: CBarrier * __cdecl core_barrier_cpp_factoryFunc_FUN_00414180(void)

#include "nocturne.h"

CBarrier * __cdecl core_barrier_cpp_factoryFunc_FUN_00414180(void)

{
  CBarrier *pCVar1;
  
  pCVar1 = (CBarrier *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x230,"..\\core\\barrier.cpp",0x26);
  if (pCVar1 == (CBarrier *)0x0) {
    return (CBarrier *)0x0;
  }
  pCVar1 = core_barrier_cpp_CBarrier_ctor_FUN_004141c0(pCVar1);
  return pCVar1;
}
