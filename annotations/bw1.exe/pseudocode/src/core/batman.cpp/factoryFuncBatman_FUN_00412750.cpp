// Name: core_batman.cpp_factoryFuncBatman_FUN_00412750
// Address: 00412750
// Address Range: [[00412750, 0041276b]]
// Convention: __cdecl
// Signature: CBatman * __cdecl core_batman_cpp_factoryFuncBatman_FUN_00412750(void)

#include "nocturne.h"

CBatman * __cdecl core_batman_cpp_factoryFuncBatman_FUN_00412750(void)

{
  CBatman *pCVar1;
  
  pCVar1 = (CBatman *)operator_new(0xc328);
  if (pCVar1 == (CBatman *)0x0) {
    return (CBatman *)0x0;
  }
  pCVar1 = core_batman_cpp_CBatman_ctor_FUN_00412780(pCVar1);
  return pCVar1;
}
