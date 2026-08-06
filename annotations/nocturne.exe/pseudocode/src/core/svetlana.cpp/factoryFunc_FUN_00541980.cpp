// Name: core_svetlana.cpp_factoryFunc_FUN_00541980
// Address: 00541980
// Address Range: [[00541980, 0054199b]]
// Convention: __cdecl
// Signature: CSvetlana * __cdecl core_svetlana_cpp_factoryFunc_FUN_00541980(void)

#include "nocturne.h"

CSvetlana * __cdecl core_svetlana_cpp_factoryFunc_FUN_00541980(void)

{
  CSvetlana *pCVar1;
  
  pCVar1 = operator_new(0x950c0);
  if (pCVar1 == (CSvetlana *)0x0) {
    return (CSvetlana *)0x0;
  }
  pCVar1 = core_svetlana_cpp_CSvetlana_ctor_FUN_005419b0(pCVar1);
  return pCVar1;
}
