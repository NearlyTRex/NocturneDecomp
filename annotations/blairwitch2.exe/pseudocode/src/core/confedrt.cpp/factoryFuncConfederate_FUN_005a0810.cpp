// Name: core_confedrt.cpp_factoryFuncConfederate_FUN_005a0810
// Address: 005a0810
// Address Range: [[005a0810, 005a082b]]
// Convention: __cdecl
// Signature: CConfederate * __cdecl core_confedrt_cpp_factoryFuncConfederate_FUN_005a0810(void)

#include "nocturne.h"

CConfederate * __cdecl core_confedrt_cpp_factoryFuncConfederate_FUN_005a0810(void)

{
  CConfederate *pCVar1;
  
  pCVar1 = (CConfederate *)operator_new(0x11868);
  if (pCVar1 == (CConfederate *)0x0) {
    return (CConfederate *)0x0;
  }
  pCVar1 = core_confedrt_cpp_CConfederate_ctor_FUN_005a0840(pCVar1);
  return pCVar1;
}
