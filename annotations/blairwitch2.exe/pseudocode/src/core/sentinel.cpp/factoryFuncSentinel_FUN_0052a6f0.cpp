// Name: core_sentinel.cpp_factoryFuncSentinel_FUN_0052a6f0
// Address: 0052a6f0
// Address Range: [[0052a6f0, 0052a70b]]
// Convention: __cdecl
// Signature: CSentinel * __cdecl core_sentinel_cpp_factoryFuncSentinel_FUN_0052a6f0(void)

#include "nocturne.h"

CSentinel * __cdecl core_sentinel_cpp_factoryFuncSentinel_FUN_0052a6f0(void)

{
  CSentinel *pCVar1;
  
  pCVar1 = (CSentinel *)operator_new(0x10b00);
  if (pCVar1 == (CSentinel *)0x0) {
    return (CSentinel *)0x0;
  }
  pCVar1 = core_sentinel_cpp_CSentinel_ctor_FUN_0052a720(pCVar1);
  return pCVar1;
}
