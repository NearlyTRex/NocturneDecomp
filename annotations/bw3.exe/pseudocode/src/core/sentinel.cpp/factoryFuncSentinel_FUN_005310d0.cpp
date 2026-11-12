// Name: core_sentinel.cpp_factoryFuncSentinel_FUN_005310d0
// Address: 005310d0
// Address Range: [[005310d0, 005310eb]]
// Convention: __cdecl
// Signature: CSentinel * __cdecl core_sentinel_cpp_factoryFuncSentinel_FUN_005310d0(void)

#include "nocturne.h"

CSentinel * __cdecl core_sentinel_cpp_factoryFuncSentinel_FUN_005310d0(void)

{
  CSentinel *pCVar1;
  
  pCVar1 = (CSentinel *)operator_new(0xd05c);
  if (pCVar1 == (CSentinel *)0x0) {
    return (CSentinel *)0x0;
  }
  pCVar1 = core_sentinel_cpp_CSentinel_ctor_FUN_00531100(pCVar1);
  return pCVar1;
}
