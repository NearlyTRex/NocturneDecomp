// Name: core_batman.cpp_factoryFuncBatman_FUN_00412af0
// Address: 00412af0
// Address Range: [[00412af0, 00412b0b]]
// Convention: __cdecl
// Signature: CBatman * __cdecl core_batman_cpp_factoryFuncBatman_FUN_00412af0(void)

#include "nocturne.h"

CBatman * __cdecl core_batman_cpp_factoryFuncBatman_FUN_00412af0(void)

{
  CBatman *pCVar1;
  
  pCVar1 = (CBatman *)operator_new(0x10bb4);
  if (pCVar1 == (CBatman *)0x0) {
    return (CBatman *)0x0;
  }
  pCVar1 = core_batman_cpp_CBatman_ctor_FUN_00412b20(pCVar1);
  return pCVar1;
}
