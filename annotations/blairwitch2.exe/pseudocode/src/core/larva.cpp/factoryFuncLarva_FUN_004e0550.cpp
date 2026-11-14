// Name: core_larva.cpp_factoryFuncLarva_FUN_004e0550
// Address: 004e0550
// Address Range: [[004e0550, 004e056b]]
// Convention: __cdecl
// Signature: CLarva * __cdecl core_larva_cpp_factoryFuncLarva_FUN_004e0550(void)

#include "nocturne.h"

CLarva * __cdecl core_larva_cpp_factoryFuncLarva_FUN_004e0550(void)

{
  CLarva *pCVar1;
  
  pCVar1 = (CLarva *)operator_new(0x10b04);
  if (pCVar1 == (CLarva *)0x0) {
    return (CLarva *)0x0;
  }
  pCVar1 = core_larva_cpp_CLarva_ctor_FUN_004e0580(pCVar1);
  return pCVar1;
}
