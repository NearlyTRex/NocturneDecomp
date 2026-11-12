// Name: core_svetlana.cpp_factoryFuncSvetlana_FUN_00570190
// Address: 00570190
// Address Range: [[00570190, 005701ab]]
// Convention: __cdecl
// Signature: CSvetlana * __cdecl core_svetlana_cpp_factoryFuncSvetlana_FUN_00570190(void)

#include "nocturne.h"

CSvetlana * __cdecl core_svetlana_cpp_factoryFuncSvetlana_FUN_00570190(void)

{
  CSvetlana *pCVar1;
  
  pCVar1 = (CSvetlana *)operator_new(0x9acc4);
  if (pCVar1 == (CSvetlana *)0x0) {
    return (CSvetlana *)0x0;
  }
  pCVar1 = core_svetlana_cpp_CSvetlana_ctor_FUN_005701c0(pCVar1);
  return pCVar1;
}
