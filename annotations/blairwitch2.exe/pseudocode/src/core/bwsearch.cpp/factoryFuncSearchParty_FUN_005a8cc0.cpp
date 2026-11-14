// Name: core_bwsearch.cpp_factoryFuncSearchParty_FUN_005a8cc0
// Address: 005a8cc0
// Address Range: [[005a8cc0, 005a8cdb]]
// Convention: __cdecl
// Signature: CSearchParty * __cdecl core_bwsearch_cpp_factoryFuncSearchParty_FUN_005a8cc0(void)

#include "nocturne.h"

CSearchParty * __cdecl core_bwsearch_cpp_factoryFuncSearchParty_FUN_005a8cc0(void)

{
  CSearchParty *pCVar1;
  
  pCVar1 = (CSearchParty *)operator_new(0x11850);
  if (pCVar1 == (CSearchParty *)0x0) {
    return (CSearchParty *)0x0;
  }
  pCVar1 = core_bwsearch_cpp_CSearchParty_ctor_FUN_005a8cf0(pCVar1);
  return pCVar1;
}
