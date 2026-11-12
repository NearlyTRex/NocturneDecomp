// Name: core_larva.cpp_factoryFuncLarva_FUN_004fd920
// Address: 004fd920
// Address Range: [[004fd920, 004fd93b]]
// Convention: __cdecl
// Signature: CLarva * __cdecl core_larva_cpp_factoryFuncLarva_FUN_004fd920(void)

#include "nocturne.h"

CLarva * __cdecl core_larva_cpp_factoryFuncLarva_FUN_004fd920(void)

{
  CLarva *pCVar1;
  
  pCVar1 = (CLarva *)operator_new(0xc274);
  if (pCVar1 == (CLarva *)0x0) {
    return (CLarva *)0x0;
  }
  pCVar1 = core_larva_cpp_CLarva_ctor_FUN_004fd950(pCVar1);
  return pCVar1;
}
