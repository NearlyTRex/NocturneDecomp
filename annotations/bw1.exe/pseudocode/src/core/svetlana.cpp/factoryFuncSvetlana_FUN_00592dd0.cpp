// Name: core_svetlana.cpp_factoryFuncSvetlana_FUN_00592dd0
// Address: 00592dd0
// Address Range: [[00592dd0, 00592deb]]
// Convention: __cdecl
// Signature: CSvetlana * __cdecl core_svetlana_cpp_factoryFuncSvetlana_FUN_00592dd0(void)

#include "nocturne.h"

CSvetlana * __cdecl core_svetlana_cpp_factoryFuncSvetlana_FUN_00592dd0(void)

{
  CSvetlana *pCVar1;
  
  pCVar1 = (CSvetlana *)operator_new(0x95630);
  if (pCVar1 == (CSvetlana *)0x0) {
    return (CSvetlana *)0x0;
  }
  pCVar1 = core_svetlana_cpp_CSvetlana_ctor_FUN_00592e00(pCVar1);
  return pCVar1;
}
