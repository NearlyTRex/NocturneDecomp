// Name: core_baal.cpp_factoryFuncBaal_FUN_00596630
// Address: 00596630
// Address Range: [[00596630, 0059664b]]
// Convention: __cdecl
// Signature: CBaal * __cdecl core_baal_cpp_factoryFuncBaal_FUN_00596630(void)

#include "nocturne.h"

CBaal * __cdecl core_baal_cpp_factoryFuncBaal_FUN_00596630(void)

{
  CBaal *pCVar1;
  
  pCVar1 = (CBaal *)operator_new(0xd0bc);
  if (pCVar1 == (CBaal *)0x0) {
    return (CBaal *)0x0;
  }
  pCVar1 = core_baal_cpp_CBaal_ctor_FUN_00596660(pCVar1);
  return pCVar1;
}
