// Name: core_sentinel.cpp_factoryFuncSentinel_FUN_0054b9e0
// Address: 0054b9e0
// Address Range: [[0054b9e0, 0054b9fb]]
// Convention: __cdecl
// Signature: CSentinel * __cdecl core_sentinel_cpp_factoryFuncSentinel_FUN_0054b9e0(void)

#include "nocturne.h"

CSentinel * __cdecl core_sentinel_cpp_factoryFuncSentinel_FUN_0054b9e0(void)

{
  CSentinel *pCVar1;
  
  pCVar1 = (CSentinel *)operator_new(0xc270);
  if (pCVar1 == (CSentinel *)0x0) {
    return (CSentinel *)0x0;
  }
  pCVar1 = core_sentinel_cpp_CSentinel_ctor_FUN_0054ba10(pCVar1);
  return pCVar1;
}
