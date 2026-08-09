// Name: core_batman.cpp_factoryFuncBatman_FUN_004133b0
// Address: 004133b0
// Address Range: [[004133b0, 004133cb]]
// Convention: __cdecl
// Signature: CBatman * __cdecl core_batman_cpp_factoryFuncBatman_FUN_004133b0(void)

#include "nocturne.h"

CBatman * __cdecl core_batman_cpp_factoryFuncBatman_FUN_004133b0(void)

{
  CBatman *pCVar1;
  
  pCVar1 = operator_new(0xbde0);
  if (pCVar1 == (CBatman *)0x0) {
    return (CBatman *)0x0;
  }
  pCVar1 = core_batman_cpp_CBatman_ctor_FUN_004133e0(pCVar1);
  return pCVar1;
}
