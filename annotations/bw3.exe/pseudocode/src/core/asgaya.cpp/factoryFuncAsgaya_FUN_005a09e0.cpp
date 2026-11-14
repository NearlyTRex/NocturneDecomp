// Name: core_asgaya.cpp_factoryFuncAsgaya_FUN_005a09e0
// Address: 005a09e0
// Address Range: [[005a09e0, 005a09fb]]
// Convention: __cdecl
// Signature: CAsgaya * __cdecl core_asgaya_cpp_factoryFuncAsgaya_FUN_005a09e0(void)

#include "nocturne.h"

CAsgaya * __cdecl core_asgaya_cpp_factoryFuncAsgaya_FUN_005a09e0(void)

{
  CAsgaya *pCVar1;
  
  pCVar1 = (CAsgaya *)operator_new(0x33fd4);
  if (pCVar1 == (CAsgaya *)0x0) {
    return (CAsgaya *)0x0;
  }
  pCVar1 = core_asgaya_cpp_CAsgaya_ctor_FUN_005a0a10(pCVar1);
  return pCVar1;
}
