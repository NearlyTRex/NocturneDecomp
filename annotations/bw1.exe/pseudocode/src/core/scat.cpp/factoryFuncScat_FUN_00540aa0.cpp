// Name: core_scat.cpp_factoryFuncScat_FUN_00540aa0
// Address: 00540aa0
// Address Range: [[00540aa0, 00540abb]]
// Convention: __cdecl
// Signature: CScat * __cdecl core_scat_cpp_factoryFuncScat_FUN_00540aa0(void)

#include "nocturne.h"

CScat * __cdecl core_scat_cpp_factoryFuncScat_FUN_00540aa0(void)

{
  CScat *pCVar1;
  
  pCVar1 = (CScat *)operator_new(0x1ffd8);
  if (pCVar1 == (CScat *)0x0) {
    return (CScat *)0x0;
  }
  pCVar1 = core_scat_cpp_CScat_ctor_FUN_00540ad0(pCVar1);
  return pCVar1;
}
