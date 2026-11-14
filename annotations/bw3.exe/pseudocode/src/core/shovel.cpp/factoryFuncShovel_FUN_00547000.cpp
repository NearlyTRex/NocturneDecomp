// Name: core_shovel.cpp_factoryFuncShovel_FUN_00547000
// Address: 00547000
// Address Range: [[00547000, 0054701b]]
// Convention: __cdecl
// Signature: CShovel * __cdecl core_shovel_cpp_factoryFuncShovel_FUN_00547000(void)

#include "nocturne.h"

CShovel * __cdecl core_shovel_cpp_factoryFuncShovel_FUN_00547000(void)

{
  CShovel *pCVar1;
  
  pCVar1 = (CShovel *)operator_new(0x594);
  if (pCVar1 == (CShovel *)0x0) {
    return (CShovel *)0x0;
  }
  pCVar1 = core_shovel_cpp_CShovel_ctor_FUN_00547030(pCVar1);
  return pCVar1;
}
